// Copyright (c) Meta Platforms, Inc. and affiliates.

#pragma once

// Including the khronos openxr header here to override the one included from IOpenXREntensionPlugin, making sure we use the latest one.
#include "khronos/openxr/openxr.h"
#include "IOpenXRExtensionPlugin.h"
#include "IStereoLayers.h"
#include "OculusXRPassthroughLayer.h"
#include "OculusXRPassthroughXR_DeletionQueue.h"

#define LOCTEXT_NAMESPACE "OculusXRPassthrough"

class FOpenXRSwapchain;
class FOpenXRHMD;
class UMaterial;

namespace XRPassthrough
{
	struct FSettings
	{
		UMaterial* PokeAHoleMaterial;

		bool bPassthroughEnabled;

		bool bExtLayerAlphaBlendAvailable;
		bool bExtPassthroughAvailable;
		bool bExtTriangleMeshAvailable;
		bool bExtColorLutAvailable;
	};
	typedef TSharedPtr<FSettings, ESPMode::ThreadSafe> FSettingsPtr;

	class FPassthroughXR : public IOpenXRExtensionPlugin
	{
	public:
		// IOculusXROpenXRHMDPlugin
		virtual void* OnWaitFrame(XrSession InSession, void* InNext) override;
		virtual bool GetRequiredExtensions(TArray<const ANSICHAR*>& OutExtensions) override;
		virtual bool GetOptionalExtensions(TArray<const ANSICHAR*>& OutExtensions) override;
		virtual const void* OnCreateInstance(class IOpenXRHMDModule* InModule, const void* InNext) override;
		virtual const void* OnCreateSession(XrInstance InInstance, XrSystemId InSystem, const void* InNext) override;
		virtual void PostCreateSession(XrSession InSession) override;
		virtual void OnDestroySession(XrSession InSession) override;
		virtual const void* OnEndProjectionLayer(XrSession InSession, int32 InLayerIndex, const void* InNext, XrCompositionLayerFlags& OutFlags) override;

		virtual void OnSetupLayers_RenderThread(XrSession InSession, const TArray<uint32_t>& LayerIds) override;
		virtual void UpdateCompositionLayers(XrSession InSession, TArray<const XrCompositionLayerBaseHeader*>& Headers) override;

#ifdef WITH_OCULUS_BRANCH
		virtual bool OnEndGameFrame(FWorldContext& WorldContext) override;
#endif

		virtual void OnBeginRendering_GameThread(XrSession InSession) override;

#ifdef WITH_OCULUS_BRANCH
		virtual void FinishRenderFrame_RenderThread(FRDGBuilder& GraphBuilder) override;
#endif

	public:
		static TWeakPtr<FPassthroughXR> GetInstance();
		static bool IsPassthoughLayerDesc(const IStereoLayers::FLayerDesc& LayerDesc);
		FPassthroughXR();
		virtual ~FPassthroughXR();
		void RegisterAsOpenXRExtension();

		XrPassthroughFB GetPassthroughInstance() const
		{
			return PassthroughInstance;
		}

		FSettingsPtr GetSettings() const
		{
			return Settings;
		}

	private:
		void InvertTextureAlpha_RenderThread(FRHICommandList& RHICmdList, FRHITexture* Texture, FRHITexture* TempTexture, const FIntRect& ViewportRect);

		FPassthroughLayerPtr CreateStereoLayerFromDesc(const IStereoLayers::FLayerDesc& LayerDesc) const;
		void ShutdownPassthrough(XrSession InSession);
		void InitializePassthrough(XrSession InSession);
		void Update_GameThread(XrSession InSession);
		bool IsPassthroughEnabled(void) const;

		IRendererModule* RendererModule;
		FTextureRHIRef InvAlphaTexture;
		FOpenXRSwapchain* ColorSwapchain;

		XrCompositionLayerAlphaBlendFB ProjectionLayerAlphaBlend;
		TArray<FPassthroughLayerPtr> Layers_RenderThread;

		XRPassthrough::FDeferredDeletionQueue DeferredDeletion;

		bool bPassthroughInitialized;
		XrPassthroughFB PassthroughInstance;

		FSettingsPtr Settings;

		FOpenXRHMD* OpenXRHMD;

		float WorldToMetersScale;
		float WorldToMetersScale_RenderThread;
		FTransform TrackingToWorld;
		FTransform TrackingToWorld_RenderThread;
	};

} // namespace XRPassthrough

#undef LOCTEXT_NAMESPACE
