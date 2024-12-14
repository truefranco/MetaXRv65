// Copyright (c) Meta Platforms, Inc. and affiliates.

#include "OculusXRInputOpenXR.h"
#include "OculusXRInputExtensionPlugin.h"
#include "OculusXRInputModule.h"
#include "OculusXRInputXRFunctions.h"
#include "OpenXRCore.h"

namespace OculusXRInput
{
	FOculusXRInputModule* GetInputModule()
	{
		FOculusXRInputModule* InputModule = static_cast<FOculusXRInputModule*>(&FOculusXRInputModule::Get());
		if (!InputModule)
		{
			UE_LOG(LogOcInput, Error, TEXT("Failed getting Oculus XR input module."));
			return nullptr;
		}
		return InputModule;
	}

	bool InstanceAndSessionAreValid(
		const FOculusXRInputModule* InputModule)
	{
		if (!InputModule->GetHapticsOpenXRExtension()->GetOpenXRInstance() || !InputModule->GetHapticsOpenXRExtension()->GetOpenXRSession())
		{
			UE_LOG(LogOcInput, Error,
				TEXT("Failed getting OpenXR instance or session."));
			return false;
		}
		return true;
	}

	int ControllerHandToHandIndex(EControllerHand Hand)
	{
		int HandIndex = -1;
		switch (Hand)
		{
			case EControllerHand::Left:
				HandIndex = 0;
				break;
			case EControllerHand::Right:
				HandIndex = 1;
				break;
			default:
				UE_LOG(LogOcInput, Error, TEXT("No action defined for %s."), *UEnum::GetValueAsString(Hand));
		}
		return HandIndex;
	}

	float FOculusXRInputOpenXR::GetControllerSampleRateHz(EControllerHand Hand) const
	{
		const FOculusXRInputModule* InputModule = GetInputModule();
		if (!InputModule || !InstanceAndSessionAreValid(InputModule))
		{
			return 0.f;
		}

		if (!InputModule->GetHapticsOpenXRExtension()->IsPCMExtensionAvailable())
		{
			UE_LOG(LogOcInput, Warning, TEXT("PCM extension is not available."));
			return 0.f;
		}

		const int HandIndex = ControllerHandToHandIndex(Hand);
		if (HandIndex == -1)
		{
			return 0.f;
		}

		XrHapticActionInfo HapticActionInfo = { XR_TYPE_HAPTIC_ACTION_INFO };
		HapticActionInfo.action = InputModule->GetHapticsOpenXRExtension()->GetXrHandHapticVibrationAction();
		HapticActionInfo.subactionPath = InputModule->GetHapticsOpenXRExtension()->GetXrHandsSubactionPath()[HandIndex];
		HapticActionInfo.next = nullptr;

		XrDevicePcmSampleRateGetInfoFB DeviceSampleRate = { XR_TYPE_DEVICE_PCM_SAMPLE_RATE_GET_INFO_FB };

		XrResult result = xrGetDeviceSampleRateFB(InputModule->GetHapticsOpenXRExtension()->GetOpenXRSession(), &HapticActionInfo, &DeviceSampleRate);

		if (XR_FAILED(result))
		{
			UE_LOG(LogOcInput, Error, TEXT("xrGetDeviceSampleRateFB failed."));
			return 0.f;
		}

		return DeviceSampleRate.sampleRate;
	}

	int FOculusXRInputOpenXR::GetMaxHapticDuration(EControllerHand Hand) const
	{
		const float SampleRate = GetControllerSampleRateHz(Hand);
		if (SampleRate == 0.f)
		{
			return 0;
		}
		return XR_MAX_HAPTIC_PCM_BUFFER_SIZE_FB / SampleRate;
	}

	void FOculusXRInputOpenXR::PlayHapticEffect(
		UHapticFeedbackEffect_Base* HapticEffect, EControllerHand Hand,
		EOculusXRHandHapticsLocation Location, bool bAppend, float Scale,
		bool bLoop)
	{
	}

	int FOculusXRInputOpenXR::PlayAmplitudeEnvelopeHapticEffect(EControllerHand Hand,
		int SamplesCount,
		void* Samples,
		int SampleRate)
	{
		return 0;
	}

	void FOculusXRInputOpenXR::SetHapticsByValue(float Frequency, float Amplitude, EControllerHand Hand, EOculusXRHandHapticsLocation Location)
	{
		const FOculusXRInputModule* InputModule = GetInputModule();
		if (!InputModule || !InstanceAndSessionAreValid(InputModule))
		{
			return;
		}

		const int HandIndex = ControllerHandToHandIndex(Hand);
		if (HandIndex == -1)
		{
			return;
		}

		XrHapticActionInfo HapticActionInfo = { XR_TYPE_HAPTIC_ACTION_INFO };
		HapticActionInfo.action = InputModule->GetHapticsOpenXRExtension()->GetXrHandHapticVibrationAction();
		HapticActionInfo.subactionPath = InputModule->GetHapticsOpenXRExtension()->GetXrHandsSubactionPath()[HandIndex];

		XrHapticVibration Vibration = { XR_TYPE_HAPTIC_VIBRATION };
		Vibration.amplitude = Amplitude;
		Vibration.frequency = Frequency;
		Vibration.duration = 2000000000; // 2 second duration, this is to give enough
										 // time for a new signal to be received without
										 // stopping the previous vibration

		const XrResult Result = xrApplyHapticFeedback(InputModule->GetHapticsOpenXRExtension()->GetOpenXRSession(), &HapticActionInfo, reinterpret_cast<XrHapticBaseHeader*>(&Vibration));

		if (XR_FAILED(Result))
		{
			UE_LOG(LogOcInput, Error, TEXT("xrApplyHapticFeedback failed."));
		}
	}

} // namespace OculusXRInput
