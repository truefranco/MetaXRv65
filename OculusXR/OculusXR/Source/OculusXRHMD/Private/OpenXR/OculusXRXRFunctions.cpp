// Copyright (c) Meta Platforms, Inc. and affiliates.

#include "OculusXRXRFunctions.h"
#include "OpenXRCore.h"
#include "OculusXROpenXRUtilities.h"

namespace OculusXR
{
	TOptional<PFN_xrPerfSettingsSetPerformanceLevelEXT> xrPerfSettingsSetPerformanceLevelEXT = nullptr;
	TOptional<PFN_xrQueryPerformanceMetricsCounterMETA> xrQueryPerformanceMetricsCounterMETA = nullptr;
	TOptional<PFN_xrEnumeratePerformanceMetricsCounterPathsMETA> xrEnumeratePerformanceMetricsCounterPathsMETA = nullptr;
	TOptional<PFN_xrSetPerformanceMetricsStateMETA> xrSetPerformanceMetricsStateMETA = nullptr;

	void InitOpenXRFunctions(XrInstance InInstance)
	{
		OculusXR::XRGetInstanceProcAddr(InInstance, "xrPerfSettingsSetPerformanceLevelEXT", &xrPerfSettingsSetPerformanceLevelEXT);
		OculusXR::XRGetInstanceProcAddr(InInstance, "xrQueryPerformanceMetricsCounterMETA", &xrQueryPerformanceMetricsCounterMETA);
		OculusXR::XRGetInstanceProcAddr(InInstance, "xrEnumeratePerformanceMetricsCounterPathsMETA", &xrEnumeratePerformanceMetricsCounterPathsMETA);
		OculusXR::XRGetInstanceProcAddr(InInstance, "xrSetPerformanceMetricsStateMETA", &xrSetPerformanceMetricsStateMETA);
	}

} // namespace OculusXR
