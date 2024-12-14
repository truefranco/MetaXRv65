// Copyright (c) Meta Platforms, Inc. and affiliates.

#include "OculusXRLayerExtensionPlugin.h"
#include "IOpenXRHMDModule.h"
#include "OculusXROpenXRUtilities.h"
#include "OpenXRCore.h"
#include "XRThreadUtils.h"

namespace
{
	XrCompositionLayerSettingsFlagsFB ToSharpenLayerFlag(EOculusXREyeBufferSharpenType EyeBufferSharpenType)
	{
		XrCompositionLayerSettingsFlagsFB Flag = 0;
		switch (EyeBufferSharpenType)
		{
			case EOculusXREyeBufferSharpenType::SLST_None:
				Flag = 0;
				break;
			case EOculusXREyeBufferSharpenType::SLST_Normal:
				Flag = XR_COMPOSITION_LAYER_SETTINGS_NORMAL_SHARPENING_BIT_FB;
				break;
			case EOculusXREyeBufferSharpenType::SLST_Quality:
				Flag = XR_COMPOSITION_LAYER_SETTINGS_QUALITY_SHARPENING_BIT_FB;
				break;
			case EOculusXREyeBufferSharpenType::SLST_Auto:
				Flag = XR_COMPOSITION_LAYER_SETTINGS_AUTO_LAYER_FILTER_BIT_META;
				break;
			default:
				break;
		}
		return Flag;
	}
} // namespace

namespace OculusXR
{
	FLayerExtensionPlugin::FLayerExtensionPlugin()
		: bExtLocalDimmingAvailable(false)
		, bExtCompositionLayerSettingsAvailable(false)
		, LocalDimmingMode_RHIThread(XR_LOCAL_DIMMING_MODE_ON_META)
		, LocalDimmingExt_RHIThread{}
		, EyeSharpenLayerFlags_RHIThread(0)
	{
	}

	bool FLayerExtensionPlugin::GetOptionalExtensions(TArray<const ANSICHAR*>& OutExtensions)
	{
		OutExtensions.Add(XR_META_LOCAL_DIMMING_EXTENSION_NAME);
		OutExtensions.Add(XR_FB_COMPOSITION_LAYER_SETTINGS_EXTENSION_NAME);
		return true;
	}

	const void* FLayerExtensionPlugin::OnCreateInstance(class IOpenXRHMDModule* InModule, const void* InNext)
	{
		if (InModule != nullptr)
		{
			bExtLocalDimmingAvailable = InModule->IsExtensionEnabled(XR_META_LOCAL_DIMMING_EXTENSION_NAME);
			bExtCompositionLayerSettingsAvailable = InModule->IsExtensionEnabled(XR_FB_COMPOSITION_LAYER_SETTINGS_EXTENSION_NAME);
		}
		return IOculusXRExtensionPlugin::OnCreateInstance(InModule, InNext);
	}

	const void* FLayerExtensionPlugin::OnEndFrame(XrSession InSession, XrTime DisplayTime, const void* InNext)
	{
		check(IsInRenderingThread() || IsInRHIThread());
		const void* Next = InNext;
		if (bExtLocalDimmingAvailable)
		{
			LocalDimmingExt_RHIThread.type = XR_TYPE_LOCAL_DIMMING_FRAME_END_INFO_META;
			LocalDimmingExt_RHIThread.localDimmingMode = LocalDimmingMode_RHIThread;
			LocalDimmingExt_RHIThread.next = Next;
			Next = &LocalDimmingExt_RHIThread;
		}
		return Next;
	}

	const void* FLayerExtensionPlugin::OnEndProjectionLayer(XrSession InSession, int32 InLayerIndex, const void* InNext, XrCompositionLayerFlags& OutFlags)
	{
		check(IsInRenderingThread() || IsInRHIThread());
		const void* Next = InNext;
		if (bExtCompositionLayerSettingsAvailable)
		{
			XrCompositionLayerSettingsExt.type = XR_TYPE_COMPOSITION_LAYER_SETTINGS_FB;
			XrCompositionLayerSettingsExt.next = Next;
			XrCompositionLayerSettingsExt.layerFlags = EyeSharpenLayerFlags_RHIThread;
			Next = &XrCompositionLayerSettingsExt;
		}
		return Next;
	}

	void FLayerExtensionPlugin::SetEnableLocalDimming(bool Enable)
	{
		ENQUEUE_RENDER_COMMAND(OculusXR_SetEnableLocalDimming)
		([this, Enable](FRHICommandListImmediate& RHICmdList) {
			RHICmdList.EnqueueLambda([this, Enable](FRHICommandListImmediate& RHICmdList) {
				LocalDimmingMode_RHIThread = Enable ? XR_LOCAL_DIMMING_MODE_ON_META : XR_LOCAL_DIMMING_MODE_OFF_META;
			});
		});
	}

	void FLayerExtensionPlugin::SetEyeBufferSharpenType(EOculusXREyeBufferSharpenType EyeBufferSharpenType)
	{
		ENQUEUE_RENDER_COMMAND(OculusXR_SetEyeBufferSharpenType)
		([this, EyeBufferSharpenType](FRHICommandListImmediate& RHICmdList) {
			RHICmdList.EnqueueLambda([this, EyeBufferSharpenType](FRHICommandListImmediate& RHICmdList) {
				EyeSharpenLayerFlags_RHIThread = ToSharpenLayerFlag(EyeBufferSharpenType);
			});
		});
	}

} // namespace OculusXR
