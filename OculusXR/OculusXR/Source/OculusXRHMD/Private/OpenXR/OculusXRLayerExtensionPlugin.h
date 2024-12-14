// Copyright (c) Meta Platforms, Inc. and affiliates.

#pragma once
#include "khronos/openxr/openxr.h"
#include "CoreMinimal.h"
#include "OculusXRHMDTypes.h"
#include "OpenXR/IOculusXRExtensionPlugin.h"

namespace OculusXR
{

	class FLayerExtensionPlugin : public IOculusXRExtensionPlugin
	{
	public:
		FLayerExtensionPlugin();
		// IOpenXRExtensionPlugin
		virtual bool GetOptionalExtensions(TArray<const ANSICHAR*>& OutExtensions) override;
		const void* OnCreateInstance(class IOpenXRHMDModule* InModule, const void* InNext);
		virtual const void* OnEndFrame(XrSession InSession, XrTime DisplayTime, const void* InNext) override;
		virtual const void* OnEndProjectionLayer(XrSession InSession, int32 InLayerIndex, const void* InNext, XrCompositionLayerFlags& OutFlags);
		void SetEnableLocalDimming(bool Enable);
		void SetEyeBufferSharpenType(EOculusXREyeBufferSharpenType EyeBufferSharpenType);

	private:
		bool bExtLocalDimmingAvailable;
		bool bExtCompositionLayerSettingsAvailable;

		XrLocalDimmingModeMETA LocalDimmingMode_RHIThread;
		XrLocalDimmingFrameEndInfoMETA LocalDimmingExt_RHIThread;
		XrCompositionLayerSettingsFlagsFB EyeSharpenLayerFlags_RHIThread;
		XrCompositionLayerSettingsFB XrCompositionLayerSettingsExt;
	};

} // namespace OculusXR
