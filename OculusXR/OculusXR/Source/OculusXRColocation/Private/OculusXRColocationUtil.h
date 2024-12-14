// Copyright (c) Meta Platforms, Inc. and affiliates.

#pragma once

#include "OculusXRAnchorTypes.h"
#include "OculusXRColocationTypes.h"
#include "OculusXRHMDPrivate.h"

namespace OculusXRColocation
{
	EColocationResult GetResultFromOVRResult(ovrpResult OVRResult);
	const FString& GetStringFromResult(EColocationResult Result);
} // namespace OculusXRColocation
