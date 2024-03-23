// Copyright (c) Meta Platforms, Inc. and affiliates.

#pragma once

#include "OculusXRMovementTypes.h"

struct OCULUSXRMOVEMENT_API OculusXRMovement
{
	static bool GetBodyState(FOculusXRBodyState& outOculusXRBodyState, float WorldToMeters = 100.0f);
	static bool IsBodyTrackingEnabled();
	static bool IsBodyTrackingSupported();
	static bool StartBodyTracking();
	static bool StopBodyTracking();
	static bool StartBodyTrackingByJointSet(EOculusXRBodyJointSet jointSet);
	static bool RequestBodyTrackingFidelity(EOculusXRBodyTrackingFidelity fidelity);
	static bool ResetBodyTrackingCalibration();
	static bool SuggestBodyTrackingCalibrationOverride(float height);

private:
	static bool IsFullBodyTrackingEnabled();

public:
	static bool GetFaceState(FOculusXRFaceState& outOculusXRFaceState);
	static bool IsFaceTrackingEnabled();
	static bool IsFaceTrackingSupported();
	static bool StartFaceTracking();
	static bool StopFaceTracking();

	static bool GetEyeGazesState(FOculusXREyeGazesState& outOculusXREyeGazesState, float WorldToMeters = 100.0f);
	static bool IsEyeTrackingEnabled();
	static bool IsEyeTrackingSupported();
	static bool StartEyeTracking();
	static bool StopEyeTracking();
};
