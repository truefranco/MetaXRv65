// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Voice/Matcher/VoiceIntentWithEntitiesMatcher.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FWitEntity;
struct FWitIntent;
#ifdef WIT_VoiceIntentWithEntitiesMatcher_generated_h
#error "VoiceIntentWithEntitiesMatcher.generated.h already included, missing '#pragma once' in VoiceIntentWithEntitiesMatcher.h"
#endif
#define WIT_VoiceIntentWithEntitiesMatcher_generated_h

#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntitiesMatcher_h_16_DELEGATE \
WIT_API void FOnEntitiesMatchedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEntitiesMatchedDelegate, bool bIsSuccessful, FWitIntent Intent, const TArray<FWitEntity>& Entities, const TArray<FString>& Values, bool bIsFinal);


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntitiesMatcher_h_25_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntitiesMatcher_h_25_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntitiesMatcher_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntitiesMatcher_h_25_ACCESSORS
#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntitiesMatcher_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoiceIntentWithEntitiesMatcher(); \
	friend struct Z_Construct_UClass_UVoiceIntentWithEntitiesMatcher_Statics; \
public: \
	DECLARE_CLASS(UVoiceIntentWithEntitiesMatcher, UVoiceResponseMatcher, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Wit"), NO_API) \
	DECLARE_SERIALIZER(UVoiceIntentWithEntitiesMatcher)


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntitiesMatcher_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUVoiceIntentWithEntitiesMatcher(); \
	friend struct Z_Construct_UClass_UVoiceIntentWithEntitiesMatcher_Statics; \
public: \
	DECLARE_CLASS(UVoiceIntentWithEntitiesMatcher, UVoiceResponseMatcher, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Wit"), NO_API) \
	DECLARE_SERIALIZER(UVoiceIntentWithEntitiesMatcher)


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntitiesMatcher_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoiceIntentWithEntitiesMatcher(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoiceIntentWithEntitiesMatcher) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoiceIntentWithEntitiesMatcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoiceIntentWithEntitiesMatcher); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoiceIntentWithEntitiesMatcher(UVoiceIntentWithEntitiesMatcher&&); \
	NO_API UVoiceIntentWithEntitiesMatcher(const UVoiceIntentWithEntitiesMatcher&); \
public: \
	NO_API virtual ~UVoiceIntentWithEntitiesMatcher();


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntitiesMatcher_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoiceIntentWithEntitiesMatcher(UVoiceIntentWithEntitiesMatcher&&); \
	NO_API UVoiceIntentWithEntitiesMatcher(const UVoiceIntentWithEntitiesMatcher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoiceIntentWithEntitiesMatcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoiceIntentWithEntitiesMatcher); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoiceIntentWithEntitiesMatcher) \
	NO_API virtual ~UVoiceIntentWithEntitiesMatcher();


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntitiesMatcher_h_22_PROLOG
#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntitiesMatcher_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntitiesMatcher_h_25_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntitiesMatcher_h_25_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntitiesMatcher_h_25_ACCESSORS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntitiesMatcher_h_25_INCLASS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntitiesMatcher_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntitiesMatcher_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntitiesMatcher_h_25_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntitiesMatcher_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntitiesMatcher_h_25_ACCESSORS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntitiesMatcher_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntitiesMatcher_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WIT_API UClass* StaticClass<class UVoiceIntentWithEntitiesMatcher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntitiesMatcher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
