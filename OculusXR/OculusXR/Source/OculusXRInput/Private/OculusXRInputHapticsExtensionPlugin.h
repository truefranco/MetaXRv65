﻿// Copyright (c) Meta Platforms, Inc. and affiliates.

#pragma once

#include "khronos/openxr/openxr.h"

#include "CoreMinimal.h"
#include "IOpenXRExtensionPlugin.h"

namespace OculusXRInput
{
	class FInputHapticsExtensionPlugin : public IOpenXRExtensionPlugin
	{
	public:
		void RegisterOpenXRExtensionPlugin()
		{
#if defined(WITH_OCULUS_BRANCH)
			RegisterOpenXRExtensionModularFeature();
#endif
		}

		XrInstance GetOpenXRInstance() const;
		XrSession GetOpenXRSession() const;

		bool IsPCMExtensionAvailable() const;
		bool IsAmplitudeEnvelopeExtensionAvailable() const;

		XrAction GetXrHandHapticVibrationAction() const;

		XrPath* GetXrHandsSubactionPath();
		XrPath* GetXrHandsHapticsSubactionPath();

		// IOpenXRExtensionPlugin
		virtual bool GetOptionalExtensions(TArray<const ANSICHAR*>& OutExtensions) override;
		virtual const void* OnCreateInstance(class IOpenXRHMDModule* InModule, const void* InNext) override;
		virtual void PostCreateInstance(XrInstance InInstance) override;
		virtual void PostCreateSession(XrSession InSession) override;
		virtual bool GetSuggestedBindings(XrPath InInteractionProfile, TArray<XrActionSuggestedBinding>& OutBindings) override;
		virtual void AttachActionSets(TSet<XrActionSet>& OutActionSets) override;
		virtual void GetActiveActionSetsForSync(TArray<XrActiveActionSet>& OutActiveSets) override;
		virtual bool GetInteractionProfile(XrInstance InInstance, FString& OutKeyPrefix, XrPath& OutPath, bool& OutHasHaptics) override;

	private:
		void CreateHapticActions();
		void DestroyHapticActions();

		bool bExtFBHapticsPcmAvailable = false;
		bool bExtFBAmplitudeEnvelopeAvailable = false;

		XrInstance Instance = XR_NULL_HANDLE;
		XrSession Session = XR_NULL_HANDLE;

		XrActionSet HapticsActionSet = XR_NULL_HANDLE;
		XrAction XrHandHapticVibrationAction = XR_NULL_HANDLE;
		XrPath XrPathLeftHand = XR_NULL_PATH;
		XrPath XrPathLeftHandHaptics = XR_NULL_PATH;
		XrPath XrPathRightHand = XR_NULL_PATH;
		XrPath XrPathRightHandHaptics = XR_NULL_PATH;
		XrPath XrPathBothHands[2] = { XR_NULL_PATH, XR_NULL_PATH };
		XrPath XrPathBothHandsHaptics[2] = { XR_NULL_PATH, XR_NULL_PATH };
	};
} // namespace OculusXRInput
