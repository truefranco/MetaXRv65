// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TTS/Configuration/TtsConfiguration.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WIT_TtsConfiguration_generated_h
#error "TtsConfiguration.generated.h already included, missing '#pragma once' in TtsConfiguration.h"
#endif
#define WIT_TtsConfiguration_generated_h

#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Configuration_TtsConfiguration_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTtsConfiguration_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WIT_API UScriptStruct* StaticStruct<struct FTtsConfiguration>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Configuration_TtsConfiguration_h


#define FOREACH_ENUM_ETTSSTORAGECACHELOCATION(op) \
	op(ETtsStorageCacheLocation::Default) \
	op(ETtsStorageCacheLocation::None) \
	op(ETtsStorageCacheLocation::Content) \
	op(ETtsStorageCacheLocation::Persistent) \
	op(ETtsStorageCacheLocation::Temporary) 

enum class ETtsStorageCacheLocation : uint8;
template<> struct TIsUEnumClass<ETtsStorageCacheLocation> { enum { Value = true }; };
template<> WIT_API UEnum* StaticEnum<ETtsStorageCacheLocation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
