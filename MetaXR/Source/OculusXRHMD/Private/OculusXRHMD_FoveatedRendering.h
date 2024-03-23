// @lint-ignore-every LICENSELINT
// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Misc/EngineVersionComparison.h"

#if !UE_VERSION_OLDER_THAN(5, 4, 0)
#include "VariableRateShadingImageManager.h"
#include "XRSwapchain.h"

class FOculusXRFoveatedRenderingImageGenerator : public IVariableRateShadingImageGenerator
{
public:
	FOculusXRFoveatedRenderingImageGenerator(const FXRSwapChainPtr& Swapchain);
	virtual ~FOculusXRFoveatedRenderingImageGenerator() override;

	// IVariableRateShadingImageGenerator interface
	virtual FRDGTextureRef GetImage(FRDGBuilder& GraphBuilder, const FViewInfo& ViewInfo, FVariableRateShadingImageManager::EVRSImageType ImageType, bool bGetSoftwareImage = false) override;
	virtual void PrepareImages(FRDGBuilder& GraphBuilder, const FSceneViewFamily& ViewFamily, const FMinimalSceneTextures& SceneTextures, bool bPrepareHardwareImages, bool bPrepareSoftwareImages) override;
	// Returns whether or not the given view supports this generator
	virtual bool IsSupportedByView(const FSceneView& View) const override;
	virtual FRDGTextureRef GetDebugImage(FRDGBuilder& GraphBuilder, const FViewInfo& ViewInfo, FVariableRateShadingImageManager::EVRSImageType ImageType, bool bGetSoftwareImage = false) override;
	virtual FVariableRateShadingImageManager::EVRSSourceType GetType() const override
	{
		return FVariableRateShadingImageManager::EVRSSourceType::FixedFoveation;
	}

private:
	const FXRSwapChainPtr& FoveationSwapchain;
};
#endif // !UE_VERSION_OLDER_THAN(5, 3, 0)
