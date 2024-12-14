// Copyright (c) Meta Platforms, Inc. and affiliates.

#include "OculusXRColocationUtil.h"

namespace OculusXRColocation
{
	EColocationResult GetResultFromOVRResult(ovrpResult OVRResult)
	{
		switch (OVRResult)
		{
			case ovrpSuccess:
				return EColocationResult::Success;
			case ovrpSuccess_ColocationDiscoveryAlreadyAdvertising:
				return EColocationResult::Success_AlreadyAdvertising;
			case ovrpSuccess_ColocationDiscoveryAlreadyDiscovering:
				return EColocationResult::Success_AlreadyDiscovering;
			case ovrpFailure:
				return EColocationResult::Failure;
			case ovrpFailure_InvalidParameter:
				return EColocationResult::FailureInvalidParameter;
			case ovrpFailure_DataIsInvalid:
				return EColocationResult::FailureDataIsInvalid;
			case ovrpFailure_SpacePermissionInsufficient:
				return EColocationResult::InsufficientPermissions;
			case ovrpFailure_SpaceCloudStorageDisabled:
				return EColocationResult::CloudStorageDisabled;
			case ovrpFailure_SpaceNetworkTimeout:
				return EColocationResult::NetworkTimeout;
			case ovrpFailure_SpaceNetworkRequestFailed:
				return EColocationResult::NetworkRequestFailed;
			case ovrpFailure_ColocationDiscoveryNetworkFailed:
				return EColocationResult::NetworkRequestFailed;
			case ovrpFailure_ColocationDiscoveryNoDiscoveryMethodAvailable:
				return EColocationResult::NoDiscoveryMethodAvailable;
			default:
				return OVRP_SUCCESS(OVRResult) ? EColocationResult::Success : EColocationResult::Failure;
		}
	}

	const FString& GetStringFromResult(EColocationResult Result)
	{
		// We could use UEnum::GetDisplayValueAsText but that will allocate!
		const static TMap<EColocationResult, FString> Mapping = {
			{ EColocationResult::Success, "Success" },
			{ EColocationResult::Success_AlreadyAdvertising, "Success_AlreadyAdvertising" },
			{ EColocationResult::Success_AlreadyDiscovering, "Success_AlreadyDiscovering" },
			{ EColocationResult::Failure, "Failure" },
			{ EColocationResult::FailureDataIsInvalid, "FailureDataIsInvalid" },
			{ EColocationResult::FailureInvalidParameter, "FailureInvalidParameter" },
			{ EColocationResult::InsufficientPermissions, "InsufficientPermissions" },
			{ EColocationResult::CloudStorageDisabled, "CloudStorageDisabled" },
			{ EColocationResult::NetworkRequestFailed, "NetworkRequestFailed" },
			{ EColocationResult::NetworkTimeout, "NetworkTimeout" },
			{ EColocationResult::NoDiscoveryMethodAvailable, "NoDiscoveryMethodAvailable" }
		};

		const static FString Invalid = "EColocationResult(Unknown)";
		return Mapping.Contains(Result) ? Mapping[Result] : Invalid;
	}
} // namespace OculusXRColocation
