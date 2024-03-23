// @lint-ignore-every LICENSELINT
// Copyright Epic Games, Inc. All Rights Reserved.

#include "OculusXROpenXRHMD.h"
#include "OpenXRCore.h"
#include "OpenXRPlatformRHI.h"
#include "DefaultSpectatorScreenController.h"
#include "Modules/ModuleManager.h"

#if PLATFORM_ANDROID
//#include <openxr_oculus.h>
#include <dlfcn.h>
#endif //PLATFORM_ANDROID

DEFINE_LOG_CATEGORY(LogOculusOpenXRPlugin);

bool FOculusXROpenXRHMD::IsStandaloneStereoOnlyDevice()
{
#if PLATFORM_ANDROID
	const bool bIsStandaloneStereoDevice = FAndroidMisc::GetDeviceMake() == FString("Oculus");
#else
	const bool bIsStandaloneStereoDevice = false;
#endif
	return bIsStandaloneStereoDevice;
}

bool FOculusXROpenXRHMD::GetRequiredExtensions(TArray<const ANSICHAR*>& OutExtensions)
{
	return true;
}

bool FOculusXROpenXRHMD::GetInteractionProfile(XrInstance InInstance, FString& OutKeyPrefix, XrPath& OutPath, bool& OutHasHaptics)
{
	//UE_LOG(LogOculusOpenXRPlugin, Log, TEXT("Oculus OpenXR GetInteractionProfile"));
	return false; // if you return true, make sure OutPath and OutHasHaptics are initialized
}

bool FOculusXROpenXRHMD::GetSpectatorScreenController(FHeadMountedDisplayBase* InHMDBase, TUniquePtr<FDefaultSpectatorScreenController>& OutSpectatorScreenController)
{
#if PLATFORM_ANDROID
	OutSpectatorScreenController = nullptr;
	return true;
#else  // PLATFORM_ANDROID
	OutSpectatorScreenController = MakeUnique<FDefaultSpectatorScreenController>(InHMDBase);
	return false;
#endif // PLATFORM_ANDROID
}

void FOculusXROpenXRHMD::AddActions(XrInstance Instance, TFunction<XrAction(XrActionType InActionType, const FName& InName, const TArray<XrPath>& InSubactionPaths)> AddAction)
{
	//UE_LOG(LogOculusOpenXRPlugin, Log, TEXT("Oculus OpenXR AddActions"));
	return;
}

void FOculusXROpenXRHMD::OnEvent(XrSession InSession, const XrEventDataBaseHeader* InHeader)
{
	return;
}

const void* FOculusXROpenXRHMD::OnCreateInstance(class IOpenXRHMDModule* InModule, const void* InNext)
{
	//UE_LOG(LogOculusOpenXRPlugin, Log, TEXT("Oculus OpenXR OnCreateInstance"));
	return InNext;
}

const void* FOculusXROpenXRHMD::OnGetSystem(XrInstance InInstance, const void* InNext)
{
	//UE_LOG(LogOculusOpenXRPlugin, Log, TEXT("Oculus OpenXR OnGetSystem"));
	return InNext;
}

const void* FOculusXROpenXRHMD::OnCreateSession(XrInstance InInstance, XrSystemId InSystem, const void* InNext)
{
	//UE_LOG(LogOculusOpenXRPlugin, Log, TEXT("Oculus OpenXR OnCreateSession"));
#if PLATFORM_ANDROID
	if (GRHISupportsRHIThread && GIsThreadedRendering && GUseRHIThread_InternalUseOnly)
	{
		SetRHIThreadEnabled(false, false);
	}
#endif // PLATFORM_ANDROID
	return InNext;
}

const void* FOculusXROpenXRHMD::OnBeginSession(XrSession InSession, const void* InNext)
{
	//UE_LOG(LogOculusOpenXRPlugin, Log, TEXT("Oculus OpenXR OnBeginSession"));
	return InNext;
}

const void* FOculusXROpenXRHMD::OnBeginFrame(XrSession InSession, XrTime DisplayTime, const void* InNext)
{
	//UE_LOG(LogOculusOpenXRPlugin, Log, TEXT("Oculus OpenXR OnBeginFrame"));
	return InNext;
}

const void* FOculusXROpenXRHMD::OnBeginProjectionView(XrSession InSession, int32 InLayerIndex, int32 InViewIndex, const void* InNext)
{
	//UE_LOG(LogOculusOpenXRPlugin, Log, TEXT("Oculus OpenXR OnBeginProjectionView"));
	return InNext;
}

const void* FOculusXROpenXRHMD::OnBeginDepthInfo(XrSession InSession, int32 InLayerIndex, int32 InViewIndex, const void* InNext)
{
	//UE_LOG(LogOculusOpenXRPlugin, Log, TEXT("Oculus OpenXR OnBeginDepthInfo"));
	return InNext;
}

const void* FOculusXROpenXRHMD::OnEndProjectionLayer(XrSession InSession, int32 InLayerIndex, const void* InNext, XrCompositionLayerFlags& OutFlags)
{
	//UE_LOG(LogOculusOpenXRPlugin, Log, TEXT("Oculus OpenXR OnEndProjectionLayer"));

	// XR_COMPOSITION_LAYER_UNPREMULTIPLIED_ALPHA_BIT is required right now because the Oculus mobile runtime blends using alpha otherwise,
	// and we don't have proper inverse alpha support in OpenXR yet (once OpenXR supports inverse alpha, or we change the runtime behavior, remove this)
	OutFlags |= XR_COMPOSITION_LAYER_CORRECT_CHROMATIC_ABERRATION_BIT;
	OutFlags |= XR_COMPOSITION_LAYER_UNPREMULTIPLIED_ALPHA_BIT;

	return InNext;
}

#if UE_VERSION_OLDER_THAN(5, 3, 0)
const void* FOculusXROpenXRHMD::OnEndFrame(XrSession InSession, XrTime DisplayTime, const TArray<XrSwapchainSubImage> InColorImages, const TArray<XrSwapchainSubImage> InDepthImages, const void* InNext)
#else
const void* FOculusXROpenXRHMD::OnEndFrame(XrSession InSession, XrTime DisplayTime, const void* InNext)
#endif
{
	//UE_LOG(LogOculusOpenXRPlugin, Log, TEXT("Oculus OpenXR OnEndFrame"));
	return InNext;
}

const void* FOculusXROpenXRHMD::OnSyncActions(XrSession InSession, const void* InNext)
{
	//UE_LOG(LogOculusOpenXRPlugin, Log, TEXT("Oculus OpenXR OnSyncActions"));
	return InNext;
}

void FOculusXROpenXRHMD::PostSyncActions(XrSession InSession)
{
	//UE_LOG(LogOculusOpenXRPlugin, Log, TEXT("Oculus OpenXR PostSyncActions"));
	return;
}

IMPLEMENT_MODULE(FOculusXROpenXRHMD, OculusXROpenXRHMD)
