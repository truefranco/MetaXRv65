// Copyright (c) Meta Platforms, Inc. and affiliates.

#include "OculusXRAnchorsUtil.h"

namespace OculusXRAnchors
{
	EOculusXRAnchorResult::Type GetResultFromOVRResult(ovrpResult OVRResult)
	{
		switch (OVRResult)
		{
			case ovrpSuccess:
				return EOculusXRAnchorResult::Success;
			case ovrpWarning_BoundaryVisibilitySuppressionNotAllowed:
				return EOculusXRAnchorResult::Warning_BoundaryVisibilitySuppressionNotAllowed;

			case ovrpFailure:
				return EOculusXRAnchorResult::Failure;
			case ovrpFailure_InvalidParameter:
				return EOculusXRAnchorResult::Failure_InvalidParameter;
			case ovrpFailure_NotInitialized:
				return EOculusXRAnchorResult::Failure_NotInitialized;
			case ovrpFailure_InvalidOperation:
				return EOculusXRAnchorResult::Failure_InvalidOperation;
			case ovrpFailure_Unsupported:
				return EOculusXRAnchorResult::Failure_Unsupported;
			case ovrpFailure_NotYetImplemented:
				return EOculusXRAnchorResult::Failure_NotYetImplemented;
			case ovrpFailure_OperationFailed:
				return EOculusXRAnchorResult::Failure_OperationFailed;
			case ovrpFailure_InsufficientSize:
				return EOculusXRAnchorResult::Failure_InsufficientSize;
			case ovrpFailure_DataIsInvalid:
				return EOculusXRAnchorResult::Failure_DataIsInvalid;
			case ovrpFailure_DeprecatedOperation:
				return EOculusXRAnchorResult::Failure_DeprecatedOperation;
			case ovrpFailure_ErrorLimitReached:
				return EOculusXRAnchorResult::Failure_ErrorLimitReached;
			case ovrpFailure_ErrorInitializationFailed:
				return EOculusXRAnchorResult::Failure_ErrorInitializationFailed;

				// Query Spaces
			case ovrpFailure_SpaceCloudStorageDisabled:
				return EOculusXRAnchorResult::Failure_SpaceCloudStorageDisabled;
			case ovrpFailure_SpaceMappingInsufficient:
				return EOculusXRAnchorResult::Failure_SpaceMappingInsufficient;
			case ovrpFailure_SpaceLocalizationFailed:
				return EOculusXRAnchorResult::Failure_SpaceLocalizationFailed;
			case ovrpFailure_SpaceNetworkTimeout:
				return EOculusXRAnchorResult::Failure_SpaceNetworkTimeout;
			case ovrpFailure_SpaceNetworkRequestFailed:
				return EOculusXRAnchorResult::Failure_SpaceNetworkRequestFailed;

				// APD
			case ovrpFailure_SpaceInsufficientResources:
				return EOculusXRAnchorResult::Failure_SpaceInsufficientResources;
			case ovrpFailure_SpaceStorageAtCapacity:
				return EOculusXRAnchorResult::Failure_SpaceStorageAtCapacity;
			case ovrpFailure_SpaceInsufficientView:
				return EOculusXRAnchorResult::Failure_SpaceInsufficientView;
			case ovrpFailure_SpacePermissionInsufficient:
				return EOculusXRAnchorResult::Failure_SpacePermissionInsufficient;
			case ovrpFailure_SpaceRateLimited:
				return EOculusXRAnchorResult::Failure_SpaceRateLimited;
			case ovrpFailure_SpaceTooDark:
				return EOculusXRAnchorResult::Failure_SpaceTooDark;
			case ovrpFailure_SpaceTooBright:
				return EOculusXRAnchorResult::Failure_SpaceTooBright;

			default:
				return OVRP_SUCCESS(OVRResult) ? EOculusXRAnchorResult::Success : EOculusXRAnchorResult::Failure;
		}
	}

	FString GetStringFromResult(EOculusXRAnchorResult::Type Result)
	{
		return UEnum::GetDisplayValueAsText(Result).ToString();
	}
} // namespace OculusXRAnchors
