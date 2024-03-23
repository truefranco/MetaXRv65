// Copyright (c) Meta Platforms, Inc. and affiliates.

#include "OculusXRPassthroughRules.h"
#include "CoreMinimal.h"
#include "OculusXRHMDRuntimeSettings.h"
#include "OculusXRPSTUtils.h"
#include "OculusXRPassthroughLayerComponent.h"
#include "OculusXRProjectSetupToolModule.h"
#include "OculusXRRuleProcessorSubsystem.h"
#include "Engine/RendererSettings.h"

namespace OculusXRPassthroughRules
{
	bool FEnablePassthroughRule::IsApplied() const
	{
		const UOculusXRHMDRuntimeSettings* Settings = GetMutableDefault<UOculusXRHMDRuntimeSettings>();

		return Settings->bInsightPassthroughEnabled;
	}

	void FEnablePassthroughRule::ApplyImpl(bool& OutShouldRestartEditor)
	{
		OCULUSXR_UPDATE_SETTINGS(UOculusXRHMDRuntimeSettings, bInsightPassthroughEnabled, true);
		OutShouldRestartEditor = false;
	}

	bool FEnablePassthroughRule::IsValid()
	{
		return OculusXRPSTUtils::IsComponentOfTypeInWorld<UOculusXRPassthroughLayerComponent>();
	}

	bool FAllowAlphaToneMapperPassthroughRule::IsApplied() const
	{
		URendererSettings* Settings = GetMutableDefault<URendererSettings>();
		return Settings->bEnableAlphaChannelInPostProcessing == EAlphaChannelMode::AllowThroughTonemapper;
	}

	bool FAllowAlphaToneMapperPassthroughRule::IsValid()
	{
		return OculusXRPSTUtils::IsComponentOfTypeInWorld<UOculusXRPassthroughLayerComponent>();
	}

	void FAllowAlphaToneMapperPassthroughRule::ApplyImpl(bool& OutShouldRestartEditor)
	{
		OCULUSXR_UPDATE_SETTINGS(URendererSettings, bEnableAlphaChannelInPostProcessing, EAlphaChannelMode::AllowThroughTonemapper);
		OutShouldRestartEditor = true;
	}
} // namespace OculusXRPassthroughRules

#undef LOCTEXT_NAMESPACE
