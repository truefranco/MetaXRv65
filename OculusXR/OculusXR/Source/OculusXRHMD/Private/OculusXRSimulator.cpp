// @lint-ignore-every LICENSELINT
// Copyright Epic Games, Inc. All Rights Reserved.

#include "OculusXRSimulator.h"
#if PLATFORM_WINDOWS
#include "HAL/FileManager.h"
#include "OculusXRHMDRuntimeSettings.h"
#include "OculusXRTelemetryEvents.h"
#include "Misc/MessageDialog.h"
#include "OpenXR/OculusXROpenXRUtilities.h"
#include "Internationalization/Regex.h"

#include "Windows/WindowsPlatformMisc.h"

#if WITH_EDITOR
#include "UnrealEdMisc.h"
#endif // WITH_EDITOR

const FString OpenXrRuntimeEnvKey = "XR_RUNTIME_JSON";
const FString PreviousOpenXrRuntimeEnvKey = "XR_RUNTIME_JSON_PREV";

bool FMetaXRSimulator::IsSimulatorActivated()
{
	FString MetaXRSimPath = GetSimulatorJsonPath();
	FString CurRuntimePath = FWindowsPlatformMisc::GetEnvironmentVariable(*OpenXrRuntimeEnvKey);
	return (!MetaXRSimPath.IsEmpty() && MetaXRSimPath == CurRuntimePath);
}

void FMetaXRSimulator::ToggleOpenXRRuntime()
{
	OculusXRTelemetry::TScopedMarker<OculusXRTelemetry::Events::FSimulator> Event;
	FString MetaXRSimPath = GetSimulatorJsonPath();
	if (!IFileManager::Get().FileExists(*MetaXRSimPath))
	{
		FString Message("Meta XR Simulator Not Found.\nPlease set its path in Project Settings/Meta XR Plugin/PC.");
		FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(Message));
		UE_LOG(LogMetaXRSim, Error, TEXT("%s"), *Message);
		const auto& NotEnd = Event.SetResult(OculusXRTelemetry::EAction::Fail).AddAnnotation("reason", "not found");

		return;
	}

#if WITH_EDITOR
	if (OculusXR::IsOpenXRSystem())
	{
		FString ActivationText = IsSimulatorActivated() ? "deactivate" : "activate";
		FString Message = FString::Format(TEXT("A restart is required in order to {0} XR simulator. The restart must be performed from this dialog, opening and closing the editor manually will not work. Restart now?"), { ActivationText });
		if (FMessageDialog::Open(EAppMsgType::OkCancel, FText::FromString(Message)) == EAppReturnType::Cancel)
		{
			UE_LOG(LogMetaXRSim, Log, TEXT("Meta XR Simulator %s action canceled."), *ActivationText);
			const auto& NotEnd = Event.SetResult(OculusXRTelemetry::EAction::Fail).AddAnnotation("reason", "restart canceled");
			return;
		}
	}
#endif // WITH_EDITOR

	if (IsSimulatorActivated())
	{
		// Deactivate MetaXR Simulator
		FString PrevOpenXrRuntimeEnvKey = FWindowsPlatformMisc::GetEnvironmentVariable(*PreviousOpenXrRuntimeEnvKey);

		FWindowsPlatformMisc::SetEnvironmentVar(*PreviousOpenXrRuntimeEnvKey,
			TEXT(""));
		FWindowsPlatformMisc::SetEnvironmentVar(*OpenXrRuntimeEnvKey, *PrevOpenXrRuntimeEnvKey);

		UE_LOG(LogMetaXRSim, Log, TEXT("Meta XR Simulator is deactivated. (%s : %s)"), *OpenXrRuntimeEnvKey, *PrevOpenXrRuntimeEnvKey);
		const auto& NotEnd = Event.AddAnnotation("action", "deactivated");
	}
	else
	{
		// Activate MetaXR Simulator
		FString CurOpenXrRuntimeEnvKey = FWindowsPlatformMisc::GetEnvironmentVariable(*OpenXrRuntimeEnvKey);

		FWindowsPlatformMisc::SetEnvironmentVar(*PreviousOpenXrRuntimeEnvKey,
			*CurOpenXrRuntimeEnvKey);
		FWindowsPlatformMisc::SetEnvironmentVar(*OpenXrRuntimeEnvKey, *MetaXRSimPath);

		UE_LOG(LogMetaXRSim, Log, TEXT("Meta XR Simulator is activated. (%s : %s)"), *OpenXrRuntimeEnvKey, *MetaXRSimPath);
		const auto& NotEnd = Event.AddAnnotation("action", "activated");
	}

#if WITH_EDITOR
	if (OculusXR::IsOpenXRSystem())
	{
		FUnrealEdMisc::Get().RestartEditor(false);
	}
#endif // WITH_EDITOR
}

FString FMetaXRSimulator::GetSimulatorJsonPath()
{
	return GetMutableDefault<UOculusXRHMDRuntimeSettings>()->MetaXRJsonPath.FilePath;
}

void FMetaXRSimulator::TryActivateOnStartup()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS && WITH_EDITOR
	// If -HMDSimulator is used as the command option to launch UE, use simulator runtime instead of the physical HMD runtime (like PC-Link).
	if (FParse::Param(FCommandLine::Get(), TEXT("HMDSimulator")))
	{
		FString MetaXRSimPath = TEXT("");
		FString ConfigPath = GConfig->GetStringOrDefault(TEXT("/Script/OculusXRHMD.OculusXRHMDRuntimeSettings"), TEXT("MetaXRJsonPath"), TEXT(""), GEngineIni);
		const FRegexPattern FilePathPattern(TEXT("FilePath\\s*=\\s*\"((.*?)[^\\\\])\""));
		FRegexMatcher Regex(FilePathPattern, *ConfigPath);
		while (Regex.FindNext())
		{
			MetaXRSimPath = Regex.GetCaptureGroup(1);
			break;
		}
		if (MetaXRSimPath.IsEmpty())
		{
			UE_LOG(LogMetaXRSim, Log, TEXT("Meta XR Simulator Not Found.\nPlease set its path in Project Settings/Meta XR Plugin/PC."));
			return;
		}

		FString CurOpenXrRuntimeEnvKey = FWindowsPlatformMisc::GetEnvironmentVariable(*OpenXrRuntimeEnvKey);
		FWindowsPlatformMisc::SetEnvironmentVar(*PreviousOpenXrRuntimeEnvKey,
			*CurOpenXrRuntimeEnvKey);
		FWindowsPlatformMisc::SetEnvironmentVar(*OpenXrRuntimeEnvKey, *MetaXRSimPath);
		UE_LOG(LogMetaXRSim, Log, TEXT("Meta XR Simulator is activated. (%s : %s)"), *OpenXrRuntimeEnvKey, *MetaXRSimPath);
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS && WITH_EDITOR
}
#endif // PLATFORM_WINDOWS
