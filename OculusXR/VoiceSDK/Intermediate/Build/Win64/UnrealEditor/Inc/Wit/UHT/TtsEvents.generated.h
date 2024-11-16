// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TTS/Events/TtsEvents.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundWave;
struct FTtsConfiguration;
#ifdef WIT_TtsEvents_generated_h
#error "TtsEvents.generated.h already included, missing '#pragma once' in TtsEvents.h"
#endif
#define WIT_TtsEvents_generated_h

#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Events_TtsEvents_h_16_DELEGATE \
WIT_API void FOnSynthesizeResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSynthesizeResponseDelegate, bool bIsSuccessful, USoundWave* SoundWave);


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Events_TtsEvents_h_17_DELEGATE \
WIT_API void FOnSynthesizeErrorDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSynthesizeErrorDelegate, const FString& ErrorMessage, const FString& HumanReadableMessage);


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Events_TtsEvents_h_18_DELEGATE \
WIT_API void FOnSynthesizeRawResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSynthesizeRawResponseDelegate, const FString& ClipId, TArray<uint8> const& BinaryData, FTtsConfiguration const& ClipSettings);


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Events_TtsEvents_h_27_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Events_TtsEvents_h_27_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Events_TtsEvents_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Events_TtsEvents_h_27_ACCESSORS
#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Events_TtsEvents_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTtsEvents(); \
	friend struct Z_Construct_UClass_UTtsEvents_Statics; \
public: \
	DECLARE_CLASS(UTtsEvents, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Wit"), NO_API) \
	DECLARE_SERIALIZER(UTtsEvents)


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Events_TtsEvents_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUTtsEvents(); \
	friend struct Z_Construct_UClass_UTtsEvents_Statics; \
public: \
	DECLARE_CLASS(UTtsEvents, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Wit"), NO_API) \
	DECLARE_SERIALIZER(UTtsEvents)


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Events_TtsEvents_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTtsEvents(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTtsEvents) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTtsEvents); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTtsEvents); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTtsEvents(UTtsEvents&&); \
	NO_API UTtsEvents(const UTtsEvents&); \
public: \
	NO_API virtual ~UTtsEvents();


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Events_TtsEvents_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTtsEvents(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTtsEvents(UTtsEvents&&); \
	NO_API UTtsEvents(const UTtsEvents&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTtsEvents); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTtsEvents); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTtsEvents) \
	NO_API virtual ~UTtsEvents();


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Events_TtsEvents_h_24_PROLOG
#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Events_TtsEvents_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Events_TtsEvents_h_27_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Events_TtsEvents_h_27_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Events_TtsEvents_h_27_ACCESSORS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Events_TtsEvents_h_27_INCLASS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Events_TtsEvents_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Events_TtsEvents_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Events_TtsEvents_h_27_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Events_TtsEvents_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Events_TtsEvents_h_27_ACCESSORS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Events_TtsEvents_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Events_TtsEvents_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WIT_API UClass* StaticClass<class UTtsEvents>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Events_TtsEvents_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
