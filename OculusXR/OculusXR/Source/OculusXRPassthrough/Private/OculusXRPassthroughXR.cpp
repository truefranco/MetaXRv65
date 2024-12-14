// Copyright (c) Meta Platforms, Inc. and affiliates.

#include "OculusXRPassthroughXR.h"

#include "Engine/GameEngine.h"
#include "IOpenXRHMDModule.h"
#include "OpenXRHMD.h"
#include "OpenXRHMD_Swapchain.h"
#include "OculusXRHMDRuntimeSettings.h"
#include "OculusXRHMD_CustomPresent.h"
#include "OculusXRPassthroughXRFunctions.h"
#include "OculusXRPassthroughModule.h"
#include "StereoRendering.h"
#include "Engine/RendererSettings.h"
#include "RenderGraphBuilder.h"
#include "XRThreadUtils.h"
#include "OculusXRHMD\Private\OculusXRResourceHolder.h"

#define LOCTEXT_NAMESPACE "OculusXRPassthrough"

namespace XRPassthrough
{
	TWeakPtr<FPassthroughXR> FPassthroughXR::GetInstance()
	{
		return FOculusXRPassthroughModule::Get().GetPassthroughExtensionPlugin();
	}

	FPassthroughXR::FPassthroughXR()
		: ProjectionLayerAlphaBlend{}
		, Layers_RenderThread{}
		, bPassthroughInitialized(false)
		, PassthroughInstance{ XR_NULL_HANDLE }
		, Settings(nullptr)
	{
		static const FName RendererModuleName("Renderer");
		RendererModule = FModuleManager::GetModulePtr<IRendererModule>(RendererModuleName);
		Settings = MakeShareable(new FSettings());
	}

	FPassthroughXR::~FPassthroughXR()
	{
	}

	void FPassthroughXR::RegisterAsOpenXRExtension()
	{
#if defined(WITH_OCULUS_BRANCH)
		// Feature not enabled on Marketplace build. Currently only for the meta fork
		RegisterOpenXRExtensionModularFeature();
#endif
	}

	bool FPassthroughXR::GetRequiredExtensions(TArray<const ANSICHAR*>& OutExtensions)
	{
		OutExtensions.Add(XR_FB_PASSTHROUGH_EXTENSION_NAME);
		return true;
	}

	bool FPassthroughXR::GetOptionalExtensions(TArray<const ANSICHAR*>& OutExtensions)
	{
		OutExtensions.Add(XR_FB_COMPOSITION_LAYER_ALPHA_BLEND_EXTENSION_NAME);
		OutExtensions.Add(XR_FB_TRIANGLE_MESH_EXTENSION_NAME);
		OutExtensions.Add(XR_META_PASSTHROUGH_COLOR_LUT_EXTENSION_NAME);
		return true;
	}

	const void* FPassthroughXR::OnCreateInstance(class IOpenXRHMDModule* InModule, const void* InNext)
	{
		if (InModule != nullptr)
		{
			Settings->bExtLayerAlphaBlendAvailable = InModule->IsExtensionEnabled(XR_FB_COMPOSITION_LAYER_ALPHA_BLEND_EXTENSION_NAME);
			Settings->bExtPassthroughAvailable = InModule->IsExtensionEnabled(XR_FB_PASSTHROUGH_EXTENSION_NAME);
			Settings->bExtTriangleMeshAvailable = InModule->IsExtensionEnabled(XR_FB_TRIANGLE_MESH_EXTENSION_NAME);
			Settings->bExtColorLutAvailable = InModule->IsExtensionEnabled(XR_META_PASSTHROUGH_COLOR_LUT_EXTENSION_NAME);
		}
		return InNext;
	}

	const void* FPassthroughXR::OnCreateSession(XrInstance InInstance, XrSystemId InSystem, const void* InNext)
	{
		InitOpenXRFunctions(InInstance);

		Settings->PokeAHoleMaterial = Cast<UMaterial>(FSoftObjectPath(TEXT("/OculusXR/Materials/PokeAHoleMaterial")).TryLoad());

		OpenXRHMD = (FOpenXRHMD*)GEngine->XRSystem.Get();

		const UOculusXRHMDRuntimeSettings* HMDSettings = GetDefault<UOculusXRHMDRuntimeSettings>();
		Settings->bPassthroughEnabled = HMDSettings->bInsightPassthroughEnabled;

		return InNext;
	}

	void FPassthroughXR::PostCreateSession(XrSession InSession)
	{
		if (Settings->bPassthroughEnabled)
		{
			ExecuteOnRenderThread([this, InSession](FRHICommandListImmediate& RHICmdList) {
				InitializePassthrough(InSession);
			});
		}
	}

	void FPassthroughXR::OnDestroySession(XrSession InSession)
	{
		// Release resources
		ExecuteOnRenderThread([this, InSession]() {
			Layers_RenderThread.Reset();
			InvAlphaTexture.SafeRelease();

			DeferredDeletion.HandleLayerDeferredDeletionQueue_RenderThread(true);

			ShutdownPassthrough(InSession);
		});

		OpenXRHMD = nullptr;
	}

	void* FPassthroughXR::OnWaitFrame(XrSession InSession, void* InNext)
	{
		Update_GameThread(InSession);
		return InNext;
	}

	bool FPassthroughXR::IsPassthroughEnabled(void) const
	{
		return bPassthroughInitialized;
	}

	void FPassthroughXR::InvertTextureAlpha_RenderThread(FRHICommandList& RHICmdList, FRHITexture* Texture, FRHITexture* TempTexture, const FIntRect& ViewportRect)
	{
		{
			FRHITexture* SrcTexture = Texture;
			FRHITexture* DstTexture = TempTexture;
			const FIntRect SrcRect(ViewportRect);
			const FIntRect DstRect(0, 0, ViewportRect.Size().X, ViewportRect.Size().Y);

			const bool bAlphaPremultiply = false;
			const bool bNoAlphaWrite = false;
			const bool bInvertSrcY = false;
			const bool sRGBSource = false;
			const bool bInvertAlpha = true;
			const auto FeatureLevel = GEngine ? GEngine->GetDefaultWorldFeatureLevel() : GMaxRHIFeatureLevel;
			const bool bUsingVulkan = RHIGetInterfaceType() == ERHIInterfaceType::Vulkan;
			OculusXRHMD::FCustomPresent::CopyTexture_RenderThread(RHICmdList.GetAsImmediate(), RendererModule, DstTexture, SrcTexture, FeatureLevel, bUsingVulkan,
				DstRect, SrcRect, bAlphaPremultiply, bNoAlphaWrite, bInvertSrcY, sRGBSource, bInvertAlpha);
		}

		{
			FRHICopyTextureInfo CopyInfo;
			CopyInfo.Size = FIntVector(ViewportRect.Size().X, ViewportRect.Size().Y, 1);
			CopyInfo.SourcePosition = FIntVector::ZeroValue;
			CopyInfo.DestPosition = FIntVector(ViewportRect.Min.X, ViewportRect.Min.Y, 0);
			CopyInfo.SourceSliceIndex = 0;
			CopyInfo.DestSliceIndex = 0;

			if (Texture->GetDesc().IsTextureArray() && TempTexture->GetDesc().IsTextureArray())
			{
				CopyInfo.NumSlices = FMath::Min(Texture->GetDesc().ArraySize, TempTexture->GetDesc().ArraySize);
			}

			FRHITexture* SrcTexture = TempTexture;
			FRHITexture* DstTexture = Texture;
			RHICmdList.Transition(FRHITransitionInfo(SrcTexture, ERHIAccess::Unknown, ERHIAccess::CopySrc));
			RHICmdList.Transition(FRHITransitionInfo(DstTexture, ERHIAccess::Unknown, ERHIAccess::CopyDest));
			RHICmdList.CopyTexture(SrcTexture, DstTexture, CopyInfo);
			RHICmdList.Transition(FRHITransitionInfo(DstTexture, ERHIAccess::CopyDest, ERHIAccess::SRVMask));
			RHICmdList.Transition(FRHITransitionInfo(SrcTexture, ERHIAccess::CopySrc, ERHIAccess::SRVMask));
		}
	}

	FPassthroughLayerPtr FPassthroughXR::CreateStereoLayerFromDesc(const IStereoLayers::FLayerDesc& LayerDesc) const
	{
		FPassthroughLayerPtr Layer = nullptr;

		if (FPassthroughLayer::IsPassthoughLayerDesc(LayerDesc))
		{
			check(PassthroughInstance != XR_NULL_HANDLE);
			Layer = MakeShareable(new FPassthroughLayer(PassthroughInstance, GetInstance()));
		}
		return Layer;
	}

	void FPassthroughXR::OnSetupLayers_RenderThread(XrSession InSession, const TArray<uint32_t>& LayerIds)
	{
		check(IsInRenderingThread());

#ifdef WITH_OCULUS_BRANCH
		ColorSwapchain = OpenXRHMD->GetColorSwapchain_RenderThread();
#endif

#if PLATFORM_WINDOWS
PRAGMA_DISABLE_DEPRECATION_WARNINGS
		if (ColorSwapchain && InvAlphaTexture == nullptr)
		{
			static const IConsoleVariable* CVarPropagateAlpha = IConsoleManager::Get().FindConsoleVariable(TEXT("r.PostProcessing.PropagateAlpha"));
			const EAlphaChannelMode::Type PropagateAlpha = EAlphaChannelMode::FromInt(CVarPropagateAlpha->GetInt());
			if (PropagateAlpha == EAlphaChannelMode::AllowThroughTonemapper)
			{
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				const FRHITextureDesc TextureDesc = ColorSwapchain->GetTexture()->GetDesc();
				uint32 SizeX = TextureDesc.GetSize().X;
				uint32 SizeY = TextureDesc.GetSize().Y;
				EPixelFormat ColorFormat = TextureDesc.Format;
				uint32 NumMips = TextureDesc.NumMips;
				uint32 NumSamples = TextureDesc.NumSamples;

				FClearValueBinding ColorTextureBinding = FClearValueBinding::Black;

				const ETextureCreateFlags InvTextureCreateFlags = TexCreate_ShaderResource | TexCreate_RenderTargetable;
				FRHITextureCreateDesc InvTextureDesc{};
				if (ColorSwapchain->GetTexture2DArray() != nullptr)
				{
					InvTextureDesc = FRHITextureCreateDesc::Create2DArray(TEXT("InvAlphaTexture"))
										 .SetArraySize(2)
										 .SetExtent(SizeX, SizeY)
										 .SetFormat(ColorFormat)
										 .SetNumMips(NumMips)
										 .SetNumSamples(NumSamples)
										 .SetFlags(InvTextureCreateFlags | TexCreate_TargetArraySlicesIndependently)
										 .SetClearValue(ColorTextureBinding);
				}
				else
				{
					InvTextureDesc = FRHITextureCreateDesc::Create2D(TEXT("InvAlphaTexture"))
										 .SetExtent(SizeX, SizeY)
										 .SetFormat(ColorFormat)
										 .SetNumMips(NumMips)
										 .SetNumSamples(NumSamples)
										 .SetFlags(InvTextureCreateFlags)
										 .SetClearValue(ColorTextureBinding);
				}
				InvAlphaTexture = RHICreateTexture(InvTextureDesc);
			}
		}
#endif

		IStereoLayers* StereoLayers;
		if (!GEngine->StereoRenderingDevice.IsValid() || (StereoLayers = GEngine->StereoRenderingDevice->GetStereoLayers()) == nullptr)
		{
			return;
		}

		if (!IsPassthroughEnabled())
		{
			return;
		}

		TArray<IStereoLayers::FLayerDesc> LayerDescList;
		for (uint32_t LayerId : LayerIds)
		{
			IStereoLayers::FLayerDesc LayerDesc;
			if (StereoLayers->GetLayerDesc(LayerId, LayerDesc))
			{
				LayerDescList.Emplace(LayerDesc);
			}
		}
		LayerDescList.Sort(FLayerDesc_CompareId());

		int32 LayerIndex_Desc = 0;
		int32 LayerIndex_RenderThread = 0;
		TArray<FPassthroughLayerPtr> ValidLayers;

		// Scan for changes
		while (LayerIndex_Desc < LayerDescList.Num() && LayerIndex_RenderThread < Layers_RenderThread.Num())
		{
			uint32 LayerIdA = LayerDescList[LayerIndex_Desc].GetLayerId();
			uint32 LayerIdB = Layers_RenderThread[LayerIndex_RenderThread]->GetDesc().GetLayerId();

			if (LayerIdA < LayerIdB) // If a layer was inserted in the middle of existing ones
			{
				FPassthroughLayerPtr Layer = CreateStereoLayerFromDesc(LayerDescList[LayerIndex_Desc]);
				if (Layer && Layer->Initialize_RenderThread(InSession, LayerDescList[LayerIndex_Desc]))
				{
					ValidLayers.Add(Layer);
				}
				LayerIndex_Desc++;
			}
			else if (LayerIdA > LayerIdB) // If a layer was removed in the middle of existing ones
			{
				DeferredDeletion.AddOpenXRLayerToDeferredDeletionQueue(Layers_RenderThread[LayerIndex_RenderThread++]);
			}
			else // This layer is not new nor removed
			{
				if (Layers_RenderThread[LayerIndex_RenderThread]->Initialize_RenderThread(InSession, LayerDescList[LayerIndex_Desc]))
				{
					ValidLayers.Add(Layers_RenderThread[LayerIndex_RenderThread++]);
				}
				LayerIndex_Desc++;
			}
		}

		// Create missing layers
		while (LayerIndex_Desc < LayerDescList.Num())
		{
			FPassthroughLayerPtr Layer = CreateStereoLayerFromDesc(LayerDescList[LayerIndex_Desc]);
			if (Layer && Layer->Initialize_RenderThread(InSession, LayerDescList[LayerIndex_Desc]))
			{
				ValidLayers.Add(Layer);
			}
			LayerIndex_Desc++;
		}

		// Delete remaining layers
		while (LayerIndex_RenderThread < Layers_RenderThread.Num())
		{
			DeferredDeletion.AddOpenXRLayerToDeferredDeletionQueue(Layers_RenderThread[LayerIndex_RenderThread++]);
		}

		Layers_RenderThread = ValidLayers;

		DeferredDeletion.HandleLayerDeferredDeletionQueue_RenderThread();
	}

	void FPassthroughXR::UpdateCompositionLayers(XrSession InSession, TArray<const XrCompositionLayerBaseHeader*>& Headers)
	{
		check(IsInRenderingThread() || IsInRHIThread());

		TArray<FPassthroughLayerPtr> SortedLayers = Layers_RenderThread;
		SortedLayers.Sort(FLayerDesc_ComparePriority());

		// Headers array already contains (at least) one layer which is the eye's layer.
		// Underlay/SupportDetph layers need to be inserted before that layer, ordered by priority.
		int EyeLayerId = 0;
		for (const FPassthroughLayerPtr& Layer : SortedLayers)
		{
			if (Layer->IsBackgroundLayer() || Layer->PassthroughSupportsDepth())
			{
				const XrCompositionLayerBaseHeader* CompositionLayerHeader = Layer->GetXrCompositionLayerHeader();
				if (CompositionLayerHeader != nullptr)
				{
					Headers.Insert(CompositionLayerHeader, EyeLayerId++);
				}
			}
			else if (Layer->IsOverlayLayer())
			{
				const XrCompositionLayerBaseHeader* CompositionLayerHeader = Layer->GetXrCompositionLayerHeader();
				if (CompositionLayerHeader != nullptr)
				{
					Headers.Add(CompositionLayerHeader);
				}
			}
		}
	}

#ifdef WITH_OCULUS_BRANCH
	bool FPassthroughXR::OnEndGameFrame(FWorldContext& WorldContext)
	{
		FXRTrackingSystemBase* TS = static_cast<FXRTrackingSystemBase*>(GEngine->XRSystem.Get());
		TrackingToWorld = TS->GetTrackingToWorldTransform();
		WorldToMetersScale = TS->GetWorldToMetersScale();
		return true;
	}
#endif

	void FPassthroughXR::OnBeginRendering_GameThread(XrSession InSession)
	{
		ENQUEUE_RENDER_COMMAND(TransferFrameStateToRenderingThread)
		([this](FRHICommandListImmediate& RHICmdList) mutable {
			TrackingToWorld_RenderThread = TrackingToWorld;
			WorldToMetersScale_RenderThread = WorldToMetersScale;
		});
	}

#ifdef WITH_OCULUS_BRANCH
	void FPassthroughXR::FinishRenderFrame_RenderThread(FRDGBuilder& GraphBuilder)
	{
		check(IsInRenderingThread());

		ColorSwapchain = OpenXRHMD->GetColorSwapchain_RenderThread();

		if (ColorSwapchain && InvAlphaTexture)
		{
			FRHITexture* SwapchainTexture = ColorSwapchain->GetTexture();

			FRDGEventName PassName = RDG_EVENT_NAME("FPassthroughXR_InvertTextureAlpha");
			GraphBuilder.AddPass(MoveTemp(PassName), ERDGPassFlags::None,
				[this, SwapchainTexture](FRHICommandListImmediate& RHICmdList) {
					const FRHITextureDesc TextureDesc = SwapchainTexture->GetDesc();
					FIntRect TextureRect = FIntRect(0, 0, TextureDesc.GetSize().X, TextureDesc.GetSize().Y);

					InvertTextureAlpha_RenderThread(RHICmdList, SwapchainTexture, InvAlphaTexture, TextureRect);
				});
		}

		XrSpace Space = OpenXRHMD->GetTrackingSpace();
		XrTime DisplayTime = OpenXRHMD->GetDisplayTime();

		FRDGEventName PassName = RDG_EVENT_NAME("FPassthroughXR_UpdatePassthroughLayers");
		GraphBuilder.AddPass(MoveTemp(PassName), ERDGPassFlags::None,
			[this, Space, DisplayTime](FRHICommandListImmediate& RHICmdList) {
				for (const FPassthroughLayerPtr& Layer : Layers_RenderThread)
				{
					Layer->UpdatePassthrough_RenderThread(RHICmdList,
						Space,
						DisplayTime,
						WorldToMetersScale_RenderThread,
						TrackingToWorld_RenderThread);
				}
			});
	}
#endif

	const void* FPassthroughXR::OnEndProjectionLayer(XrSession InSession, int32 InLayerIndex, const void* InNext, XrCompositionLayerFlags& OutFlags)
	{
		check(IsInRenderingThread() || IsInRHIThread());

		bool bHasBackgroundLayer = false;
		for (const FPassthroughLayerPtr& Layer : Layers_RenderThread)
		{
			if (Layer->IsBackgroundLayer() || Layer->PassthroughSupportsDepth())
			{
				bHasBackgroundLayer = true;
				break;
			}
		}

		if (bHasBackgroundLayer)
		{
			OutFlags |= XR_COMPOSITION_LAYER_BLEND_TEXTURE_SOURCE_ALPHA_BIT;

			if (Settings->bExtLayerAlphaBlendAvailable)
			{
				InNext = &ProjectionLayerAlphaBlend;
				ProjectionLayerAlphaBlend.type = XR_TYPE_COMPOSITION_LAYER_ALPHA_BLEND_FB;
				ProjectionLayerAlphaBlend.srcFactorColor = XR_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA_FB;
				ProjectionLayerAlphaBlend.srcFactorAlpha = XR_BLEND_FACTOR_ONE_FB;
				ProjectionLayerAlphaBlend.dstFactorColor = XR_BLEND_FACTOR_SRC_ALPHA_FB;
				ProjectionLayerAlphaBlend.dstFactorAlpha = XR_BLEND_FACTOR_ZERO_FB;
				ProjectionLayerAlphaBlend.next = nullptr;
			}
			else
			{
				// XR_COMPOSITION_LAYER_UNPREMULTIPLIED_ALPHA_BIT is required for the eye layer to be correctly blended
				// when XR_FB_composition_layer_alpha_blend extension is not available (e.g. Link)
				OutFlags |= XR_COMPOSITION_LAYER_UNPREMULTIPLIED_ALPHA_BIT;
			}
		}

		return InNext;
	}

	void FPassthroughXR::InitializePassthrough(XrSession InSession)
	{
		if (bPassthroughInitialized)
			return;

		bPassthroughInitialized = true;

		check(IsInRenderingThread());

		const XrPassthroughCreateInfoFB PassthroughCreateInfo = { XR_TYPE_PASSTHROUGH_CREATE_INFO_FB };

		if (!XR_SUCCEEDED(xrCreatePassthroughFB(InSession, &PassthroughCreateInfo, &PassthroughInstance)))
		{
			UE_LOG(LogHMD, Error, TEXT("xrCreatePassthroughFB failed"));
			return;
		}

		if (!XR_SUCCEEDED(xrPassthroughStartFB(PassthroughInstance)))
		{
			UE_LOG(LogHMD, Error, TEXT("xrPassthroughStartFB failed"));
			return;
		}
	}

	void FPassthroughXR::ShutdownPassthrough(XrSession InSession)
	{
		if (!bPassthroughInitialized)
			return;

		bPassthroughInitialized = false;

		check(IsInRenderingThread());

		if (PassthroughInstance != XR_NULL_HANDLE)
		{
			if (!XR_SUCCEEDED(xrDestroyPassthroughFB(PassthroughInstance)))
			{
				UE_LOG(LogHMD, Error, TEXT("xrDestroyPassthroughFB failed"));
			}
			PassthroughInstance = nullptr;
		}
	}

	void FPassthroughXR::Update_GameThread(XrSession InSession)
	{
		check(IsInGameThread());

		check(Settings != nullptr);
		const bool bPassthroughEnabled = Settings->bPassthroughEnabled;

		ExecuteOnRenderThread_DoNotWait([this, InSession, bPassthroughEnabled](FRHICommandListImmediate& RHICmdList) {
			if (bPassthroughEnabled && !bPassthroughInitialized)
			{
				InitializePassthrough(InSession);
			}

			if (!bPassthroughEnabled && bPassthroughInitialized)
			{
				ShutdownPassthrough(InSession);
			}
		});

		for (const FPassthroughLayerPtr& Layer : Layers_RenderThread)
		{
			Layer->UpdatePassthroughPokeActors_GameThread();
		}
	}

} // namespace XRPassthrough

#undef LOCTEXT_NAMESPACE
