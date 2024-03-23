// @lint-ignore-every LICENSELINT
// Copyright Epic Games, Inc. All Rights Reserved.

#include "OculusXRFunctionLibrary.h"
#include "OculusXRHMDPrivate.h"
#include "OculusXRHMD.h"
#include "Logging/MessageLog.h"

#define LOCTEXT_NAMESPACE "OculusFunctionLibrary"
#pragma warning (disable : 4702 )
//-------------------------------------------------------------------------------------------------
// UOculusXRFunctionLibrary
//-------------------------------------------------------------------------------------------------

UOculusXRFunctionLibrary::UOculusXRFunctionLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

OculusXRHMD::FOculusXRHMD* UOculusXRFunctionLibrary::GetOculusXRHMD()
{
	return OculusXRHMD::FOculusXRHMD::GetOculusXRHMD();
}

void UOculusXRFunctionLibrary::GetPose(FRotator& DeviceRotation, FVector& DevicePosition, FVector& NeckPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, const FVector PositionScale)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD && OculusXRHMD->IsHeadTrackingAllowed())
	{
		FQuat HeadOrientation = FQuat::Identity;
		FVector HeadPosition = FVector::ZeroVector;

		OculusXRHMD->GetCurrentPose(OculusXRHMD->HMDDeviceId, HeadOrientation, HeadPosition);

		DeviceRotation = HeadOrientation.Rotator();
		DevicePosition = HeadPosition;
		NeckPosition = OculusXRHMD->GetNeckPosition(HeadOrientation, HeadPosition);
	}
	else
#endif // #if OCULUS_HMD_SUPPORTED_PLATFORMS
	{
		DeviceRotation = FRotator::ZeroRotator;
		DevicePosition = FVector::ZeroVector;
		NeckPosition = FVector::ZeroVector;
	}
}

void UOculusXRFunctionLibrary::SetBaseRotationAndBaseOffsetInMeters(FRotator Rotation, FVector BaseOffsetInMeters, EOrientPositionSelector::Type Options)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		if ((Options == EOrientPositionSelector::Orientation) || (Options == EOrientPositionSelector::OrientationAndPosition))
		{
			OculusXRHMD->SetBaseRotation(Rotation);
		}
		if ((Options == EOrientPositionSelector::Position) || (Options == EOrientPositionSelector::OrientationAndPosition))
		{
			OculusXRHMD->SetBaseOffsetInMeters(BaseOffsetInMeters);
		}
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
}

void UOculusXRFunctionLibrary::GetBaseRotationAndBaseOffsetInMeters(FRotator& OutRotation, FVector& OutBaseOffsetInMeters)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		OutRotation = OculusXRHMD->GetBaseRotation();
		OutBaseOffsetInMeters = OculusXRHMD->GetBaseOffsetInMeters();
	}
	else
	{
		OutRotation = FRotator::ZeroRotator;
		OutBaseOffsetInMeters = FVector::ZeroVector;
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
}

void UOculusXRFunctionLibrary::GetRawSensorData(FVector& AngularAcceleration, FVector& LinearAcceleration, FVector& AngularVelocity, FVector& LinearVelocity, float& TimeInSeconds, EOculusXRTrackedDeviceType DeviceType)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr && OculusXRHMD->IsHMDActive())
	{
		ovrpPoseStatef state;
		if (OVRP_SUCCESS(FOculusXRHMDModule::GetPluginWrapper().GetNodePoseState3(ovrpStep_Render, OVRP_CURRENT_FRAMEINDEX, OculusXRHMD::ToOvrpNode(DeviceType), &state)))
		{
			AngularAcceleration = OculusXRHMD::ToFVector(state.AngularAcceleration);
			LinearAcceleration = OculusXRHMD::ToFVector(state.Acceleration);
			AngularVelocity = OculusXRHMD::ToFVector(state.AngularVelocity);
			LinearVelocity = OculusXRHMD::ToFVector(state.Velocity);
			TimeInSeconds = state.Time;
		}
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
}

bool UOculusXRFunctionLibrary::IsDeviceTracked(EOculusXRTrackedDeviceType DeviceType)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr && OculusXRHMD->IsHMDActive())
	{
		ovrpBool Present;
		if (OVRP_SUCCESS(FOculusXRHMDModule::GetPluginWrapper().GetNodePresent2(OculusXRHMD::ToOvrpNode(DeviceType), &Present)))
		{
			return Present != ovrpBool_False;
		}
		else
		{
			return false;
		}
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
	return false;
}

void UOculusXRFunctionLibrary::GetSuggestedCpuAndGpuPerformanceLevels(EOculusXRProcessorPerformanceLevel& CpuPerfLevel, EOculusXRProcessorPerformanceLevel& GpuPerfLevel)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr && OculusXRHMD->IsHMDActive())
	{
		OculusXRHMD->GetSuggestedCpuAndGpuPerformanceLevels(CpuPerfLevel, GpuPerfLevel);
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
}

void UOculusXRFunctionLibrary::SetSuggestedCpuAndGpuPerformanceLevels(EOculusXRProcessorPerformanceLevel CpuPerfLevel, EOculusXRProcessorPerformanceLevel GpuPerfLevel)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr && OculusXRHMD->IsHMDActive())
	{
		OculusXRHMD->SetSuggestedCpuAndGpuPerformanceLevels(CpuPerfLevel, GpuPerfLevel);
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
}

void UOculusXRFunctionLibrary::SetCPUAndGPULevels(int CPULevel, int GPULevel)
{
	// Deprecated. Please use Get/SetSuggestedCpuAndGpuPerformanceLevels instead.
}

bool UOculusXRFunctionLibrary::GetUserProfile(FOculusXRHmdUserProfile& Profile)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		OculusXRHMD::FOculusXRHMD::UserProfile Data;
		if (OculusXRHMD->GetUserProfile(Data))
		{
			Profile.Name = "";
			Profile.Gender = "Unknown";
			Profile.PlayerHeight = 0.0f;
			Profile.EyeHeight = Data.EyeHeight;
			Profile.IPD = Data.IPD;
			Profile.NeckToEyeDistance = FVector2D(Data.EyeDepth, 0.0f);
			return true;
		}
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
	return false;
}

void UOculusXRFunctionLibrary::SetBaseRotationAndPositionOffset(FRotator BaseRot, FVector PosOffset, EOrientPositionSelector::Type Options)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		if (Options == EOrientPositionSelector::Orientation || Options == EOrientPositionSelector::OrientationAndPosition)
		{
			OculusXRHMD->SetBaseRotation(BaseRot);
		}
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
}

void UOculusXRFunctionLibrary::GetBaseRotationAndPositionOffset(FRotator& OutRot, FVector& OutPosOffset)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		OutRot = OculusXRHMD->GetBaseRotation();
		OutPosOffset = FVector::ZeroVector;
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
}

void UOculusXRFunctionLibrary::AddLoadingSplashScreen(class UTexture2D* Texture, FVector TranslationInMeters, FRotator Rotation, FVector2D SizeInMeters, FRotator DeltaRotation, bool bClearBeforeAdd)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		OculusXRHMD::FSplash* Splash = OculusXRHMD->GetSplash();
		if (Splash)
		{
			if (bClearBeforeAdd)
			{
				Splash->ClearSplashes();
			}

			FOculusXRSplashDesc Desc;
			Desc.LoadingTexture = Texture;
			Desc.QuadSizeInMeters = SizeInMeters;
			Desc.TransformInMeters = FTransform(Rotation, TranslationInMeters);
			Desc.DeltaRotation = FQuat(DeltaRotation);
			Splash->AddSplash(Desc);
		}
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
}

void UOculusXRFunctionLibrary::ClearLoadingSplashScreens()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		OculusXRHMD::FSplash* Splash = OculusXRHMD->GetSplash();
		if (Splash)
		{
			Splash->ClearSplashes();
		}
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
}

bool UOculusXRFunctionLibrary::HasInputFocus()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	const OculusXRHMD::FOculusXRHMD* const OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr && OculusXRHMD->IsHMDActive())
	{
		ovrpBool HasFocus;
		if (OVRP_SUCCESS(FOculusXRHMDModule::GetPluginWrapper().GetAppHasInputFocus(&HasFocus)))
		{
			return HasFocus != ovrpBool_False;
		}
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
	return false;
}

bool UOculusXRFunctionLibrary::HasSystemOverlayPresent()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	const OculusXRHMD::FOculusXRHMD* const OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr && OculusXRHMD->IsHMDActive())
	{
		ovrpBool HasFocus;
		if (OVRP_SUCCESS(FOculusXRHMDModule::GetPluginWrapper().GetAppHasInputFocus(&HasFocus)))
		{
			return HasFocus == ovrpBool_False;
		}
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
	return false;
}

void UOculusXRFunctionLibrary::GetGPUUtilization(bool& IsGPUAvailable, float& GPUUtilization)
{
	IsGPUAvailable = false;
	GPUUtilization = 0.0f;

#if OCULUS_HMD_SUPPORTED_PLATFORMS
	const OculusXRHMD::FOculusXRHMD* const OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		ovrpBool GPUAvailable;
		if (OVRP_SUCCESS(FOculusXRHMDModule::GetPluginWrapper().GetGPUUtilSupported(&GPUAvailable)))
		{
			IsGPUAvailable = (GPUAvailable != ovrpBool_False);
			FOculusXRHMDModule::GetPluginWrapper().GetGPUUtilLevel(&GPUUtilization);
		}
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
}

float UOculusXRFunctionLibrary::GetGPUFrameTime()
{
	float frameTime = 0;
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	const OculusXRHMD::FOculusXRHMD* const OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		if (OVRP_SUCCESS(FOculusXRHMDModule::GetPluginWrapper().GetGPUFrameTime(&frameTime)))
		{
			return frameTime;
		}
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
	return 0.0f;
}

EOculusXRFoveatedRenderingMethod UOculusXRFunctionLibrary::GetFoveatedRenderingMethod()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		ovrpBool enabled;
		if (OVRP_SUCCESS(FOculusXRHMDModule::GetPluginWrapper().GetFoveationEyeTracked(&enabled)))
		{
			return enabled == ovrpBool_True ? EOculusXRFoveatedRenderingMethod::EyeTrackedFoveatedRendering : EOculusXRFoveatedRenderingMethod::FixedFoveatedRendering;
		}
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
	return EOculusXRFoveatedRenderingMethod::FixedFoveatedRendering;
}

void UOculusXRFunctionLibrary::SetFoveatedRenderingMethod(EOculusXRFoveatedRenderingMethod Method)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		OculusXRHMD->SetFoveatedRenderingMethod(Method);
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
}

void UOculusXRFunctionLibrary::SetFoveatedRenderingLevel(EOculusXRFoveatedRenderingLevel level, bool isDynamic)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		OculusXRHMD->SetFoveatedRenderingLevel(level, isDynamic);
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
}

EOculusXRFoveatedRenderingLevel UOculusXRFunctionLibrary::GetFoveatedRenderingLevel()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		ovrpTiledMultiResLevel Lvl;
		if (OVRP_SUCCESS(FOculusXRHMDModule::GetPluginWrapper().GetTiledMultiResLevel(&Lvl)))
		{
			return (EOculusXRFoveatedRenderingLevel)Lvl;
		}
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
	return EOculusXRFoveatedRenderingLevel::Off;
}

bool UOculusXRFunctionLibrary::GetEyeTrackedFoveatedRenderingSupported()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	// Always return false on other engine releases, since they don't have FDM offset support
#ifdef WITH_OCULUS_BRANCH
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		ovrpBool Supported;
		if (OVRP_SUCCESS(FOculusXRHMDModule::GetPluginWrapper().GetFoveationEyeTrackedSupported(&Supported)))
		{
			return Supported == ovrpBool_True;
		}
	}
#endif // WITH_OCULUS_BRANCH
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
	return false;
}

FString UOculusXRFunctionLibrary::GetDeviceName()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		const char* NameString;
		if (OVRP_SUCCESS(FOculusXRHMDModule::GetPluginWrapper().GetSystemProductName2(&NameString)) && NameString)
		{
			return FString(NameString);
		}
	}
#endif
	return FString();
}

EOculusXRDeviceType UOculusXRFunctionLibrary::GetDeviceType()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		if (OculusXRHMD->GetSettings())
		{
			switch (OculusXRHMD->GetSettings()->SystemHeadset)
			{
				case ovrpSystemHeadset_Oculus_Quest:
					return EOculusXRDeviceType::OculusQuest_Deprecated;
				case ovrpSystemHeadset_Oculus_Quest_2:
					return EOculusXRDeviceType::OculusQuest2;
				case ovrpSystemHeadset_Meta_Quest_Pro:
					return EOculusXRDeviceType::MetaQuestPro;
				case ovrpSystemHeadset_Meta_Quest_3:
					return EOculusXRDeviceType::MetaQuest3;
				case ovrpSystemHeadset_Rift_CV1:
					return EOculusXRDeviceType::Rift;
				case ovrpSystemHeadset_Rift_S:
					return EOculusXRDeviceType::Rift_S;
				case ovrpSystemHeadset_Oculus_Link_Quest:
					return EOculusXRDeviceType::Quest_Link_Deprecated;
				case ovrpSystemHeadset_Oculus_Link_Quest_2:
					return EOculusXRDeviceType::Quest2_Link;
				case ovrpSystemHeadset_Meta_Link_Quest_Pro:
					return EOculusXRDeviceType::MetaQuestProLink;
				case ovrpSystemHeadset_Meta_Link_Quest_3:
					return EOculusXRDeviceType::MetaQuest3Link;
				default:
					break;
			}
		}
	}
#endif
	return EOculusXRDeviceType::OculusUnknown;
}

EOculusXRControllerType UOculusXRFunctionLibrary::GetControllerType(EControllerHand deviceHand)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	auto getOVRPHand = [](EControllerHand hand) {
		switch (hand)
		{
			case EControllerHand::Left:
				return ovrpHand::ovrpHand_Left;
			case EControllerHand::Right:
				return ovrpHand::ovrpHand_Right;
			default:
				return ovrpHand::ovrpHand_None;
		}
		return ovrpHand::ovrpHand_None;
	};

	auto getEControllerType = [](ovrpInteractionProfile profile) {
		switch (profile)
		{
			case ovrpInteractionProfile::ovrpInteractionProfile_Touch:
				return EOculusXRControllerType::MetaQuestTouch;
			case ovrpInteractionProfile::ovrpInteractionProfile_TouchPro:
				return EOculusXRControllerType::MetaQuestTouchPro;
			case ovrpInteractionProfile::ovrpInteractionProfile_TouchPlus:
				return EOculusXRControllerType::MetaQuestTouchPlus;
			default:
				return EOculusXRControllerType::None;
		}
		return EOculusXRControllerType::None;
	};

	ovrpInteractionProfile interactionProfile = ovrpInteractionProfile::ovrpInteractionProfile_None;
	ovrpHand hand = getOVRPHand(deviceHand);
	if (hand == ovrpHand::ovrpHand_None)
		return EOculusXRControllerType::Unknown;
	if (OVRP_SUCCESS(FOculusXRHMDModule::GetPluginWrapper().GetCurrentInteractionProfile(hand, &interactionProfile)))
	{
		return getEControllerType(interactionProfile);
	}
	return EOculusXRControllerType::Unknown;
#endif
	return EOculusXRControllerType::Unknown;
}

TArray<float> UOculusXRFunctionLibrary::GetAvailableDisplayFrequencies()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		int NumberOfFrequencies;
		if (OVRP_SUCCESS(FOculusXRHMDModule::GetPluginWrapper().GetSystemDisplayAvailableFrequencies(nullptr, &NumberOfFrequencies)))
		{
			TArray<float> freqArray;
			freqArray.SetNum(NumberOfFrequencies);
			FOculusXRHMDModule::GetPluginWrapper().GetSystemDisplayAvailableFrequencies(freqArray.GetData(), &NumberOfFrequencies);
			return freqArray;
		}
	}
#endif
	return TArray<float>();
}

float UOculusXRFunctionLibrary::GetCurrentDisplayFrequency()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		float Frequency;
		if (OVRP_SUCCESS(FOculusXRHMDModule::GetPluginWrapper().GetSystemDisplayFrequency2(&Frequency)))
		{
			return Frequency;
		}
	}
#endif
	return 0.0f;
}

void UOculusXRFunctionLibrary::SetDisplayFrequency(float RequestedFrequency)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		FOculusXRHMDModule::GetPluginWrapper().SetSystemDisplayFrequency(RequestedFrequency);
	}
#endif
}

void UOculusXRFunctionLibrary::EnablePositionTracking(bool bPositionTracking)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		FOculusXRHMDModule::GetPluginWrapper().SetTrackingPositionEnabled2(bPositionTracking);
	}
#endif
}

void UOculusXRFunctionLibrary::EnableOrientationTracking(bool bOrientationTracking)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		FOculusXRHMDModule::GetPluginWrapper().SetTrackingOrientationEnabled2(bOrientationTracking);
	}
#endif
}

void UOculusXRFunctionLibrary::SetColorScaleAndOffset(FLinearColor ColorScale, FLinearColor ColorOffset, bool bApplyToAllLayers)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		OculusXRHMD->SetColorScaleAndOffset(ColorScale, ColorOffset, bApplyToAllLayers);
	}
#endif
}

class IStereoLayers* UOculusXRFunctionLibrary::GetStereoLayers()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		return OculusXRHMD;
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
	return nullptr;
}

/** Helper that converts EOculusXRBoundaryType to ovrpBoundaryType */
#if OCULUS_HMD_SUPPORTED_PLATFORMS
static ovrpBoundaryType ToOvrpBoundaryType(EOculusXRBoundaryType Source)
{
	switch (Source)
	{
		case EOculusXRBoundaryType::Boundary_PlayArea:
			return ovrpBoundary_PlayArea;

		case EOculusXRBoundaryType::Boundary_Outer:
		default:
			return ovrpBoundary_Outer;
	}
}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS

bool UOculusXRFunctionLibrary::IsGuardianConfigured()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		ovrpBool boundaryConfigured;
		return OVRP_SUCCESS(FOculusXRHMDModule::GetPluginWrapper().GetBoundaryConfigured2(&boundaryConfigured)) && boundaryConfigured;
	}
#endif
	return false;
}

bool UOculusXRFunctionLibrary::IsGuardianDisplayed()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		ovrpBool boundaryVisible;
		return OVRP_SUCCESS(FOculusXRHMDModule::GetPluginWrapper().GetBoundaryVisible2(&boundaryVisible)) && boundaryVisible;
	}
#endif
	return false;
}

TArray<FVector> UOculusXRFunctionLibrary::GetGuardianPoints(EOculusXRBoundaryType BoundaryType, bool UsePawnSpace /* = false */)
{
	TArray<FVector> BoundaryPointList;
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		ovrpBool bBoundaryConfigured = false;
		if (OVRP_SUCCESS(FOculusXRHMDModule::GetPluginWrapper().GetBoundaryConfigured2(&bBoundaryConfigured)) && bBoundaryConfigured)
		{
			ovrpBoundaryType obt = ToOvrpBoundaryType(BoundaryType);
			int NumPoints = 0;

			if (OVRP_SUCCESS(FOculusXRHMDModule::GetPluginWrapper().GetBoundaryGeometry3(obt, nullptr, &NumPoints)))
			{
				//allocate points
				const int BufferSize = NumPoints;
				ovrpVector3f* BoundaryPoints = new ovrpVector3f[BufferSize];

				if (OVRP_SUCCESS(FOculusXRHMDModule::GetPluginWrapper().GetBoundaryGeometry3(obt, BoundaryPoints, &NumPoints)))
				{
					NumPoints = FMath::Min(BufferSize, NumPoints);
					check(NumPoints <= BufferSize); // For static analyzer
					BoundaryPointList.Reserve(NumPoints);

					for (int i = 0; i < NumPoints; i++)
					{
						FVector point;
						if (UsePawnSpace)
						{
							point = OculusXRHMD->ConvertVector_M2U(BoundaryPoints[i]);
						}
						else
						{
							point = OculusXRHMD->ScaleAndMovePointWithPlayer(BoundaryPoints[i]);
						}
						BoundaryPointList.Add(point);
					}
				}

				delete[] BoundaryPoints;
			}
		}
	}
#endif
	return BoundaryPointList;
}

FVector UOculusXRFunctionLibrary::GetGuardianDimensions(EOculusXRBoundaryType BoundaryType)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		ovrpBoundaryType obt = ToOvrpBoundaryType(BoundaryType);
		ovrpVector3f Dimensions;

		if (OVRP_FAILURE(FOculusXRHMDModule::GetPluginWrapper().GetBoundaryDimensions2(obt, &Dimensions)))
			return FVector::ZeroVector;

		Dimensions.z *= -1.0;
		return OculusXRHMD->ConvertVector_M2U(Dimensions);
	}
#endif
	return FVector::ZeroVector;
}

FTransform UOculusXRFunctionLibrary::GetPlayAreaTransform()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		ovrpBool bBoundaryConfigured = false;
		if (OVRP_SUCCESS(FOculusXRHMDModule::GetPluginWrapper().GetBoundaryConfigured2(&bBoundaryConfigured)) && bBoundaryConfigured)
		{
			int NumPoints = 4;
			ovrpVector3f BoundaryPoints[4];

			if (OVRP_SUCCESS(FOculusXRHMDModule::GetPluginWrapper().GetBoundaryGeometry3(ovrpBoundary_PlayArea, BoundaryPoints, &NumPoints)))
			{
				FVector ConvertedPoints[4];

				for (int i = 0; i < NumPoints; i++)
				{
					ConvertedPoints[i] = OculusXRHMD->ScaleAndMovePointWithPlayer(BoundaryPoints[i]);
				}

				float metersScale = OculusXRHMD->GetWorldToMetersScale();

				FVector Edge = ConvertedPoints[1] - ConvertedPoints[0];
				float Angle = FMath::Acos((Edge).GetSafeNormal() | FVector::RightVector);
				FQuat Rotation(FVector::UpVector, Edge.X < 0 ? Angle : -Angle);

				FVector Position = (ConvertedPoints[0] + ConvertedPoints[1] + ConvertedPoints[2] + ConvertedPoints[3]) / 4;
				FVector Scale(FVector::Distance(ConvertedPoints[3], ConvertedPoints[0]) / metersScale, FVector::Distance(ConvertedPoints[1], ConvertedPoints[0]) / metersScale, 1.0);

				return FTransform(Rotation, Position, Scale);
			}
		}
	}
#endif
	return FTransform();
}

FOculusXRGuardianTestResult UOculusXRFunctionLibrary::GetPointGuardianIntersection(const FVector Point, EOculusXRBoundaryType BoundaryType)
{
	FOculusXRGuardianTestResult InteractionInfo;
	memset(&InteractionInfo, 0, sizeof(FOculusXRGuardianTestResult));

#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		ovrpVector3f OvrpPoint = OculusXRHMD->WorldLocationToOculusPoint(Point);
		ovrpBoundaryType OvrpBoundaryType = ToOvrpBoundaryType(BoundaryType);
		ovrpBoundaryTestResult InteractionResult;

		if (OVRP_SUCCESS(FOculusXRHMDModule::GetPluginWrapper().TestBoundaryPoint2(OvrpPoint, OvrpBoundaryType, &InteractionResult)))
		{
			InteractionInfo.IsTriggering = (InteractionResult.IsTriggering != 0);
			InteractionInfo.ClosestDistance = OculusXRHMD->ConvertFloat_M2U(InteractionResult.ClosestDistance);
			InteractionInfo.ClosestPoint = OculusXRHMD->ScaleAndMovePointWithPlayer(InteractionResult.ClosestPoint);
			InteractionInfo.ClosestPointNormal = OculusXRHMD->ConvertVector_M2U(InteractionResult.ClosestPointNormal);
			InteractionInfo.DeviceType = EOculusXRTrackedDeviceType::None;
		}
	}
#endif

	return InteractionInfo;
}

FOculusXRGuardianTestResult UOculusXRFunctionLibrary::GetNodeGuardianIntersection(EOculusXRTrackedDeviceType DeviceType, EOculusXRBoundaryType BoundaryType)
{
	FOculusXRGuardianTestResult InteractionInfo;
	memset(&InteractionInfo, 0, sizeof(FOculusXRGuardianTestResult));

#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		ovrpNode OvrpNode = OculusXRHMD::ToOvrpNode(DeviceType);
		ovrpBoundaryType OvrpBoundaryType = ToOvrpBoundaryType(BoundaryType);
		ovrpBoundaryTestResult TestResult;

		if (OVRP_SUCCESS(FOculusXRHMDModule::GetPluginWrapper().TestBoundaryNode2(OvrpNode, ovrpBoundary_PlayArea, &TestResult)) && TestResult.IsTriggering)
		{
			InteractionInfo.IsTriggering = true;
			InteractionInfo.DeviceType = OculusXRHMD::ToEOculusXRTrackedDeviceType(OvrpNode);
			InteractionInfo.ClosestDistance = OculusXRHMD->ConvertFloat_M2U(TestResult.ClosestDistance);
			InteractionInfo.ClosestPoint = OculusXRHMD->ScaleAndMovePointWithPlayer(TestResult.ClosestPoint);
			InteractionInfo.ClosestPointNormal = OculusXRHMD->ConvertVector_M2U(TestResult.ClosestPointNormal);
		}
	}
#endif

	return InteractionInfo;
}

void UOculusXRFunctionLibrary::SetGuardianVisibility(bool GuardianVisible)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		FOculusXRHMDModule::GetPluginWrapper().SetBoundaryVisible2(GuardianVisible);
	}
#endif
}

bool UOculusXRFunctionLibrary::GetSystemHmd3DofModeEnabled()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		ovrpBool enabled;
		return OVRP_SUCCESS(FOculusXRHMDModule::GetPluginWrapper().GetSystemHmd3DofModeEnabled(&enabled)) && enabled;
	}
#endif
	return false;
}

EOculusXRColorSpace UOculusXRFunctionLibrary::GetHmdColorDesc()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		ovrpColorSpace HmdColorSpace;
		if (OVRP_SUCCESS(FOculusXRHMDModule::GetPluginWrapper().GetHmdColorDesc(&HmdColorSpace)))
		{
			return (EOculusXRColorSpace)HmdColorSpace;
		}
	}
#endif
	return EOculusXRColorSpace::Unknown;
}

void UOculusXRFunctionLibrary::SetClientColorDesc(EOculusXRColorSpace ColorSpace)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		ovrpColorSpace ClientColorSpace = (ovrpColorSpace)ColorSpace;
#if PLATFORM_ANDROID
		if (ClientColorSpace == ovrpColorSpace_Unknown)
		{
			ClientColorSpace = ovrpColorSpace_Quest;
		}
#endif
		FOculusXRHMDModule::GetPluginWrapper().SetClientColorDesc(ClientColorSpace);
	}
#endif
}

void UOculusXRFunctionLibrary::SetLocalDimmingOn(bool LocalDimmingOn)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		UE_LOG(LogHMD, Log, TEXT("SetLocalDimmingOn %d"), LocalDimmingOn);
		FOculusXRHMDModule::GetPluginWrapper().SetLocalDimming(LocalDimmingOn);
	}
#endif
}

bool UOculusXRFunctionLibrary::IsPassthroughSupported()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		ovrpInsightPassthroughCapabilityFlags capabilities;

		if (OVRP_SUCCESS(FOculusXRHMDModule::GetPluginWrapper().GetPassthroughCapabilityFlags(&capabilities)))
		{
			return (capabilities & ovrpInsightPassthroughCapabilityFlags::ovrpInsightPassthroughCapabilityFlags_Passthrough)
				== ovrpInsightPassthroughCapabilityFlags::ovrpInsightPassthroughCapabilityFlags_Passthrough;
		}

		return false;
	}
#endif
	return false;
}

bool UOculusXRFunctionLibrary::IsColorPassthroughSupported()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		ovrpInsightPassthroughCapabilityFlags capabilities;
		if (OVRP_SUCCESS(FOculusXRHMDModule::GetPluginWrapper().GetPassthroughCapabilityFlags(&capabilities)))
		{
			return (capabilities & ovrpInsightPassthroughCapabilityFlags::ovrpInsightPassthroughCapabilityFlags_Color)
				== ovrpInsightPassthroughCapabilityFlags::ovrpInsightPassthroughCapabilityFlags_Color;
		}
		return false;
	}
#endif
	return false;
}

void UOculusXRFunctionLibrary::StartEnvironmentDepth()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		int CreateFlags = 0;
		OculusXRHMD->StartEnvironmentDepth(CreateFlags);
	}
#endif
}

void UOculusXRFunctionLibrary::StopEnvironmentDepth()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		OculusXRHMD->StopEnvironmentDepth();
	}
#endif
}

bool UOculusXRFunctionLibrary::IsEnvironmentDepthStarted()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		return OculusXRHMD->IsEnvironmentDepthStarted();
	}
#endif
	return false;
}

void UOculusXRFunctionLibrary::SetEnvironmentDepthHandRemoval(bool RemoveHands)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		OculusXRHMD->SetEnvironmentDepthHandRemoval(RemoveHands);
	}
#endif
}

void UOculusXRFunctionLibrary::SetXROcclusionsMode(UObject* WorldContextObject, EOculusXROcclusionsMode Mode)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		OculusXRHMD->EnableHardOcclusions(Mode == EOculusXROcclusionsMode::HardOcclusions);
	}
#if defined(WITH_OCULUS_BRANCH)
	WorldContextObject->GetWorld()->Scene->SetEnableXRPassthroughSoftOcclusions(Mode == EOculusXROcclusionsMode::SoftOcclusions);
#else
	ensureMsgf(Mode != EOculusXROcclusionsMode::SoftOcclusions, TEXT("Soft occlusions are only supported with the Oculus branch of the Unreal Engine"));
#endif // defined(WITH_OCULUS_BRANCH)
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
}

void UOculusXRFunctionLibrary::SetEyeBufferSharpenType(EOculusXREyeBufferSharpenType EyeBufferSharpenType)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusXRHMD::FOculusXRHMD* OculusXRHMD = GetOculusXRHMD();
	if (OculusXRHMD != nullptr)
	{
		switch (EyeBufferSharpenType)
		{
			case EOculusXREyeBufferSharpenType::SLST_Normal:
				FOculusXRHMDModule::GetPluginWrapper().SetEyeBufferSharpenType(ovrpLayerSubmitFlag_EfficientSharpen);
				break;
			case EOculusXREyeBufferSharpenType::SLST_Quality:
				FOculusXRHMDModule::GetPluginWrapper().SetEyeBufferSharpenType(ovrpLayerSubmitFlag_QualitySharpen);
				break;
			case EOculusXREyeBufferSharpenType::SLST_Auto:
				FOculusXRHMDModule::GetPluginWrapper().SetEyeBufferSharpenType(ovrpLayerSubmitFlag_AutoLayerFilter);
				break;
			default:
				FOculusXRHMDModule::GetPluginWrapper().SetEyeBufferSharpenType(ovrpLayerSubmitFlags(0));
				break;
		}
	}
#endif
}

bool UOculusXRFunctionLibrary::IsPassthroughRecommended()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	const OculusXRHMD::FOculusXRHMD* OculusHMD = GetOculusXRHMD();
	if (OculusHMD != nullptr)
	{
		ovrpPassthroughPreferences Preferences;
		if (OVRP_SUCCESS(FOculusXRHMDModule::GetPluginWrapper().GetPassthroughPreferences(&Preferences)))
		{
			return (Preferences.Flags & ovrpPassthroughPreferenceFlags::ovrpPassthroughPreferenceFlags_DefaultToActive)
				== ovrpPassthroughPreferenceFlags::ovrpPassthroughPreferenceFlags_DefaultToActive;
		};
	}
#endif
	return false;
}
#undef LOCTEXT_NAMESPACE
