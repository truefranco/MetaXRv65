// Copyright (c) Meta Platforms, Inc. and affiliates.

#pragma once
#include "CoreMinimal.h"
#include "OculusXRHMDTypes.h"
#include "OpenXR/IOculusXRExtensionPlugin.h"

DECLARE_LOG_CATEGORY_EXTERN(LogOculusSystemInfoExtensionPlugin, Log, All);

namespace OculusXR
{
	class FSystemInfoExtensionPlugin : public IOculusXRExtensionPlugin
	{
	public:
		FSystemInfoExtensionPlugin();

		// IOpenXRExtensionPlugin
		virtual bool GetRequiredExtensions(TArray<const ANSICHAR*>& OutExtensions) override;
		virtual bool GetOptionalExtensions(TArray<const ANSICHAR*>& OutExtensions) override;
		virtual const void* OnCreateInstance(class IOpenXRHMDModule* InModule, const void* InNext);
		virtual void PostCreateInstance(XrInstance InInstance) override;
		virtual void PostCreateSession(XrSession InSession) override;

		FString GetSystemProductName();
		EOculusXRDeviceType GetDeviceType();

	private:
		EOculusXRDeviceType GetSystemHeadsetType();

		XrInstance Instance;
		bool bExtHeadsetIdAvailable;
		XrUuidEXT SystemHeadsetId;
		bool bSystemHeadsetIdValid;
		FString SystemProductName;
		EOculusXRDeviceType SystemDeviceType;
	};

} // namespace OculusXR
