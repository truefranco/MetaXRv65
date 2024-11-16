// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TTS/Cache/Memory/TtsMemoryCache.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WIT_TtsMemoryCache_generated_h
#error "TtsMemoryCache.generated.h already included, missing '#pragma once' in TtsMemoryCache.h"
#endif
#define WIT_TtsMemoryCache_generated_h

#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCache_h_17_DELEGATE \
WIT_API void FOnClipAddedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnClipAddedDelegate, const FString& ClipId);


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCache_h_18_DELEGATE \
WIT_API void FOnClipRemovedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnClipRemovedDelegate, const FString& ClipId);


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCache_h_26_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCache_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetUsedCacheSizeInKilobytes); \
	DECLARE_FUNCTION(execGetUsedCacheClipCapacity);


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCache_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetUsedCacheSizeInKilobytes); \
	DECLARE_FUNCTION(execGetUsedCacheClipCapacity);


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCache_h_26_ACCESSORS
#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCache_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTtsMemoryCache(); \
	friend struct Z_Construct_UClass_UTtsMemoryCache_Statics; \
public: \
	DECLARE_CLASS(UTtsMemoryCache, UTtsMemoryCacheHandler, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Wit"), NO_API) \
	DECLARE_SERIALIZER(UTtsMemoryCache)


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCache_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUTtsMemoryCache(); \
	friend struct Z_Construct_UClass_UTtsMemoryCache_Statics; \
public: \
	DECLARE_CLASS(UTtsMemoryCache, UTtsMemoryCacheHandler, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Wit"), NO_API) \
	DECLARE_SERIALIZER(UTtsMemoryCache)


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCache_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTtsMemoryCache(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTtsMemoryCache) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTtsMemoryCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTtsMemoryCache); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTtsMemoryCache(UTtsMemoryCache&&); \
	NO_API UTtsMemoryCache(const UTtsMemoryCache&); \
public: \
	NO_API virtual ~UTtsMemoryCache();


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCache_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTtsMemoryCache(UTtsMemoryCache&&); \
	NO_API UTtsMemoryCache(const UTtsMemoryCache&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTtsMemoryCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTtsMemoryCache); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTtsMemoryCache) \
	NO_API virtual ~UTtsMemoryCache();


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCache_h_23_PROLOG
#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCache_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCache_h_26_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCache_h_26_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCache_h_26_ACCESSORS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCache_h_26_INCLASS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCache_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCache_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCache_h_26_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCache_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCache_h_26_ACCESSORS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCache_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCache_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WIT_API UClass* StaticClass<class UTtsMemoryCache>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCache_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
