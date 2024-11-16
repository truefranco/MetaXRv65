// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TTS/Cache/Storage/TtsStorageCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTtsStorageCache() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_UTtsStorageCache();
	WIT_API UClass* Z_Construct_UClass_UTtsStorageCache_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UTtsStorageCacheHandler();
	WIT_API UEnum* Z_Construct_UEnum_Wit_ETtsStorageCacheLocation();
// End Cross Module References
	DEFINE_FUNCTION(UTtsStorageCache::execRemoveAllClips)
	{
		P_GET_ENUM(ETtsStorageCacheLocation,Z_Param_CacheLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllClips(ETtsStorageCacheLocation(Z_Param_CacheLocation));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTtsStorageCache::execRemoveClip)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ClipId);
		P_GET_ENUM(ETtsStorageCacheLocation,Z_Param_CacheLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveClip(Z_Param_ClipId,ETtsStorageCacheLocation(Z_Param_CacheLocation));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTtsStorageCache::execRequestClip)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ClipId);
		P_GET_ENUM(ETtsStorageCacheLocation,Z_Param_CacheLocation);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_ClipData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestClip(Z_Param_ClipId,ETtsStorageCacheLocation(Z_Param_CacheLocation),Z_Param_Out_ClipData);
		P_NATIVE_END;
	}
	void UTtsStorageCache::StaticRegisterNativesUTtsStorageCache()
	{
		UClass* Class = UTtsStorageCache::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoveAllClips", &UTtsStorageCache::execRemoveAllClips },
			{ "RemoveClip", &UTtsStorageCache::execRemoveClip },
			{ "RequestClip", &UTtsStorageCache::execRequestClip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTtsStorageCache_RemoveAllClips_Statics
	{
		struct TtsStorageCache_eventRemoveAllClips_Parms
		{
			ETtsStorageCacheLocation CacheLocation;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CacheLocation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheLocation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CacheLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTtsStorageCache_RemoveAllClips_Statics::NewProp_CacheLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTtsStorageCache_RemoveAllClips_Statics::NewProp_CacheLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTtsStorageCache_RemoveAllClips_Statics::NewProp_CacheLocation = { "CacheLocation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TtsStorageCache_eventRemoveAllClips_Parms, CacheLocation), Z_Construct_UEnum_Wit_ETtsStorageCacheLocation, METADATA_PARAMS(Z_Construct_UFunction_UTtsStorageCache_RemoveAllClips_Statics::NewProp_CacheLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTtsStorageCache_RemoveAllClips_Statics::NewProp_CacheLocation_MetaData)) }; // 1614051526
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTtsStorageCache_RemoveAllClips_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTtsStorageCache_RemoveAllClips_Statics::NewProp_CacheLocation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTtsStorageCache_RemoveAllClips_Statics::NewProp_CacheLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTtsStorageCache_RemoveAllClips_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTS" },
		{ "Comment", "/**\n\x09 * Remove all clips from the cache\n\x09 *\n\x09 * @param CacheLocation [in] the cache location where the clip will be\n\x09 */" },
		{ "ModuleRelativePath", "Public/TTS/Cache/Storage/TtsStorageCache.h" },
		{ "ToolTip", "Remove all clips from the cache\n\n@param CacheLocation [in] the cache location where the clip will be" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTtsStorageCache_RemoveAllClips_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTtsStorageCache, nullptr, "RemoveAllClips", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTtsStorageCache_RemoveAllClips_Statics::TtsStorageCache_eventRemoveAllClips_Parms), Z_Construct_UFunction_UTtsStorageCache_RemoveAllClips_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTtsStorageCache_RemoveAllClips_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTtsStorageCache_RemoveAllClips_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTtsStorageCache_RemoveAllClips_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTtsStorageCache_RemoveAllClips()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTtsStorageCache_RemoveAllClips_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTtsStorageCache_RemoveClip_Statics
	{
		struct TtsStorageCache_eventRemoveClip_Parms
		{
			FString ClipId;
			ETtsStorageCacheLocation CacheLocation;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClipId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CacheLocation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheLocation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CacheLocation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTtsStorageCache_RemoveClip_Statics::NewProp_ClipId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTtsStorageCache_RemoveClip_Statics::NewProp_ClipId = { "ClipId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TtsStorageCache_eventRemoveClip_Parms, ClipId), METADATA_PARAMS(Z_Construct_UFunction_UTtsStorageCache_RemoveClip_Statics::NewProp_ClipId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTtsStorageCache_RemoveClip_Statics::NewProp_ClipId_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTtsStorageCache_RemoveClip_Statics::NewProp_CacheLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTtsStorageCache_RemoveClip_Statics::NewProp_CacheLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTtsStorageCache_RemoveClip_Statics::NewProp_CacheLocation = { "CacheLocation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TtsStorageCache_eventRemoveClip_Parms, CacheLocation), Z_Construct_UEnum_Wit_ETtsStorageCacheLocation, METADATA_PARAMS(Z_Construct_UFunction_UTtsStorageCache_RemoveClip_Statics::NewProp_CacheLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTtsStorageCache_RemoveClip_Statics::NewProp_CacheLocation_MetaData)) }; // 1614051526
	void Z_Construct_UFunction_UTtsStorageCache_RemoveClip_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TtsStorageCache_eventRemoveClip_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTtsStorageCache_RemoveClip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TtsStorageCache_eventRemoveClip_Parms), &Z_Construct_UFunction_UTtsStorageCache_RemoveClip_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTtsStorageCache_RemoveClip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTtsStorageCache_RemoveClip_Statics::NewProp_ClipId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTtsStorageCache_RemoveClip_Statics::NewProp_CacheLocation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTtsStorageCache_RemoveClip_Statics::NewProp_CacheLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTtsStorageCache_RemoveClip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTtsStorageCache_RemoveClip_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTS" },
		{ "Comment", "/**\n\x09 * Remove a clip from the cache\n\x09 *\n\x09 * @param ClipId [in] the clip id\n\x09 * @param CacheLocation [in] the cache location where the clip will be\n\x09 *\n\x09 * @return true if the clip was removed\n\x09 */" },
		{ "ModuleRelativePath", "Public/TTS/Cache/Storage/TtsStorageCache.h" },
		{ "ToolTip", "Remove a clip from the cache\n\n@param ClipId [in] the clip id\n@param CacheLocation [in] the cache location where the clip will be\n\n@return true if the clip was removed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTtsStorageCache_RemoveClip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTtsStorageCache, nullptr, "RemoveClip", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTtsStorageCache_RemoveClip_Statics::TtsStorageCache_eventRemoveClip_Parms), Z_Construct_UFunction_UTtsStorageCache_RemoveClip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTtsStorageCache_RemoveClip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTtsStorageCache_RemoveClip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTtsStorageCache_RemoveClip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTtsStorageCache_RemoveClip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTtsStorageCache_RemoveClip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTtsStorageCache_RequestClip_Statics
	{
		struct TtsStorageCache_eventRequestClip_Parms
		{
			FString ClipId;
			ETtsStorageCacheLocation CacheLocation;
			TArray<uint8> ClipData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClipId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CacheLocation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheLocation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CacheLocation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClipData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClipData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTtsStorageCache_RequestClip_Statics::NewProp_ClipId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTtsStorageCache_RequestClip_Statics::NewProp_ClipId = { "ClipId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TtsStorageCache_eventRequestClip_Parms, ClipId), METADATA_PARAMS(Z_Construct_UFunction_UTtsStorageCache_RequestClip_Statics::NewProp_ClipId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTtsStorageCache_RequestClip_Statics::NewProp_ClipId_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTtsStorageCache_RequestClip_Statics::NewProp_CacheLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTtsStorageCache_RequestClip_Statics::NewProp_CacheLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTtsStorageCache_RequestClip_Statics::NewProp_CacheLocation = { "CacheLocation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TtsStorageCache_eventRequestClip_Parms, CacheLocation), Z_Construct_UEnum_Wit_ETtsStorageCacheLocation, METADATA_PARAMS(Z_Construct_UFunction_UTtsStorageCache_RequestClip_Statics::NewProp_CacheLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTtsStorageCache_RequestClip_Statics::NewProp_CacheLocation_MetaData)) }; // 1614051526
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTtsStorageCache_RequestClip_Statics::NewProp_ClipData_Inner = { "ClipData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTtsStorageCache_RequestClip_Statics::NewProp_ClipData = { "ClipData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TtsStorageCache_eventRequestClip_Parms, ClipData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTtsStorageCache_RequestClip_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TtsStorageCache_eventRequestClip_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTtsStorageCache_RequestClip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TtsStorageCache_eventRequestClip_Parms), &Z_Construct_UFunction_UTtsStorageCache_RequestClip_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTtsStorageCache_RequestClip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTtsStorageCache_RequestClip_Statics::NewProp_ClipId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTtsStorageCache_RequestClip_Statics::NewProp_CacheLocation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTtsStorageCache_RequestClip_Statics::NewProp_CacheLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTtsStorageCache_RequestClip_Statics::NewProp_ClipData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTtsStorageCache_RequestClip_Statics::NewProp_ClipData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTtsStorageCache_RequestClip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTtsStorageCache_RequestClip_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTS" },
		{ "Comment", "/**\n\x09 * Request a clip from the cache\n\x09 *\n\x09 * @param ClipId [in] the clip id\n\x09 * @param CacheLocation [in] the cache location where the clip will be \n\x09 * @param ClipData [out] the binary data that represents the clip\n\x09 *\n\x09 * @return true if the clip is available in the cache\n\x09 */" },
		{ "ModuleRelativePath", "Public/TTS/Cache/Storage/TtsStorageCache.h" },
		{ "ToolTip", "Request a clip from the cache\n\n@param ClipId [in] the clip id\n@param CacheLocation [in] the cache location where the clip will be\n@param ClipData [out] the binary data that represents the clip\n\n@return true if the clip is available in the cache" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTtsStorageCache_RequestClip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTtsStorageCache, nullptr, "RequestClip", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTtsStorageCache_RequestClip_Statics::TtsStorageCache_eventRequestClip_Parms), Z_Construct_UFunction_UTtsStorageCache_RequestClip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTtsStorageCache_RequestClip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTtsStorageCache_RequestClip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTtsStorageCache_RequestClip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTtsStorageCache_RequestClip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTtsStorageCache_RequestClip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTtsStorageCache);
	UClass* Z_Construct_UClass_UTtsStorageCache_NoRegister()
	{
		return UTtsStorageCache::StaticClass();
	}
	struct Z_Construct_UClass_UTtsStorageCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CacheDirectory;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultCacheLocation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCacheLocation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultCacheLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTtsStorageCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTtsStorageCacheHandler,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTtsStorageCache_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTtsStorageCache_RemoveAllClips, "RemoveAllClips" }, // 3741338637
		{ &Z_Construct_UFunction_UTtsStorageCache_RemoveClip, "RemoveClip" }, // 2427629173
		{ &Z_Construct_UFunction_UTtsStorageCache_RequestClip, "RequestClip" }, // 3014705196
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTtsStorageCache_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Meta" },
		{ "Comment", "/**\n * Implements a simple storage cache backed on to disk\n */" },
		{ "IncludePath", "TTS/Cache/Storage/TtsStorageCache.h" },
		{ "ModuleRelativePath", "Public/TTS/Cache/Storage/TtsStorageCache.h" },
		{ "ToolTip", "Implements a simple storage cache backed on to disk" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTtsStorageCache_Statics::NewProp_CacheDirectory_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/**\n\x09 * Cache directory relative to the base cache path\n\x09 */" },
		{ "ModuleRelativePath", "Public/TTS/Cache/Storage/TtsStorageCache.h" },
		{ "ToolTip", "Cache directory relative to the base cache path" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTtsStorageCache_Statics::NewProp_CacheDirectory = { "CacheDirectory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTtsStorageCache, CacheDirectory), METADATA_PARAMS(Z_Construct_UClass_UTtsStorageCache_Statics::NewProp_CacheDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTtsStorageCache_Statics::NewProp_CacheDirectory_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTtsStorageCache_Statics::NewProp_DefaultCacheLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTtsStorageCache_Statics::NewProp_DefaultCacheLocation_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/**\n\x09 * The default location to use for cached clips. Can be overriden on a per clip basis\n\x09 */" },
		{ "ModuleRelativePath", "Public/TTS/Cache/Storage/TtsStorageCache.h" },
		{ "ToolTip", "The default location to use for cached clips. Can be overriden on a per clip basis" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTtsStorageCache_Statics::NewProp_DefaultCacheLocation = { "DefaultCacheLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTtsStorageCache, DefaultCacheLocation), Z_Construct_UEnum_Wit_ETtsStorageCacheLocation, METADATA_PARAMS(Z_Construct_UClass_UTtsStorageCache_Statics::NewProp_DefaultCacheLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTtsStorageCache_Statics::NewProp_DefaultCacheLocation_MetaData)) }; // 1614051526
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTtsStorageCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTtsStorageCache_Statics::NewProp_CacheDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTtsStorageCache_Statics::NewProp_DefaultCacheLocation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTtsStorageCache_Statics::NewProp_DefaultCacheLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTtsStorageCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTtsStorageCache>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTtsStorageCache_Statics::ClassParams = {
		&UTtsStorageCache::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTtsStorageCache_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTtsStorageCache_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTtsStorageCache_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTtsStorageCache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTtsStorageCache()
	{
		if (!Z_Registration_Info_UClass_UTtsStorageCache.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTtsStorageCache.OuterSingleton, Z_Construct_UClass_UTtsStorageCache_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTtsStorageCache.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<UTtsStorageCache>()
	{
		return UTtsStorageCache::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTtsStorageCache);
	UTtsStorageCache::~UTtsStorageCache() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Storage_TtsStorageCache_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Storage_TtsStorageCache_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTtsStorageCache, UTtsStorageCache::StaticClass, TEXT("UTtsStorageCache"), &Z_Registration_Info_UClass_UTtsStorageCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTtsStorageCache), 2552798630U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Storage_TtsStorageCache_h_2627737246(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Storage_TtsStorageCache_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Storage_TtsStorageCache_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
