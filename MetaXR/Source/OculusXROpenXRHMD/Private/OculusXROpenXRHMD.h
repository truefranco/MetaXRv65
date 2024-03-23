// @lint-ignore-every LICENSELINT
// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#include "CoreMinimal.h"
#include "Misc/EngineVersionComparison.h"
#include "IOculusXROpenXRHMDPlugin.h"

DECLARE_LOG_CATEGORY_EXTERN(LogOculusOpenXRPlugin, Log, All);

class FOculusXROpenXRHMD : public IOculusXROpenXRHMDPlugin
{
private:
	void* LoaderHandle;

public:
	FOculusXROpenXRHMD()
		: LoaderHandle(nullptr)
	{
	}

	virtual ~FOculusXROpenXRHMD()
	{
	}

	virtual void StartupModule() override
	{
		RegisterOpenXRExtensionModularFeature();
	}

	virtual void ShutdownModule() override
	{
		if (LoaderHandle)
		{
			FPlatformProcess::FreeDllHandle(LoaderHandle);
			LoaderHandle = nullptr;
		}
	}

	virtual bool IsStandaloneStereoOnlyDevice() override;
	virtual bool GetRequiredExtensions(TArray<const ANSICHAR*>& OutExtensions) override;
	virtual bool GetInteractionProfile(XrInstance InInstance, FString& OutKeyPrefix, XrPath& OutPath, bool& OutHasHaptics) override;
	virtual bool GetSpectatorScreenController(FHeadMountedDisplayBase* InHMDBase, TUniquePtr<FDefaultSpectatorScreenController>& OutSpectatorScreenController) override;
	virtual void AddActions(XrInstance Instance, TFunction<XrAction(XrActionType InActionType, const FName& InName, const TArray<XrPath>& InSubactionPaths)> AddAction) override;
	virtual void OnEvent(XrSession InSession, const XrEventDataBaseHeader* InHeader) override;
	virtual const void* OnCreateInstance(class IOpenXRHMDModule* InModule, const void* InNext) override;
	virtual const void* OnGetSystem(XrInstance InInstance, const void* InNext) override;
	virtual const void* OnCreateSession(XrInstance InInstance, XrSystemId InSystem, const void* InNext) override;
	virtual const void* OnBeginSession(XrSession InSession, const void* InNext) override;
	virtual const void* OnBeginFrame(XrSession InSession, XrTime DisplayTime, const void* InNext) override;
	virtual const void* OnBeginProjectionView(XrSession InSession, int32 InLayerIndex, int32 InViewIndex, const void* InNext) override;
	virtual const void* OnBeginDepthInfo(XrSession InSession, int32 InLayerIndex, int32 InViewIndex, const void* InNext) override;
	virtual const void* OnEndProjectionLayer(XrSession InSession, int32 InLayerIndex, const void* InNext, XrCompositionLayerFlags& OutFlags) override;
#if UE_VERSION_OLDER_THAN(5, 3, 0)
	virtual const void* OnEndFrame(XrSession InSession, XrTime DisplayTime, const TArray<XrSwapchainSubImage> InColorImages, const TArray<XrSwapchainSubImage> InDepthImages, const void* InNext) override;
#else
	virtual const void* OnEndFrame(XrSession InSession, XrTime DisplayTime, const void* InNext) override;
#endif
	virtual const void* OnSyncActions(XrSession InSession, const void* InNext) override;
	virtual void PostSyncActions(XrSession InSession) override;
};
