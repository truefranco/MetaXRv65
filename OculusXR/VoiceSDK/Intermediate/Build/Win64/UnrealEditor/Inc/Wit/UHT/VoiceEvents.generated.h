// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Voice/Events/VoiceEvents.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FWitResponse;
#ifdef WIT_VoiceEvents_generated_h
#error "VoiceEvents.generated.h already included, missing '#pragma once' in VoiceEvents.h"
#endif
#define WIT_VoiceEvents_generated_h

#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Events_VoiceEvents_h_16_DELEGATE \
WIT_API void FOnWitEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnWitEventDelegate);


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Events_VoiceEvents_h_17_DELEGATE \
WIT_API void FOnWitTranscriptionDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnWitTranscriptionDelegate, const FString& Transcription);


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Events_VoiceEvents_h_18_DELEGATE \
WIT_API void FOnWitResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnWitResponseDelegate, bool bIsSuccessful, FWitResponse const& WitResponse);


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Events_VoiceEvents_h_19_DELEGATE \
WIT_API void FOnWitErrorDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnWitErrorDelegate, const FString& ErrorMessage, const FString& HumanReadableMessage);


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Events_VoiceEvents_h_28_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Events_VoiceEvents_h_28_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Events_VoiceEvents_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Events_VoiceEvents_h_28_ACCESSORS
#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Events_VoiceEvents_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoiceEvents(); \
	friend struct Z_Construct_UClass_UVoiceEvents_Statics; \
public: \
	DECLARE_CLASS(UVoiceEvents, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Wit"), NO_API) \
	DECLARE_SERIALIZER(UVoiceEvents)


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Events_VoiceEvents_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUVoiceEvents(); \
	friend struct Z_Construct_UClass_UVoiceEvents_Statics; \
public: \
	DECLARE_CLASS(UVoiceEvents, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Wit"), NO_API) \
	DECLARE_SERIALIZER(UVoiceEvents)


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Events_VoiceEvents_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoiceEvents(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoiceEvents) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoiceEvents); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoiceEvents); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoiceEvents(UVoiceEvents&&); \
	NO_API UVoiceEvents(const UVoiceEvents&); \
public: \
	NO_API virtual ~UVoiceEvents();


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Events_VoiceEvents_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoiceEvents(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoiceEvents(UVoiceEvents&&); \
	NO_API UVoiceEvents(const UVoiceEvents&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoiceEvents); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoiceEvents); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoiceEvents) \
	NO_API virtual ~UVoiceEvents();


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Events_VoiceEvents_h_25_PROLOG
#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Events_VoiceEvents_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Events_VoiceEvents_h_28_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Events_VoiceEvents_h_28_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Events_VoiceEvents_h_28_ACCESSORS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Events_VoiceEvents_h_28_INCLASS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Events_VoiceEvents_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Events_VoiceEvents_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Events_VoiceEvents_h_28_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Events_VoiceEvents_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Events_VoiceEvents_h_28_ACCESSORS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Events_VoiceEvents_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Events_VoiceEvents_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WIT_API UClass* StaticClass<class UVoiceEvents>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Events_VoiceEvents_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
