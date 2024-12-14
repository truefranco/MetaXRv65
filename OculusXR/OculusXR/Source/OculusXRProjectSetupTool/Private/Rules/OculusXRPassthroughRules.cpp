// Copyright (c) Meta Platforms, Inc. and affiliates.

#include "OculusXRPassthroughRules.h"
#include "CoreMinimal.h"
#include "OculusXRHMDRuntimeSettings.h"
#include "OculusXRPSTUtils.h"
#include "OculusXRPassthroughLayerComponent.h"
#include "BPNode_InitializePersistentPassthrough.h"
#include "OculusXRProjectSetupToolModule.h"
#include "OculusXRRuleProcessorSubsystem.h"
#include "Engine/RendererSettings.h"
#include "EdGraph/EdGraphPin.h"
#include "K2Node.h"

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
		if (OculusXRPSTUtils::IsComponentOfTypeInWorld<UOculusXRPassthroughLayerComponent>()
			|| OculusXRPSTUtils::IsComponentOfTypeInWorld<UBPNode_InitializePersistentPassthrough>(
				[](UBPNode_InitializePersistentPassthrough* n) {
					return n && n->GetExecPin() && n->GetExecPin()->LinkedTo.Num() > 0;
				}))
		{
			return true;
		}

		return false;
	}

	bool FAllowAlphaToneMapperPassthroughRule::IsApplied() const
	{
PRAGMA_DISABLE_DEPRECATION_WARNINGS
		URendererSettings* Settings = GetMutableDefault<URendererSettings>();
		return Settings->bEnableAlphaChannelInPostProcessing == EAlphaChannelMode::AllowThroughTonemapper;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
	}

	bool FAllowAlphaToneMapperPassthroughRule::IsValid()
	{
		const UOculusXRHMDRuntimeSettings* Settings = GetMutableDefault<UOculusXRHMDRuntimeSettings>();

		return Settings->bInsightPassthroughEnabled || Settings->SystemSplashBackground == ESystemSplashBackgroundType::Contextual;
	}

	void FAllowAlphaToneMapperPassthroughRule::ApplyImpl(bool& OutShouldRestartEditor)
	{
PRAGMA_DISABLE_DEPRECATION_WARNINGS
		OCULUSXR_UPDATE_SETTINGS(URendererSettings, bEnableAlphaChannelInPostProcessing, EAlphaChannelMode::AllowThroughTonemapper);
		OutShouldRestartEditor = true;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
	}
} // namespace OculusXRPassthroughRules

#undef LOCTEXT_NAMESPACE
