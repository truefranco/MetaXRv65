// @lint-ignore-every LICENSELINT
// Copyright Epic Games, Inc. All Rights Reserved.

#include "OculusXRHMD_FoveatedRendering.h"

#if !UE_VERSION_OLDER_THAN(5, 3, 0)
#include "RenderGraphBuilder.h"
#include "HeadMountedDisplayTypes.h" // For the LogHMD log category

FOculusXRFoveatedRenderingImageGenerator::FOculusXRFoveatedRenderingImageGenerator(const FXRSwapChainPtr& Swapchain)
	: FoveationSwapchain(Swapchain)
{
	GVRSImageManager.RegisterExternalImageGenerator(this);
}

FOculusXRFoveatedRenderingImageGenerator::~FOculusXRFoveatedRenderingImageGenerator()
{
	GVRSImageManager.UnregisterExternalImageGenerator(this);
}

FRDGTextureRef FOculusXRFoveatedRenderingImageGenerator::GetImage(FRDGBuilder& GraphBuilder, const FViewInfo& ViewInfo, FVariableRateShadingImageManager::EVRSImageType ImageType)
{
	if (!FoveationSwapchain.IsValid())
	{
		return nullptr;
	}

	FTexture2DRHIRef SwapchainTexture = FoveationSwapchain->GetTexture2DArray() ? FoveationSwapchain->GetTexture2DArray() : FoveationSwapchain->GetTexture2D();
	FIntPoint TexSize = SwapchainTexture->GetSizeXY();
	// Only set texture and return true if we have a valid texture of compatible size
	if (SwapchainTexture->IsValid() && TexSize.X > 0 && TexSize.Y > 0)
	{
		TRefCountPtr<IPooledRenderTarget> PooledRenderTarget = CreateRenderTarget(SwapchainTexture, *SwapchainTexture->GetName().ToString());
		return GraphBuilder.RegisterExternalTexture(PooledRenderTarget, *SwapchainTexture->GetName().ToString(), ERDGTextureFlags::SkipTracking);
	}
	return nullptr;
}

void FOculusXRFoveatedRenderingImageGenerator::PrepareImages(FRDGBuilder& GraphBuilder, const FSceneViewFamily& ViewFamily, const FMinimalSceneTextures& SceneTextures)
{
	return;
}

bool FOculusXRFoveatedRenderingImageGenerator::IsEnabledForView(const FSceneView& View) const
{
	return View.StereoPass != EStereoscopicPass::eSSP_FULL;
}

FRDGTextureRef FOculusXRFoveatedRenderingImageGenerator::GetDebugImage(FRDGBuilder& GraphBuilder, const FViewInfo& ViewInfo, FVariableRateShadingImageManager::EVRSImageType ImageType)
{
	return nullptr;
}
#endif // !UE_VERSION_OLDER_THAN(5, 3, 0)
