// @lint-ignore-every LICENSELINT
// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#include "IOculusXRSceneModule.h"
#include "OculusXRAnchorsModule.h"

#define LOCTEXT_NAMESPACE "OculusXRScene"

//-------------------------------------------------------------------------------------------------
// FOculusXRSceneModule
//-------------------------------------------------------------------------------------------------

DECLARE_LOG_CATEGORY_EXTERN(LogOculusXRScene, Log, All);

#if OCULUS_SCENE_SUPPORTED_PLATFORMS

class FOculusXRSceneModule : public IOculusXRSceneModule, public IOculusXRCreateAnchorComponent
{
public:
	virtual ~FOculusXRSceneModule() = default;

	// IModuleInterface interface
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	// IOculusXRCreateAnchorComponent
	virtual UOculusXRBaseAnchorComponent* TryCreateAnchorComponent(uint64 AnchorHandle, EOculusXRSpaceComponentType Type, UObject* Outer) override;

private:
};

#else // OCULUS_SCENE_SUPPORTED_PLATFORMS

class FOculusXRSceneModule : public FDefaultModuleImpl
{
};

#endif // OCULUS_SCENE_SUPPORTED_PLATFORMS

#undef LOCTEXT_NAMESPACE
