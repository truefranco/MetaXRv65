// Copyright (c) Meta Platforms, Inc. and affiliates.

#include "OculusXRInputExtensionPlugin.h"
#include "OculusXRInputState.h"
#include "OculusXRHMDRuntimeSettings.h"
#include "IOpenXRHMDModule.h"
#include "OpenXRCore.h"

namespace OculusXRInput
{
	void FInputExtensionPlugin::SetMessageHandler(const TSharedRef<FGenericApplicationMessageHandler>& InMessageHandler)
	{
		MessageHandler = InMessageHandler;
	}

	bool FInputExtensionPlugin::Exec(UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar)
	{
		return false;
	}

#if defined(WITH_OCULUS_BRANCH)
	bool FInputExtensionPlugin::GetOptionalExtensions(TArray<const ANSICHAR*>& OutExtensions)
	{
		OutExtensions.Add(XR_FB_TOUCH_CONTROLLER_PROXIMITY_EXTENSION_NAME);
		return true;
	}

	const void* FInputExtensionPlugin::OnCreateInstance(class IOpenXRHMDModule* InModule, const void* InNext)
	{
		bExtTouchControllerProximityAvailable = InModule->IsExtensionEnabled(XR_FB_TOUCH_CONTROLLER_PROXIMITY_EXTENSION_NAME);
		return InNext;
	}

	void FInputExtensionPlugin::PostCreateInstance(XrInstance InInstance)
	{
		Instance = InInstance;
	}

	void FInputExtensionPlugin::CreateDerivedActions()
	{
		const UOculusXRHMDRuntimeSettings* Settings = GetMutableDefault<UOculusXRHMDRuntimeSettings>();
		if (!Settings->bThumbstickDpadEmulationEnabled)
		{
			return;
		}

		DerivedActionSet = XR_NULL_HANDLE;
		XrActionSetCreateInfo ActionSetInfo{ XR_TYPE_ACTION_SET_CREATE_INFO };
		ActionSetInfo.next = nullptr;
		// Using max priority since these actions are needed to calculate and send derived inputs
		ActionSetInfo.priority = ToXrPriority(MAX_int32);
		FCStringAnsi::Strcpy(ActionSetInfo.actionSetName, XR_MAX_ACTION_SET_NAME_SIZE, "oculustouchderivedinputsactionset");
		FCStringAnsi::Strcpy(ActionSetInfo.localizedActionSetName, XR_MAX_LOCALIZED_ACTION_SET_NAME_SIZE, "OculusTouchDerivedInputsActionSet");
		XR_ENSURE(xrCreateActionSet(Instance, &ActionSetInfo, &DerivedActionSet));

		for (FDerivedActionProperties& DerivedAction : DerivedActions)
		{
			XrActionCreateInfo ActionInfo{ XR_TYPE_ACTION_CREATE_INFO };
			ActionInfo.next = nullptr;
			ActionInfo.actionType = XrActionType::XR_ACTION_TYPE_FLOAT_INPUT;
			ActionInfo.countSubactionPaths = 0;
			FCStringAnsi::Strcpy(ActionInfo.actionName, XR_MAX_ACTION_NAME_SIZE, TCHAR_TO_ANSI(*DerivedAction.Name.ToLower()));
			FCStringAnsi::Strcpy(ActionInfo.localizedActionName, XR_MAX_LOCALIZED_ACTION_NAME_SIZE, TCHAR_TO_ANSI(*DerivedAction.Name));
			XR_ENSURE(xrCreateAction(DerivedActionSet, &ActionInfo, &DerivedAction.Action));
		}
	}

	bool FInputExtensionPlugin::GetSuggestedBindings(XrPath InInteractionProfile, TArray<XrActionSuggestedBinding>& OutBindings)
	{
		if (DerivedActionSet == XR_NULL_HANDLE)
		{
			return false;
		}

		FString ProfilePath = FOpenXRPath(InInteractionProfile).ToString();
		if (ProfilePath == "/interaction_profiles/oculus/touch_controller" || ProfilePath == "/interaction_profiles/facebook/touch_controller_pro" || ProfilePath == "/interaction_profiles/meta/touch_controller_plus")
		{
			for (FDerivedActionProperties& DerivedAction : DerivedActions)
			{
				XrPath Path;
				xrStringToPath(Instance, TCHAR_TO_ANSI(*DerivedAction.OpenXRPath), &Path);
				OutBindings.Add({ DerivedAction.Action, Path });
			}
			return true;
		}
		return false;
	}

	void FInputExtensionPlugin::AttachActionSets(TSet<XrActionSet>& OutActionSets)
	{
		if (DerivedActionSet != XR_NULL_PATH)
		{
			OutActionSets.Add(DerivedActionSet);
		}
	}

	void FInputExtensionPlugin::GetActiveActionSetsForSync(TArray<XrActiveActionSet>& OutActiveSets)
	{
		if (DerivedActionSet != XR_NULL_PATH)
		{
			OutActiveSets.Add({ DerivedActionSet, XR_NULL_PATH });
		}
	}

	void FInputExtensionPlugin::PostSyncActions(XrSession InSession)
	{
		if (DerivedActionSet == XR_NULL_PATH)
		{
			return;
		}

		TMap<FKey, XrActionStateFloat> ThumbstickKeysToState;
		IPlatformInputDeviceMapper& DeviceMapper = IPlatformInputDeviceMapper::Get();

		for (FDerivedActionProperties& DerivedAction : DerivedActions)
		{
			XrActionStateFloat State{ XR_TYPE_ACTION_STATE_FLOAT };
			XrActionStateGetInfo Info{ XR_TYPE_ACTION_STATE_GET_INFO };
			Info.action = DerivedAction.Action;

			XrResult Result = xrGetActionStateFloat(InSession, &Info, &State);
			if (XR_SUCCEEDED(Result) && State.isActive)
			{
				float Value = State.currentState;
				if (State.changedSinceLastSync)
				{
					MessageHandler->OnControllerAnalog(DerivedAction.InputKey.GetFName(), DeviceMapper.GetPrimaryPlatformUser(), DeviceMapper.GetDefaultInputDevice(), Value);
				}
				ThumbstickKeysToState.Add(DerivedAction.InputKey, State);
			}
		}

		FPlatformUserId UserId = DeviceMapper.GetPrimaryPlatformUser();
		FInputDeviceId DeviceId = DeviceMapper.GetDefaultInputDevice();
		for (bool isLeft : { true, false })
		{
			auto ThumbstickXState = ThumbstickKeysToState.Find(isLeft ? EKeys::OculusTouch_Left_Thumbstick_X : EKeys::OculusTouch_Right_Thumbstick_X);
			auto ThumbstickYState = ThumbstickKeysToState.Find(isLeft ? EKeys::OculusTouch_Left_Thumbstick_Y : EKeys::OculusTouch_Right_Thumbstick_Y);
			if (ThumbstickXState != nullptr && ThumbstickYState != nullptr && (ThumbstickXState->changedSinceLastSync || ThumbstickYState->changedSinceLastSync))
			{
				// Calculating quadrants for the thumbstick cardinal directions
				FVector2D Thumbsticks = FVector2D(ThumbstickXState->currentState, ThumbstickYState->currentState);
				bool IsAboveThreshold = Thumbsticks.Size() > 0.7f;
				float Angle = FMath::Atan2(ThumbstickYState->currentState, ThumbstickXState->currentState);
				bool IsUpPressed = IsAboveThreshold && Angle >= (1.0f / 8.0f) * PI && Angle <= (7.0f / 8.0f) * PI;
				bool IsDownPressed = IsAboveThreshold && Angle >= (-7.0f / 8.0f) * PI && Angle <= (-1.0f / 8.0f) * PI;
				bool IsLeftPressed = IsAboveThreshold && Angle <= (-5.0f / 8.0f) * PI || Angle >= (5.0f / 8.0f) * PI;
				bool IsRightPressed = IsAboveThreshold && Angle >= (-3.0f / 8.0f) * PI && Angle <= (3.0f / 8.0f) * PI;

				SendControllerButtonPressed(isLeft ? EKeys::OculusTouch_Left_Thumbstick_Up : EKeys::OculusTouch_Right_Thumbstick_Up, IsUpPressed, UserId, DeviceId);
				SendControllerButtonPressed(isLeft ? EKeys::OculusTouch_Left_Thumbstick_Down : EKeys::OculusTouch_Right_Thumbstick_Down, IsDownPressed, UserId, DeviceId);
				SendControllerButtonPressed(isLeft ? EKeys::OculusTouch_Left_Thumbstick_Left : EKeys::OculusTouch_Right_Thumbstick_Left, IsLeftPressed, UserId, DeviceId);
				SendControllerButtonPressed(isLeft ? EKeys::OculusTouch_Left_Thumbstick_Right : EKeys::OculusTouch_Right_Thumbstick_Right, IsRightPressed, UserId, DeviceId);
			}
		}
	}

	void FInputExtensionPlugin::DestroyDerivedActions()
	{
		xrDestroyActionSet(DerivedActionSet);
		DerivedActionSet = XR_NULL_HANDLE;
		for (FDerivedActionProperties& DerivedAction : DerivedActions)
		{
			DerivedAction.Action = XR_NULL_HANDLE;
		}
	}

	void FInputExtensionPlugin::SendControllerButtonPressed(FKey InKey, bool IsPressed, FPlatformUserId UserId, FInputDeviceId DeviceId)
	{
		if (IsPressed)
		{
			MessageHandler->OnControllerButtonPressed(InKey.GetFName(), UserId, DeviceId, false);
		}
		else
		{
			MessageHandler->OnControllerButtonReleased(InKey.GetFName(), UserId, DeviceId, false);
		}
	}

	bool FInputExtensionPlugin::GetInputKeyOverrides(TArray<FInputKeyOpenXRProperties>& OutOverrides)
	{
		// Each time Unreal sets up input, we must recreate the derived action set
		if (DerivedActionSet != XR_NULL_HANDLE)
		{
			DestroyDerivedActions();
		}
		CreateDerivedActions();

		// Input keys compatible with all oculus interaction profiles
		CreateForAllProfiles(OutOverrides, EKeys::OculusTouch_Left_X_Click, "/user/hand/left/input/x/click");
		CreateForAllProfiles(OutOverrides, EKeys::OculusTouch_Left_Y_Click, "/user/hand/left/input/y/click");
		CreateForAllProfiles(OutOverrides, EKeys::OculusTouch_Left_X_Touch, "/user/hand/left/input/x/touch");
		CreateForAllProfiles(OutOverrides, EKeys::OculusTouch_Left_Y_Touch, "/user/hand/left/input/y/touch");
		CreateForAllProfiles(OutOverrides, EKeys::OculusTouch_Left_Menu_Click, "/user/hand/left/input/menu/click");
		CreateForAllProfiles(OutOverrides, EKeys::OculusTouch_Left_Grip_Click, "/user/hand/left/input/squeeze");
		CreateForAllProfiles(OutOverrides, EKeys::OculusTouch_Left_Grip_Axis, "/user/hand/left/input/squeeze/value");
		CreateForAllProfiles(OutOverrides, EKeys::OculusTouch_Left_Trigger_Click, "/user/hand/left/input/trigger");
		CreateForAllProfiles(OutOverrides, EKeys::OculusTouch_Left_Trigger_Axis, "/user/hand/left/input/trigger/value");
		CreateForAllProfiles(OutOverrides, EKeys::OculusTouch_Left_Trigger_Touch, "/user/hand/left/input/trigger/touch");
		CreateForAllProfiles(OutOverrides, EKeys::OculusTouch_Left_Thumbstick_2D, "/user/hand/left/input/thumbstick");
		CreateForAllProfiles(OutOverrides, EKeys::OculusTouch_Left_Thumbstick_X, "/user/hand/left/input/thumbstick/x");
		CreateForAllProfiles(OutOverrides, EKeys::OculusTouch_Left_Thumbstick_Y, "/user/hand/left/input/thumbstick/y");
		CreateForAllProfiles(OutOverrides, EKeys::OculusTouch_Left_Thumbstick_Click, "/user/hand/left/input/thumbstick/click");
		CreateForAllProfiles(OutOverrides, EKeys::OculusTouch_Left_Thumbstick_Touch, "/user/hand/left/input/thumbstick/touch");
		CreateForAllProfiles(OutOverrides, EKeys::OculusTouch_Right_A_Click, "/user/hand/right/input/a/click");
		CreateForAllProfiles(OutOverrides, EKeys::OculusTouch_Right_B_Click, "/user/hand/right/input/b/click");
		CreateForAllProfiles(OutOverrides, EKeys::OculusTouch_Right_A_Touch, "/user/hand/right/input/a/touch");
		CreateForAllProfiles(OutOverrides, EKeys::OculusTouch_Right_B_Touch, "/user/hand/right/input/b/touch");
		CreateForAllProfiles(OutOverrides, EKeys::OculusTouch_Right_Grip_Click, "/user/hand/right/input/squeeze");
		CreateForAllProfiles(OutOverrides, EKeys::OculusTouch_Right_Grip_Axis, "/user/hand/right/input/squeeze/value");
		CreateForAllProfiles(OutOverrides, EKeys::OculusTouch_Right_Trigger_Click, "/user/hand/right/input/trigger");
		CreateForAllProfiles(OutOverrides, EKeys::OculusTouch_Right_Trigger_Axis, "/user/hand/right/input/trigger/value");
		CreateForAllProfiles(OutOverrides, EKeys::OculusTouch_Right_Trigger_Touch, "/user/hand/right/input/trigger/touch");
		CreateForAllProfiles(OutOverrides, EKeys::OculusTouch_Right_Thumbstick_2D, "/user/hand/right/input/thumbstick");
		CreateForAllProfiles(OutOverrides, EKeys::OculusTouch_Right_Thumbstick_X, "/user/hand/right/input/thumbstick/x");
		CreateForAllProfiles(OutOverrides, EKeys::OculusTouch_Right_Thumbstick_Y, "/user/hand/right/input/thumbstick/y");
		CreateForAllProfiles(OutOverrides, EKeys::OculusTouch_Right_Thumbstick_Click, "/user/hand/right/input/thumbstick/click");
		CreateForAllProfiles(OutOverrides, EKeys::OculusTouch_Right_Thumbstick_Touch, "/user/hand/right/input/thumbstick/touch");
		CreateForAllProfiles(OutOverrides, FOculusKey::OculusTouch_Left_ThumbRest, "/user/hand/left/input/thumbrest/touch");
		CreateForAllProfiles(OutOverrides, FOculusKey::OculusTouch_Right_ThumbRest, "/user/hand/right/input/thumbrest/touch");

		if (bExtTouchControllerProximityAvailable)
		{
			CreateForAllProfiles(OutOverrides, FOculusKey::OculusTouch_Left_IndexPointing, "/user/hand/left/input/trigger/proximity_fb");
			CreateForAllProfiles(OutOverrides, FOculusKey::OculusTouch_Left_ThumbUp, "/user/hand/left/input/thumb_fb/proximity_fb");
			CreateForAllProfiles(OutOverrides, FOculusKey::OculusTouch_Right_IndexPointing, "/user/hand/right/input/trigger/proximity_fb");
			CreateForAllProfiles(OutOverrides, FOculusKey::OculusTouch_Right_ThumbUp, "/user/hand/right/input/thumb_fb/proximity_fb");
		}
		else
		{
			OutOverrides.Add({ FOculusKey::OculusTouch_Left_IndexPointing.ToString(), OculusTouchProProfile, "/user/hand/left/input/trigger/proximity_fb" });
			OutOverrides.Add({ FOculusKey::OculusTouch_Left_ThumbUp.ToString(), OculusTouchProProfile, "/user/hand/left/input/thumb_fb/proximity_fb" });
			OutOverrides.Add({ FOculusKey::OculusTouch_Right_IndexPointing.ToString(), OculusTouchProProfile, "/user/hand/right/input/trigger/proximity_fb" });
			OutOverrides.Add({ FOculusKey::OculusTouch_Right_ThumbUp.ToString(), OculusTouchProProfile, "/user/hand/right/input/thumb_fb/proximity_fb" });
		}

		// These keys are duplicated with what Epic already has. Binding for backwards compatibility.
		CreateForAllProfiles(OutOverrides, FOculusKey::OculusTouch_Left_Thumbstick, "/user/hand/left/input/thumbstick/touch");
		CreateForAllProfiles(OutOverrides, FOculusKey::OculusTouch_Left_Trigger, "/user/hand/left/input/trigger/touch");
		CreateForAllProfiles(OutOverrides, FOculusKey::OculusTouch_Left_FaceButton1, "/user/hand/left/input/x/touch");
		CreateForAllProfiles(OutOverrides, FOculusKey::OculusTouch_Left_FaceButton2, "/user/hand/left/input/y/touch");
		CreateForAllProfiles(OutOverrides, FOculusKey::OculusTouch_Right_Thumbstick, "/user/hand/right/input/thumbstick/touch");
		CreateForAllProfiles(OutOverrides, FOculusKey::OculusTouch_Right_Trigger, "/user/hand/right/input/trigger/touch");
		CreateForAllProfiles(OutOverrides, FOculusKey::OculusTouch_Right_FaceButton1, "/user/hand/right/input/a/touch");
		CreateForAllProfiles(OutOverrides, FOculusKey::OculusTouch_Right_FaceButton2, "/user/hand/right/input/b/touch");

		// Input keys compatible with only touch pro
		OutOverrides.Add({ FOculusKey::OculusTouch_Left_ThumbRest_Force.ToString(), OculusTouchProProfile, "/user/hand/left/input/thumbrest/force" });
		OutOverrides.Add({ FOculusKey::OculusTouch_Left_Stylus_Force.ToString(), OculusTouchProProfile, "/user/hand/left/input/stylus_fb/force" });
		OutOverrides.Add({ FOculusKey::OculusTouch_Right_ThumbRest_Force.ToString(), OculusTouchProProfile, "/user/hand/right/input/thumbrest/force" });
		OutOverrides.Add({ FOculusKey::OculusTouch_Right_Stylus_Force.ToString(), OculusTouchProProfile, "/user/hand/right/input/stylus_fb/force" });

		// Input keys compatible with only touch plus
		OutOverrides.Add({ FOculusKey::OculusTouch_Left_IndexTrigger_Force.ToString(), OculusTouchPlusProfile, "/user/hand/left/input/trigger/force" });
		OutOverrides.Add({ FOculusKey::OculusTouch_Right_IndexTrigger_Force.ToString(), OculusTouchPlusProfile, "/user/hand/right/input/trigger/force" });

		// Input key compatible with a mixed selection
		OutOverrides.Add({ FOculusKey::OculusTouch_Left_IndexTrigger_Curl.ToString(), OculusTouchProProfile, "/user/hand/left/input/trigger/curl_fb" });
		OutOverrides.Add({ FOculusKey::OculusTouch_Left_IndexTrigger_Curl.ToString(), OculusTouchPlusProfile, "/user/hand/left/input/trigger/curl_meta" });
		OutOverrides.Add({ FOculusKey::OculusTouch_Left_IndexTrigger_Slide.ToString(), OculusTouchProProfile, "/user/hand/left/input/trigger/slide_fb" });
		OutOverrides.Add({ FOculusKey::OculusTouch_Left_IndexTrigger_Slide.ToString(), OculusTouchPlusProfile, "/user/hand/left/input/trigger/slide_meta" });
		OutOverrides.Add({ FOculusKey::OculusTouch_Right_IndexTrigger_Curl.ToString(), OculusTouchProProfile, "/user/hand/right/input/trigger/curl_fb" });
		OutOverrides.Add({ FOculusKey::OculusTouch_Right_IndexTrigger_Curl.ToString(), OculusTouchPlusProfile, "/user/hand/right/input/trigger/curl_meta" });
		OutOverrides.Add({ FOculusKey::OculusTouch_Right_IndexTrigger_Slide.ToString(), OculusTouchProProfile, "/user/hand/right/input/trigger/slide_fb" });
		OutOverrides.Add({ FOculusKey::OculusTouch_Right_IndexTrigger_Slide.ToString(), OculusTouchPlusProfile, "/user/hand/right/input/trigger/slide_meta" });

		return true;
	}

	void FInputExtensionPlugin::CreateForAllProfiles(TArray<FInputKeyOpenXRProperties>& OutOverrides, FKey InKey, FString Path)
	{
		OutOverrides.Add({ InKey.ToString(), OculusTouchProfile, Path });
		OutOverrides.Add({ InKey.ToString(), OculusTouchProProfile, Path });
		OutOverrides.Add({ InKey.ToString(), OculusTouchPlusProfile, Path });
	}
#endif

} // namespace OculusXRInput
