// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TTS/Experience/TtsExperience.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETtsStorageCacheLocation : uint8;
struct FTtsConfiguration;
#ifdef WIT_TtsExperience_generated_h
#error "TtsExperience.generated.h already included, missing '#pragma once' in TtsExperience.h"
#endif
#define WIT_TtsExperience_generated_h

#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Experience_TtsExperience_h_23_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Experience_TtsExperience_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeleteAllClips); \
	DECLARE_FUNCTION(execDeleteClip); \
	DECLARE_FUNCTION(execUnloadAllClips); \
	DECLARE_FUNCTION(execUnloadClip); \
	DECLARE_FUNCTION(execFetchAvailableVoices); \
	DECLARE_FUNCTION(execConvertTextToSpeechWithSettings); \
	DECLARE_FUNCTION(execConvertTextToSpeech); \
	DECLARE_FUNCTION(execIsRequestInProgress);


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Experience_TtsExperience_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeleteAllClips); \
	DECLARE_FUNCTION(execDeleteClip); \
	DECLARE_FUNCTION(execUnloadAllClips); \
	DECLARE_FUNCTION(execUnloadClip); \
	DECLARE_FUNCTION(execFetchAvailableVoices); \
	DECLARE_FUNCTION(execConvertTextToSpeechWithSettings); \
	DECLARE_FUNCTION(execConvertTextToSpeech); \
	DECLARE_FUNCTION(execIsRequestInProgress);


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Experience_TtsExperience_h_23_ACCESSORS
#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Experience_TtsExperience_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATtsExperience(); \
	friend struct Z_Construct_UClass_ATtsExperience_Statics; \
public: \
	DECLARE_CLASS(ATtsExperience, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Wit"), NO_API) \
	DECLARE_SERIALIZER(ATtsExperience)


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Experience_TtsExperience_h_23_INCLASS \
private: \
	static void StaticRegisterNativesATtsExperience(); \
	friend struct Z_Construct_UClass_ATtsExperience_Statics; \
public: \
	DECLARE_CLASS(ATtsExperience, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Wit"), NO_API) \
	DECLARE_SERIALIZER(ATtsExperience)


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Experience_TtsExperience_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATtsExperience(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATtsExperience) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATtsExperience); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATtsExperience); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATtsExperience(ATtsExperience&&); \
	NO_API ATtsExperience(const ATtsExperience&); \
public: \
	NO_API virtual ~ATtsExperience();


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Experience_TtsExperience_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATtsExperience(ATtsExperience&&); \
	NO_API ATtsExperience(const ATtsExperience&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATtsExperience); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATtsExperience); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ATtsExperience) \
	NO_API virtual ~ATtsExperience();


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Experience_TtsExperience_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Experience_TtsExperience_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Experience_TtsExperience_h_23_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Experience_TtsExperience_h_23_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Experience_TtsExperience_h_23_ACCESSORS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Experience_TtsExperience_h_23_INCLASS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Experience_TtsExperience_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Experience_TtsExperience_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Experience_TtsExperience_h_23_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Experience_TtsExperience_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Experience_TtsExperience_h_23_ACCESSORS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Experience_TtsExperience_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Experience_TtsExperience_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WIT_API UClass* StaticClass<class ATtsExperience>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Experience_TtsExperience_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
