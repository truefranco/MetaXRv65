// Copyright (c) Meta Platforms, Inc. and affiliates.

#pragma once

#include "OculusXRAnchorTypes.h"
#include "OculusXRHMDPrivate.h"

namespace OculusXRAnchors
{
	EOculusXRAnchorResult::Type GetResultFromOVRResult(ovrpResult OVRResult);
	FString GetStringFromResult(EOculusXRAnchorResult::Type Result);
} // namespace OculusXRAnchors
