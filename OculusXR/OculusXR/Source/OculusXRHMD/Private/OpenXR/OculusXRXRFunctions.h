// Copyright (c) Meta Platforms, Inc. and affiliates.

#pragma once

#include "khronos/openxr/openxr.h"
#include "Misc/Optional.h"

namespace OculusXR
{
	extern TOptional<PFN_xrPerfSettingsSetPerformanceLevelEXT> xrPerfSettingsSetPerformanceLevelEXT;
	extern TOptional<PFN_xrQueryPerformanceMetricsCounterMETA> xrQueryPerformanceMetricsCounterMETA;
	extern TOptional<PFN_xrEnumeratePerformanceMetricsCounterPathsMETA> xrEnumeratePerformanceMetricsCounterPathsMETA;
	extern TOptional<PFN_xrSetPerformanceMetricsStateMETA> xrSetPerformanceMetricsStateMETA;

	void InitOpenXRFunctions(XrInstance InInstance);
} // namespace OculusXR
