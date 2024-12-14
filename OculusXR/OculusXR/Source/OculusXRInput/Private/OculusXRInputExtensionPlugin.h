// Copyright (c) Meta Platforms, Inc. and affiliates.

#pragma once

#include "khronos/openxr/openxr.h"

#include "CoreMinimal.h"
#include "IOculusXRInputModule.h"
#include "IOpenXRExtensionPlugin.h"
#include "OculusXRInput.h"

namespace OculusXRInput
{
	struct FDerivedActionProperties
	{
		FString Name;
		FKey InputKey;
		FString OpenXRPath;
		XrAction Action;
	};

	class FInputExtensionPlugin : public IOpenXRExtensionPlugin, public IInputDevice
	{
	public:
		void RegisterOpenXRExtensionPlugin()
		{
#if defined(WITH_OCULUS_BRANCH)
			RegisterOpenXRExtensionModularFeature();
#endif
		}

		const FString OculusTouchProfile = TEXT("OculusTouch");
		const FString OculusTouchProProfile = TEXT("OculusTouchPro");
		const FString OculusTouchPlusProfile = TEXT("OculusTouchPlus");

		// IInputDevice
		virtual void SetMessageHandler(const TSharedRef<FGenericApplicationMessageHandler>& InMessageHandler) override;
		void Tick(float DeltaTime) override {};
		void SendControllerEvents() override {};
		virtual bool Exec(UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar) override;
		void SetChannelValue(int32 ControllerId, FForceFeedbackChannelType ChannelType, float Value) override {};
		void SetChannelValues(int32 ControllerId, const FForceFeedbackValues& Values) override {};

	private:
		TSharedPtr<FGenericApplicationMessageHandler> MessageHandler;

#if defined(WITH_OCULUS_BRANCH)
	public:
		// IOpenXRExtensionPlugin
		virtual bool GetOptionalExtensions(TArray<const ANSICHAR*>& OutExtensions) override;
		virtual const void* OnCreateInstance(class IOpenXRHMDModule* InModule, const void* InNext) override;
		virtual bool GetInputKeyOverrides(TArray<FInputKeyOpenXRProperties>& OutOverrides) override;
		virtual void PostCreateInstance(XrInstance InInstance) override;
		virtual bool GetSuggestedBindings(XrPath InInteractionProfile, TArray<XrActionSuggestedBinding>& OutBindings) override;
		virtual void PostSyncActions(XrSession InSession) override;
		virtual void AttachActionSets(TSet<XrActionSet>& OutActionSets) override;
		virtual void GetActiveActionSetsForSync(TArray<XrActiveActionSet>& OutActiveSets);

	private:
		virtual void CreateForAllProfiles(TArray<FInputKeyOpenXRProperties>& OutOverrides, FKey InKey, FString Path);
		virtual void CreateDerivedActions();
		virtual void SendControllerButtonPressed(FKey InKey, bool IsPressed, FPlatformUserId UserId, FInputDeviceId DeviceId);
		virtual void DestroyDerivedActions();

		bool bExtTouchControllerProximityAvailable = false;

		XrInstance Instance = XR_NULL_HANDLE;

		XrActionSet DerivedActionSet = XR_NULL_HANDLE;
		TArray<FDerivedActionProperties> DerivedActions = {
			{ "OculusTouchDerivedLeftThumbstickX", EKeys::OculusTouch_Left_Thumbstick_X, "/user/hand/left/input/thumbstick/x", XR_NULL_HANDLE },
			{ "OculusTouchDerivedLeftThumbstickY", EKeys::OculusTouch_Left_Thumbstick_Y, "/user/hand/left/input/thumbstick/y", XR_NULL_HANDLE },
			{ "OculusTouchDerivedRightThumbstickX", EKeys::OculusTouch_Right_Thumbstick_X, "/user/hand/right/input/thumbstick/x", XR_NULL_HANDLE },
			{ "OculusTouchDerivedRightThumbstickY", EKeys::OculusTouch_Right_Thumbstick_Y, "/user/hand/right/input/thumbstick/y", XR_NULL_HANDLE },
		};

#endif
	};
} // namespace OculusXRInput
