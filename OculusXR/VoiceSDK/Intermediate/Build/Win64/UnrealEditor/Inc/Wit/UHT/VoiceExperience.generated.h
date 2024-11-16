// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Voice/Experience/VoiceExperience.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FWitResponse;
#ifdef WIT_VoiceExperience_generated_h
#error "VoiceExperience.generated.h already included, missing '#pragma once' in VoiceExperience.h"
#endif
#define WIT_VoiceExperience_generated_h

#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Experience_VoiceExperience_h_23_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Experience_VoiceExperience_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAcceptPartialResponseAndCancelRequest); \
	DECLARE_FUNCTION(execSendTranscriptionWithRequestOptions); \
	DECLARE_FUNCTION(execSendTranscription); \
	DECLARE_FUNCTION(execIsRequestInProgress); \
	DECLARE_FUNCTION(execIsVoiceStreamingActive); \
	DECLARE_FUNCTION(execGetVoiceInputVolume); \
	DECLARE_FUNCTION(execIsVoiceInputActive); \
	DECLARE_FUNCTION(execDeactivateAndAbortRequest); \
	DECLARE_FUNCTION(execDeactivateVoiceInput); \
	DECLARE_FUNCTION(execActivateVoiceInputImmediatelyWithRequestOptions); \
	DECLARE_FUNCTION(execActivateVoiceInputImmediately); \
	DECLARE_FUNCTION(execActivateVoiceInputWithRequestOptions); \
	DECLARE_FUNCTION(execActivateVoiceInput);


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Experience_VoiceExperience_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAcceptPartialResponseAndCancelRequest); \
	DECLARE_FUNCTION(execSendTranscriptionWithRequestOptions); \
	DECLARE_FUNCTION(execSendTranscription); \
	DECLARE_FUNCTION(execIsRequestInProgress); \
	DECLARE_FUNCTION(execIsVoiceStreamingActive); \
	DECLARE_FUNCTION(execGetVoiceInputVolume); \
	DECLARE_FUNCTION(execIsVoiceInputActive); \
	DECLARE_FUNCTION(execDeactivateAndAbortRequest); \
	DECLARE_FUNCTION(execDeactivateVoiceInput); \
	DECLARE_FUNCTION(execActivateVoiceInputImmediatelyWithRequestOptions); \
	DECLARE_FUNCTION(execActivateVoiceInputImmediately); \
	DECLARE_FUNCTION(execActivateVoiceInputWithRequestOptions); \
	DECLARE_FUNCTION(execActivateVoiceInput);


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Experience_VoiceExperience_h_23_ACCESSORS
#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Experience_VoiceExperience_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVoiceExperience(); \
	friend struct Z_Construct_UClass_AVoiceExperience_Statics; \
public: \
	DECLARE_CLASS(AVoiceExperience, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Wit"), NO_API) \
	DECLARE_SERIALIZER(AVoiceExperience)


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Experience_VoiceExperience_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAVoiceExperience(); \
	friend struct Z_Construct_UClass_AVoiceExperience_Statics; \
public: \
	DECLARE_CLASS(AVoiceExperience, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Wit"), NO_API) \
	DECLARE_SERIALIZER(AVoiceExperience)


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Experience_VoiceExperience_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVoiceExperience(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVoiceExperience) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoiceExperience); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoiceExperience); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoiceExperience(AVoiceExperience&&); \
	NO_API AVoiceExperience(const AVoiceExperience&); \
public: \
	NO_API virtual ~AVoiceExperience();


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Experience_VoiceExperience_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoiceExperience(AVoiceExperience&&); \
	NO_API AVoiceExperience(const AVoiceExperience&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoiceExperience); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoiceExperience); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AVoiceExperience) \
	NO_API virtual ~AVoiceExperience();


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Experience_VoiceExperience_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Experience_VoiceExperience_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Experience_VoiceExperience_h_23_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Experience_VoiceExperience_h_23_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Experience_VoiceExperience_h_23_ACCESSORS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Experience_VoiceExperience_h_23_INCLASS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Experience_VoiceExperience_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Experience_VoiceExperience_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Experience_VoiceExperience_h_23_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Experience_VoiceExperience_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Experience_VoiceExperience_h_23_ACCESSORS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Experience_VoiceExperience_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Experience_VoiceExperience_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WIT_API UClass* StaticClass<class AVoiceExperience>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Experience_VoiceExperience_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
