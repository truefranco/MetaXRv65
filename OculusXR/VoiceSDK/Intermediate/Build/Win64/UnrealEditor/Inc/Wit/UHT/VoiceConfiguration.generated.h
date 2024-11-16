// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Voice/Configuration/VoiceConfiguration.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WIT_VoiceConfiguration_generated_h
#error "VoiceConfiguration.generated.h already included, missing '#pragma once' in VoiceConfiguration.h"
#endif
#define WIT_VoiceConfiguration_generated_h

#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Configuration_VoiceConfiguration_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoiceConfiguration_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WIT_API UScriptStruct* StaticStruct<struct FVoiceConfiguration>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Configuration_VoiceConfiguration_h


#define FOREACH_ENUM_EVOICECAPTUREEMULATIONMODE(op) \
	op(EVoiceCaptureEmulationMode::None) \
	op(EVoiceCaptureEmulationMode::AlwaysUseSoundWave) \
	op(EVoiceCaptureEmulationMode::AlwaysUseTTS) 

enum class EVoiceCaptureEmulationMode : uint8;
template<> struct TIsUEnumClass<EVoiceCaptureEmulationMode> { enum { Value = true }; };
template<> WIT_API UEnum* StaticEnum<EVoiceCaptureEmulationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
