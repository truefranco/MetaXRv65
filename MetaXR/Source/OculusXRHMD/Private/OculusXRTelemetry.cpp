// Copyright (c) Meta Platforms, Inc. and affiliates.

#include "OculusXRTelemetry.h"
#include "OculusXRHMDModule.h"
#include "OculusXRTelemetryPrivacySettings.h"
#include "Async/Async.h"

namespace OculusXRTelemetry
{
	bool IsActive()
	{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
		if constexpr (FTelemetryBackend::IsNullBackend())
		{
			return false;
		}
		if (FOculusXRHMDModule::Get().IsOVRPluginAvailable() && FOculusXRHMDModule::GetPluginWrapper().IsInitialized())
		{
			return true;
		}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
		return false;
	}

	void IfActiveThen(TUniqueFunction<void()> Function)
	{
		AsyncTask(ENamedThreads::GameThread, [F = MoveTemp(Function)]() {
			if (IsActive())
			{
				F();
			}
		});
	}

	void SetTelemetryConsent(bool Consent)
	{
		if (FOculusXRHMDModule::Get().IsOVRPluginAvailable() && FOculusXRHMDModule::GetPluginWrapper().IsInitialized())
		{
			FOculusXRHMDModule::GetPluginWrapper().QplSetConsent(Consent);
		}
	}
} // namespace OculusXRTelemetry
