// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TTS/Cache/Memory/TtsMemoryCache.h"
#include "TTS/Configuration/TtsConfiguration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTtsMemoryCache() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_UTtsMemoryCache();
	WIT_API UClass* Z_Construct_UClass_UTtsMemoryCache_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UTtsMemoryCacheHandler();
	WIT_API UFunction* Z_Construct_UDelegateFunction_Wit_OnClipAddedDelegate__DelegateSignature();
	WIT_API UFunction* Z_Construct_UDelegateFunction_Wit_OnClipRemovedDelegate__DelegateSignature();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FTtsConfiguration();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Wit_OnClipAddedDelegate__DelegateSignature_Statics
	{
		struct _Script_Wit_eventOnClipAddedDelegate_Parms
		{
			FString ClipId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClipId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Wit_OnClipAddedDelegate__DelegateSignature_Statics::NewProp_ClipId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Wit_OnClipAddedDelegate__DelegateSignature_Statics::NewProp_ClipId = { "ClipId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Wit_eventOnClipAddedDelegate_Parms, ClipId), METADATA_PARAMS(Z_Construct_UDelegateFunction_Wit_OnClipAddedDelegate__DelegateSignature_Statics::NewProp_ClipId_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnClipAddedDelegate__DelegateSignature_Statics::NewProp_ClipId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Wit_OnClipAddedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Wit_OnClipAddedDelegate__DelegateSignature_Statics::NewProp_ClipId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Wit_OnClipAddedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TTS/Cache/Memory/TtsMemoryCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Wit_OnClipAddedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Wit, nullptr, "OnClipAddedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Wit_OnClipAddedDelegate__DelegateSignature_Statics::_Script_Wit_eventOnClipAddedDelegate_Parms), Z_Construct_UDelegateFunction_Wit_OnClipAddedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnClipAddedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Wit_OnClipAddedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnClipAddedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Wit_OnClipAddedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Wit_OnClipAddedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnClipAddedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnClipAddedDelegate, const FString& ClipId)
{
	struct _Script_Wit_eventOnClipAddedDelegate_Parms
	{
		FString ClipId;
	};
	_Script_Wit_eventOnClipAddedDelegate_Parms Parms;
	Parms.ClipId=ClipId;
	OnClipAddedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Wit_OnClipRemovedDelegate__DelegateSignature_Statics
	{
		struct _Script_Wit_eventOnClipRemovedDelegate_Parms
		{
			FString ClipId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClipId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Wit_OnClipRemovedDelegate__DelegateSignature_Statics::NewProp_ClipId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Wit_OnClipRemovedDelegate__DelegateSignature_Statics::NewProp_ClipId = { "ClipId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Wit_eventOnClipRemovedDelegate_Parms, ClipId), METADATA_PARAMS(Z_Construct_UDelegateFunction_Wit_OnClipRemovedDelegate__DelegateSignature_Statics::NewProp_ClipId_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnClipRemovedDelegate__DelegateSignature_Statics::NewProp_ClipId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Wit_OnClipRemovedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Wit_OnClipRemovedDelegate__DelegateSignature_Statics::NewProp_ClipId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Wit_OnClipRemovedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TTS/Cache/Memory/TtsMemoryCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Wit_OnClipRemovedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Wit, nullptr, "OnClipRemovedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Wit_OnClipRemovedDelegate__DelegateSignature_Statics::_Script_Wit_eventOnClipRemovedDelegate_Parms), Z_Construct_UDelegateFunction_Wit_OnClipRemovedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnClipRemovedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Wit_OnClipRemovedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnClipRemovedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Wit_OnClipRemovedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Wit_OnClipRemovedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnClipRemovedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnClipRemovedDelegate, const FString& ClipId)
{
	struct _Script_Wit_eventOnClipRemovedDelegate_Parms
	{
		FString ClipId;
	};
	_Script_Wit_eventOnClipRemovedDelegate_Parms Parms;
	Parms.ClipId=ClipId;
	OnClipRemovedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UTtsMemoryCache::execGetUsedCacheSizeInKilobytes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetUsedCacheSizeInKilobytes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTtsMemoryCache::execGetUsedCacheClipCapacity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetUsedCacheClipCapacity();
		P_NATIVE_END;
	}
	void UTtsMemoryCache::StaticRegisterNativesUTtsMemoryCache()
	{
		UClass* Class = UTtsMemoryCache::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUsedCacheClipCapacity", &UTtsMemoryCache::execGetUsedCacheClipCapacity },
			{ "GetUsedCacheSizeInKilobytes", &UTtsMemoryCache::execGetUsedCacheSizeInKilobytes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTtsMemoryCache_GetUsedCacheClipCapacity_Statics
	{
		struct TtsMemoryCache_eventGetUsedCacheClipCapacity_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTtsMemoryCache_GetUsedCacheClipCapacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TtsMemoryCache_eventGetUsedCacheClipCapacity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTtsMemoryCache_GetUsedCacheClipCapacity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTtsMemoryCache_GetUsedCacheClipCapacity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTtsMemoryCache_GetUsedCacheClipCapacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTS" },
		{ "Comment", "/**\n\x09 * Gets number of clips in cache\n\x09 */" },
		{ "ModuleRelativePath", "Public/TTS/Cache/Memory/TtsMemoryCache.h" },
		{ "ToolTip", "Gets number of clips in cache" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTtsMemoryCache_GetUsedCacheClipCapacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTtsMemoryCache, nullptr, "GetUsedCacheClipCapacity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTtsMemoryCache_GetUsedCacheClipCapacity_Statics::TtsMemoryCache_eventGetUsedCacheClipCapacity_Parms), Z_Construct_UFunction_UTtsMemoryCache_GetUsedCacheClipCapacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTtsMemoryCache_GetUsedCacheClipCapacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTtsMemoryCache_GetUsedCacheClipCapacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTtsMemoryCache_GetUsedCacheClipCapacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTtsMemoryCache_GetUsedCacheClipCapacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTtsMemoryCache_GetUsedCacheClipCapacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTtsMemoryCache_GetUsedCacheSizeInKilobytes_Statics
	{
		struct TtsMemoryCache_eventGetUsedCacheSizeInKilobytes_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTtsMemoryCache_GetUsedCacheSizeInKilobytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TtsMemoryCache_eventGetUsedCacheSizeInKilobytes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTtsMemoryCache_GetUsedCacheSizeInKilobytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTtsMemoryCache_GetUsedCacheSizeInKilobytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTtsMemoryCache_GetUsedCacheSizeInKilobytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTS" },
		{ "Comment", "/**\n\x09 * Gets the amount of memory currently being used by the cache\n\x09 */" },
		{ "ModuleRelativePath", "Public/TTS/Cache/Memory/TtsMemoryCache.h" },
		{ "ToolTip", "Gets the amount of memory currently being used by the cache" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTtsMemoryCache_GetUsedCacheSizeInKilobytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTtsMemoryCache, nullptr, "GetUsedCacheSizeInKilobytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTtsMemoryCache_GetUsedCacheSizeInKilobytes_Statics::TtsMemoryCache_eventGetUsedCacheSizeInKilobytes_Parms), Z_Construct_UFunction_UTtsMemoryCache_GetUsedCacheSizeInKilobytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTtsMemoryCache_GetUsedCacheSizeInKilobytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTtsMemoryCache_GetUsedCacheSizeInKilobytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTtsMemoryCache_GetUsedCacheSizeInKilobytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTtsMemoryCache_GetUsedCacheSizeInKilobytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTtsMemoryCache_GetUsedCacheSizeInKilobytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTtsMemoryCache);
	UClass* Z_Construct_UClass_UTtsMemoryCache_NoRegister()
	{
		return UTtsMemoryCache::StaticClass();
	}
	struct Z_Construct_UClass_UTtsMemoryCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsClipCapacityEnabled_MetaData[];
#endif
		static void NewProp_bIsClipCapacityEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsClipCapacityEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipCapacity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClipCapacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMemoryCapacityEnabled_MetaData[];
#endif
		static void NewProp_bIsMemoryCapacityEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMemoryCapacityEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemoryCapacityInKilobytes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MemoryCapacityInKilobytes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnClipAdded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClipAdded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnClipRemoved_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClipRemoved;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClipIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClipIds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Clips_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Clips_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Clips;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClipSettingsArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipSettingsArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClipSettingsArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTtsMemoryCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTtsMemoryCacheHandler,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTtsMemoryCache_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTtsMemoryCache_GetUsedCacheClipCapacity, "GetUsedCacheClipCapacity" }, // 415266582
		{ &Z_Construct_UFunction_UTtsMemoryCache_GetUsedCacheSizeInKilobytes, "GetUsedCacheSizeInKilobytes" }, // 1407812415
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTtsMemoryCache_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Meta" },
		{ "Comment", "/**\n * Implements a simple memory cache that has capacity controls and LRU ejection policy\n */" },
		{ "IncludePath", "TTS/Cache/Memory/TtsMemoryCache.h" },
		{ "ModuleRelativePath", "Public/TTS/Cache/Memory/TtsMemoryCache.h" },
		{ "ToolTip", "Implements a simple memory cache that has capacity controls and LRU ejection policy" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_bIsClipCapacityEnabled_MetaData[] = {
		{ "Category", "Capacity" },
		{ "Comment", "/**\n\x09 * Is the clip capacity in use or not?\n\x09 */" },
		{ "ModuleRelativePath", "Public/TTS/Cache/Memory/TtsMemoryCache.h" },
		{ "ToolTip", "Is the clip capacity in use or not?" },
	};
#endif
	void Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_bIsClipCapacityEnabled_SetBit(void* Obj)
	{
		((UTtsMemoryCache*)Obj)->bIsClipCapacityEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_bIsClipCapacityEnabled = { "bIsClipCapacityEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTtsMemoryCache), &Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_bIsClipCapacityEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_bIsClipCapacityEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_bIsClipCapacityEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_ClipCapacity_MetaData[] = {
		{ "Category", "Capacity" },
		{ "Comment", "/**\n\x09 * Maximum number of clips that can be stored at any one time in the cache\n\x09 */" },
		{ "ModuleRelativePath", "Public/TTS/Cache/Memory/TtsMemoryCache.h" },
		{ "ToolTip", "Maximum number of clips that can be stored at any one time in the cache" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_ClipCapacity = { "ClipCapacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTtsMemoryCache, ClipCapacity), METADATA_PARAMS(Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_ClipCapacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_ClipCapacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_bIsMemoryCapacityEnabled_MetaData[] = {
		{ "Category", "Capacity" },
		{ "Comment", "/**\n\x09 * Is the memory capacity in use or not?\n\x09 */" },
		{ "ModuleRelativePath", "Public/TTS/Cache/Memory/TtsMemoryCache.h" },
		{ "ToolTip", "Is the memory capacity in use or not?" },
	};
#endif
	void Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_bIsMemoryCapacityEnabled_SetBit(void* Obj)
	{
		((UTtsMemoryCache*)Obj)->bIsMemoryCapacityEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_bIsMemoryCapacityEnabled = { "bIsMemoryCapacityEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTtsMemoryCache), &Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_bIsMemoryCapacityEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_bIsMemoryCapacityEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_bIsMemoryCapacityEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_MemoryCapacityInKilobytes_MetaData[] = {
		{ "Category", "Capacity" },
		{ "Comment", "/**\n\x09 * Maximum amount of clip memory that can be used at any one time by the cache\n\x09 */" },
		{ "ModuleRelativePath", "Public/TTS/Cache/Memory/TtsMemoryCache.h" },
		{ "ToolTip", "Maximum amount of clip memory that can be used at any one time by the cache" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_MemoryCapacityInKilobytes = { "MemoryCapacityInKilobytes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTtsMemoryCache, MemoryCapacityInKilobytes), METADATA_PARAMS(Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_MemoryCapacityInKilobytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_MemoryCapacityInKilobytes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_OnClipAdded_MetaData[] = {
		{ "Comment", "/**\n\x09 * Callback to call when a clip is added to the memory cache\n\x09 */" },
		{ "ModuleRelativePath", "Public/TTS/Cache/Memory/TtsMemoryCache.h" },
		{ "ToolTip", "Callback to call when a clip is added to the memory cache" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_OnClipAdded = { "OnClipAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTtsMemoryCache, OnClipAdded), Z_Construct_UDelegateFunction_Wit_OnClipAddedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_OnClipAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_OnClipAdded_MetaData)) }; // 50810043
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_OnClipRemoved_MetaData[] = {
		{ "Comment", "/**\n\x09 * Callback to call when a clip is removed from the memory cache\n\x09 */" },
		{ "ModuleRelativePath", "Public/TTS/Cache/Memory/TtsMemoryCache.h" },
		{ "ToolTip", "Callback to call when a clip is removed from the memory cache" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_OnClipRemoved = { "OnClipRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTtsMemoryCache, OnClipRemoved), Z_Construct_UDelegateFunction_Wit_OnClipRemovedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_OnClipRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_OnClipRemoved_MetaData)) }; // 845458788
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_ClipIds_Inner = { "ClipIds", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_ClipIds_MetaData[] = {
		{ "Category", "Contents" },
		{ "Comment", "/**\n\x09 * All the clip ids currently stored\n\x09 */" },
		{ "ModuleRelativePath", "Public/TTS/Cache/Memory/TtsMemoryCache.h" },
		{ "ToolTip", "All the clip ids currently stored" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_ClipIds = { "ClipIds", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTtsMemoryCache, ClipIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_ClipIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_ClipIds_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_Clips_Inner = { "Clips", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_Clips_MetaData[] = {
		{ "Category", "Contents" },
		{ "Comment", "/**\n\x09 * All the wav clips currently stored\n\x09 */" },
		{ "ModuleRelativePath", "Public/TTS/Cache/Memory/TtsMemoryCache.h" },
		{ "ToolTip", "All the wav clips currently stored" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_Clips = { "Clips", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTtsMemoryCache, Clips), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_Clips_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_Clips_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_ClipSettingsArray_Inner = { "ClipSettingsArray", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTtsConfiguration, METADATA_PARAMS(nullptr, 0) }; // 2639599679
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_ClipSettingsArray_MetaData[] = {
		{ "Category", "Contents" },
		{ "Comment", "/**\n\x09 * All the generation settings currently stored\n\x09 */" },
		{ "ModuleRelativePath", "Public/TTS/Cache/Memory/TtsMemoryCache.h" },
		{ "ToolTip", "All the generation settings currently stored" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_ClipSettingsArray = { "ClipSettingsArray", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTtsMemoryCache, ClipSettingsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_ClipSettingsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_ClipSettingsArray_MetaData)) }; // 2639599679
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTtsMemoryCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_bIsClipCapacityEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_ClipCapacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_bIsMemoryCapacityEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_MemoryCapacityInKilobytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_OnClipAdded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_OnClipRemoved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_ClipIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_ClipIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_Clips_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_Clips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_ClipSettingsArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTtsMemoryCache_Statics::NewProp_ClipSettingsArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTtsMemoryCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTtsMemoryCache>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTtsMemoryCache_Statics::ClassParams = {
		&UTtsMemoryCache::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTtsMemoryCache_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTtsMemoryCache_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTtsMemoryCache_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTtsMemoryCache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTtsMemoryCache()
	{
		if (!Z_Registration_Info_UClass_UTtsMemoryCache.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTtsMemoryCache.OuterSingleton, Z_Construct_UClass_UTtsMemoryCache_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTtsMemoryCache.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<UTtsMemoryCache>()
	{
		return UTtsMemoryCache::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTtsMemoryCache);
	UTtsMemoryCache::~UTtsMemoryCache() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCache_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCache_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTtsMemoryCache, UTtsMemoryCache::StaticClass, TEXT("UTtsMemoryCache"), &Z_Registration_Info_UClass_UTtsMemoryCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTtsMemoryCache), 3258493513U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCache_h_3696004872(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCache_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCache_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
