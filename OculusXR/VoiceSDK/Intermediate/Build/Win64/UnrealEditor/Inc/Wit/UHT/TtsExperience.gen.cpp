// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TTS/Experience/TtsExperience.h"
#include "TTS/Configuration/TtsConfiguration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTtsExperience() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_ATtsExperience();
	WIT_API UClass* Z_Construct_UClass_ATtsExperience_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UTtsEvents_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UTtsMemoryCacheHandler_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UTtsService_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UTtsStorageCacheHandler_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UTtsVoicePresetAsset_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UWitAppConfigurationAsset_NoRegister();
	WIT_API UEnum* Z_Construct_UEnum_Wit_ETtsStorageCacheLocation();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FTtsConfiguration();
// End Cross Module References
	DEFINE_FUNCTION(ATtsExperience::execDeleteAllClips)
	{
		P_GET_ENUM(ETtsStorageCacheLocation,Z_Param_CacheLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteAllClips(ETtsStorageCacheLocation(Z_Param_CacheLocation));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATtsExperience::execDeleteClip)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ClipId);
		P_GET_ENUM(ETtsStorageCacheLocation,Z_Param_CacheLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteClip(Z_Param_ClipId,ETtsStorageCacheLocation(Z_Param_CacheLocation));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATtsExperience::execUnloadAllClips)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnloadAllClips();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATtsExperience::execUnloadClip)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ClipId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnloadClip(Z_Param_ClipId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATtsExperience::execFetchAvailableVoices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FetchAvailableVoices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATtsExperience::execConvertTextToSpeechWithSettings)
	{
		P_GET_STRUCT_REF(FTtsConfiguration,Z_Param_Out_ClipSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConvertTextToSpeechWithSettings(Z_Param_Out_ClipSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATtsExperience::execConvertTextToSpeech)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TextToConvert);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConvertTextToSpeech(Z_Param_TextToConvert);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATtsExperience::execIsRequestInProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRequestInProgress();
		P_NATIVE_END;
	}
	void ATtsExperience::StaticRegisterNativesATtsExperience()
	{
		UClass* Class = ATtsExperience::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertTextToSpeech", &ATtsExperience::execConvertTextToSpeech },
			{ "ConvertTextToSpeechWithSettings", &ATtsExperience::execConvertTextToSpeechWithSettings },
			{ "DeleteAllClips", &ATtsExperience::execDeleteAllClips },
			{ "DeleteClip", &ATtsExperience::execDeleteClip },
			{ "FetchAvailableVoices", &ATtsExperience::execFetchAvailableVoices },
			{ "IsRequestInProgress", &ATtsExperience::execIsRequestInProgress },
			{ "UnloadAllClips", &ATtsExperience::execUnloadAllClips },
			{ "UnloadClip", &ATtsExperience::execUnloadClip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeech_Statics
	{
		struct TtsExperience_eventConvertTextToSpeech_Parms
		{
			FString TextToConvert;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextToConvert_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TextToConvert;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeech_Statics::NewProp_TextToConvert_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeech_Statics::NewProp_TextToConvert = { "TextToConvert", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TtsExperience_eventConvertTextToSpeech_Parms, TextToConvert), METADATA_PARAMS(Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeech_Statics::NewProp_TextToConvert_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeech_Statics::NewProp_TextToConvert_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeech_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeech_Statics::NewProp_TextToConvert,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeech_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTS" },
		{ "ModuleRelativePath", "Public/TTS/Experience/TtsExperience.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeech_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATtsExperience, nullptr, "ConvertTextToSpeech", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeech_Statics::TtsExperience_eventConvertTextToSpeech_Parms), Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeech_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeech_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeech_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeech_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeech()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeech_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeechWithSettings_Statics
	{
		struct TtsExperience_eventConvertTextToSpeechWithSettings_Parms
		{
			FTtsConfiguration ClipSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClipSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeechWithSettings_Statics::NewProp_ClipSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeechWithSettings_Statics::NewProp_ClipSettings = { "ClipSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TtsExperience_eventConvertTextToSpeechWithSettings_Parms, ClipSettings), Z_Construct_UScriptStruct_FTtsConfiguration, METADATA_PARAMS(Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeechWithSettings_Statics::NewProp_ClipSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeechWithSettings_Statics::NewProp_ClipSettings_MetaData)) }; // 2639599679
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeechWithSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeechWithSettings_Statics::NewProp_ClipSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeechWithSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTS" },
		{ "ModuleRelativePath", "Public/TTS/Experience/TtsExperience.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeechWithSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATtsExperience, nullptr, "ConvertTextToSpeechWithSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeechWithSettings_Statics::TtsExperience_eventConvertTextToSpeechWithSettings_Parms), Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeechWithSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeechWithSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeechWithSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeechWithSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeechWithSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeechWithSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATtsExperience_DeleteAllClips_Statics
	{
		struct TtsExperience_eventDeleteAllClips_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATtsExperience_DeleteAllClips_Statics::NewProp_CacheLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATtsExperience_DeleteAllClips_Statics::NewProp_CacheLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATtsExperience_DeleteAllClips_Statics::NewProp_CacheLocation = { "CacheLocation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TtsExperience_eventDeleteAllClips_Parms, CacheLocation), Z_Construct_UEnum_Wit_ETtsStorageCacheLocation, METADATA_PARAMS(Z_Construct_UFunction_ATtsExperience_DeleteAllClips_Statics::NewProp_CacheLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATtsExperience_DeleteAllClips_Statics::NewProp_CacheLocation_MetaData)) }; // 1614051526
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATtsExperience_DeleteAllClips_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATtsExperience_DeleteAllClips_Statics::NewProp_CacheLocation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATtsExperience_DeleteAllClips_Statics::NewProp_CacheLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATtsExperience_DeleteAllClips_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTS" },
		{ "Comment", "/**\n\x09 * Remove all clips from the storage cache\n\x09 *\n\x09 * @param CacheLocation [in] location of the clip\n\x09 */" },
		{ "ModuleRelativePath", "Public/TTS/Experience/TtsExperience.h" },
		{ "ToolTip", "Remove all clips from the storage cache\n\n@param CacheLocation [in] location of the clip" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATtsExperience_DeleteAllClips_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATtsExperience, nullptr, "DeleteAllClips", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATtsExperience_DeleteAllClips_Statics::TtsExperience_eventDeleteAllClips_Parms), Z_Construct_UFunction_ATtsExperience_DeleteAllClips_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATtsExperience_DeleteAllClips_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATtsExperience_DeleteAllClips_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATtsExperience_DeleteAllClips_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATtsExperience_DeleteAllClips()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATtsExperience_DeleteAllClips_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATtsExperience_DeleteClip_Statics
	{
		struct TtsExperience_eventDeleteClip_Parms
		{
			FString ClipId;
			ETtsStorageCacheLocation CacheLocation;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATtsExperience_DeleteClip_Statics::NewProp_ClipId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ATtsExperience_DeleteClip_Statics::NewProp_ClipId = { "ClipId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TtsExperience_eventDeleteClip_Parms, ClipId), METADATA_PARAMS(Z_Construct_UFunction_ATtsExperience_DeleteClip_Statics::NewProp_ClipId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATtsExperience_DeleteClip_Statics::NewProp_ClipId_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATtsExperience_DeleteClip_Statics::NewProp_CacheLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATtsExperience_DeleteClip_Statics::NewProp_CacheLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATtsExperience_DeleteClip_Statics::NewProp_CacheLocation = { "CacheLocation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TtsExperience_eventDeleteClip_Parms, CacheLocation), Z_Construct_UEnum_Wit_ETtsStorageCacheLocation, METADATA_PARAMS(Z_Construct_UFunction_ATtsExperience_DeleteClip_Statics::NewProp_CacheLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATtsExperience_DeleteClip_Statics::NewProp_CacheLocation_MetaData)) }; // 1614051526
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATtsExperience_DeleteClip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATtsExperience_DeleteClip_Statics::NewProp_ClipId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATtsExperience_DeleteClip_Statics::NewProp_CacheLocation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATtsExperience_DeleteClip_Statics::NewProp_CacheLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATtsExperience_DeleteClip_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTS" },
		{ "Comment", "/**\n\x09 * Remove a single clip from the storage cache\n\x09 *\n\x09 * @param ClipId [in] id of the clip to delete\n\x09 * @param CacheLocation [in] location of the clip\n\x09 */" },
		{ "ModuleRelativePath", "Public/TTS/Experience/TtsExperience.h" },
		{ "ToolTip", "Remove a single clip from the storage cache\n\n@param ClipId [in] id of the clip to delete\n@param CacheLocation [in] location of the clip" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATtsExperience_DeleteClip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATtsExperience, nullptr, "DeleteClip", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATtsExperience_DeleteClip_Statics::TtsExperience_eventDeleteClip_Parms), Z_Construct_UFunction_ATtsExperience_DeleteClip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATtsExperience_DeleteClip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATtsExperience_DeleteClip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATtsExperience_DeleteClip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATtsExperience_DeleteClip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATtsExperience_DeleteClip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATtsExperience_FetchAvailableVoices_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATtsExperience_FetchAvailableVoices_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTS" },
		{ "ModuleRelativePath", "Public/TTS/Experience/TtsExperience.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATtsExperience_FetchAvailableVoices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATtsExperience, nullptr, "FetchAvailableVoices", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATtsExperience_FetchAvailableVoices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATtsExperience_FetchAvailableVoices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATtsExperience_FetchAvailableVoices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATtsExperience_FetchAvailableVoices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATtsExperience_IsRequestInProgress_Statics
	{
		struct TtsExperience_eventIsRequestInProgress_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATtsExperience_IsRequestInProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TtsExperience_eventIsRequestInProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATtsExperience_IsRequestInProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TtsExperience_eventIsRequestInProgress_Parms), &Z_Construct_UFunction_ATtsExperience_IsRequestInProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATtsExperience_IsRequestInProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATtsExperience_IsRequestInProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATtsExperience_IsRequestInProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTS" },
		{ "Comment", "/**\n\x09 * ITtsService overrides\n\x09 */" },
		{ "ModuleRelativePath", "Public/TTS/Experience/TtsExperience.h" },
		{ "ToolTip", "ITtsService overrides" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATtsExperience_IsRequestInProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATtsExperience, nullptr, "IsRequestInProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATtsExperience_IsRequestInProgress_Statics::TtsExperience_eventIsRequestInProgress_Parms), Z_Construct_UFunction_ATtsExperience_IsRequestInProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATtsExperience_IsRequestInProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATtsExperience_IsRequestInProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATtsExperience_IsRequestInProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATtsExperience_IsRequestInProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATtsExperience_IsRequestInProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATtsExperience_UnloadAllClips_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATtsExperience_UnloadAllClips_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTS" },
		{ "Comment", "/**\n\x09 * Unload all clips from the memory cache\n\x09 */" },
		{ "ModuleRelativePath", "Public/TTS/Experience/TtsExperience.h" },
		{ "ToolTip", "Unload all clips from the memory cache" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATtsExperience_UnloadAllClips_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATtsExperience, nullptr, "UnloadAllClips", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATtsExperience_UnloadAllClips_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATtsExperience_UnloadAllClips_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATtsExperience_UnloadAllClips()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATtsExperience_UnloadAllClips_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATtsExperience_UnloadClip_Statics
	{
		struct TtsExperience_eventUnloadClip_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATtsExperience_UnloadClip_Statics::NewProp_ClipId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ATtsExperience_UnloadClip_Statics::NewProp_ClipId = { "ClipId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TtsExperience_eventUnloadClip_Parms, ClipId), METADATA_PARAMS(Z_Construct_UFunction_ATtsExperience_UnloadClip_Statics::NewProp_ClipId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATtsExperience_UnloadClip_Statics::NewProp_ClipId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATtsExperience_UnloadClip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATtsExperience_UnloadClip_Statics::NewProp_ClipId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATtsExperience_UnloadClip_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTS" },
		{ "Comment", "/**\n\x09 * Unload a single clip from the memory cache\n\x09 *\n\x09 * @param ClipId [in] id of the clip to unload\n\x09 */" },
		{ "ModuleRelativePath", "Public/TTS/Experience/TtsExperience.h" },
		{ "ToolTip", "Unload a single clip from the memory cache\n\n@param ClipId [in] id of the clip to unload" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATtsExperience_UnloadClip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATtsExperience, nullptr, "UnloadClip", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATtsExperience_UnloadClip_Statics::TtsExperience_eventUnloadClip_Parms), Z_Construct_UFunction_ATtsExperience_UnloadClip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATtsExperience_UnloadClip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATtsExperience_UnloadClip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATtsExperience_UnloadClip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATtsExperience_UnloadClip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATtsExperience_UnloadClip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATtsExperience);
	UClass* Z_Construct_UClass_ATtsExperience_NoRegister()
	{
		return ATtsExperience::StaticClass();
	}
	struct Z_Construct_UClass_ATtsExperience_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Configuration_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Configuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoicePreset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VoicePreset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventHandler_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EventHandler;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemoryCacheHandler_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MemoryCacheHandler;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StorageCacheHandler_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StorageCacheHandler;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TtsService_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TtsService;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATtsExperience_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATtsExperience_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeech, "ConvertTextToSpeech" }, // 828675125
		{ &Z_Construct_UFunction_ATtsExperience_ConvertTextToSpeechWithSettings, "ConvertTextToSpeechWithSettings" }, // 329468538
		{ &Z_Construct_UFunction_ATtsExperience_DeleteAllClips, "DeleteAllClips" }, // 4076194175
		{ &Z_Construct_UFunction_ATtsExperience_DeleteClip, "DeleteClip" }, // 1639177116
		{ &Z_Construct_UFunction_ATtsExperience_FetchAvailableVoices, "FetchAvailableVoices" }, // 28603405
		{ &Z_Construct_UFunction_ATtsExperience_IsRequestInProgress, "IsRequestInProgress" }, // 2796594455
		{ &Z_Construct_UFunction_ATtsExperience_UnloadAllClips, "UnloadAllClips" }, // 1643512811
		{ &Z_Construct_UFunction_ATtsExperience_UnloadClip, "UnloadClip" }, // 2182904945
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATtsExperience_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Meta" },
		{ "Comment", "/**\n * The base class of TtsExperience\n */" },
		{ "IncludePath", "TTS/Experience/TtsExperience.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/TTS/Experience/TtsExperience.h" },
		{ "ToolTip", "The base class of TtsExperience" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATtsExperience_Statics::NewProp_Configuration_MetaData[] = {
		{ "Category", "TTS" },
		{ "Comment", "/**\n\x09 * The Wit configuration that will be used by Wit.ai\n\x09 */" },
		{ "ModuleRelativePath", "Public/TTS/Experience/TtsExperience.h" },
		{ "ToolTip", "The Wit configuration that will be used by Wit.ai" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATtsExperience_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATtsExperience, Configuration), Z_Construct_UClass_UWitAppConfigurationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATtsExperience_Statics::NewProp_Configuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATtsExperience_Statics::NewProp_Configuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATtsExperience_Statics::NewProp_VoicePreset_MetaData[] = {
		{ "Category", "TTS" },
		{ "Comment", "/**\n\x09 * The Wit TTS Voice Preset that will be used by Wit.ai\n\x09 */" },
		{ "ModuleRelativePath", "Public/TTS/Experience/TtsExperience.h" },
		{ "ToolTip", "The Wit TTS Voice Preset that will be used by Wit.ai" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATtsExperience_Statics::NewProp_VoicePreset = { "VoicePreset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATtsExperience, VoicePreset), Z_Construct_UClass_UTtsVoicePresetAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATtsExperience_Statics::NewProp_VoicePreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATtsExperience_Statics::NewProp_VoicePreset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATtsExperience_Statics::NewProp_EventHandler_MetaData[] = {
		{ "Category", "TTS" },
		{ "Comment", "/**\n\x09 * The events used by the voice service\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TTS/Experience/TtsExperience.h" },
		{ "ToolTip", "The events used by the voice service" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATtsExperience_Statics::NewProp_EventHandler = { "EventHandler", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATtsExperience, EventHandler), Z_Construct_UClass_UTtsEvents_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATtsExperience_Statics::NewProp_EventHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATtsExperience_Statics::NewProp_EventHandler_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATtsExperience_Statics::NewProp_MemoryCacheHandler_MetaData[] = {
		{ "Category", "TTS Cache" },
		{ "Comment", "/**\n\x09 * Memory cache to store converted voice clips as USoundWave\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TTS/Experience/TtsExperience.h" },
		{ "ToolTip", "Memory cache to store converted voice clips as USoundWave" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATtsExperience_Statics::NewProp_MemoryCacheHandler = { "MemoryCacheHandler", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATtsExperience, MemoryCacheHandler), Z_Construct_UClass_UTtsMemoryCacheHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATtsExperience_Statics::NewProp_MemoryCacheHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATtsExperience_Statics::NewProp_MemoryCacheHandler_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATtsExperience_Statics::NewProp_StorageCacheHandler_MetaData[] = {
		{ "Category", "TTS Cache" },
		{ "Comment", "/**\n\x09 * Storage cache to store converted voice clips as raw data\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TTS/Experience/TtsExperience.h" },
		{ "ToolTip", "Storage cache to store converted voice clips as raw data" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATtsExperience_Statics::NewProp_StorageCacheHandler = { "StorageCacheHandler", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATtsExperience, StorageCacheHandler), Z_Construct_UClass_UTtsStorageCacheHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATtsExperience_Statics::NewProp_StorageCacheHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATtsExperience_Statics::NewProp_StorageCacheHandler_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATtsExperience_Statics::NewProp_TtsService_MetaData[] = {
		{ "Comment", "/**\n\x09 * The underlying TTS service that implements the TTS functionality\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TTS/Experience/TtsExperience.h" },
		{ "ToolTip", "The underlying TTS service that implements the TTS functionality" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATtsExperience_Statics::NewProp_TtsService = { "TtsService", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATtsExperience, TtsService), Z_Construct_UClass_UTtsService_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATtsExperience_Statics::NewProp_TtsService_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATtsExperience_Statics::NewProp_TtsService_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATtsExperience_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATtsExperience_Statics::NewProp_Configuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATtsExperience_Statics::NewProp_VoicePreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATtsExperience_Statics::NewProp_EventHandler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATtsExperience_Statics::NewProp_MemoryCacheHandler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATtsExperience_Statics::NewProp_StorageCacheHandler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATtsExperience_Statics::NewProp_TtsService,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATtsExperience_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATtsExperience>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATtsExperience_Statics::ClassParams = {
		&ATtsExperience::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATtsExperience_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATtsExperience_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ATtsExperience_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATtsExperience_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATtsExperience()
	{
		if (!Z_Registration_Info_UClass_ATtsExperience.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATtsExperience.OuterSingleton, Z_Construct_UClass_ATtsExperience_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATtsExperience.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<ATtsExperience>()
	{
		return ATtsExperience::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATtsExperience);
	ATtsExperience::~ATtsExperience() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Experience_TtsExperience_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Experience_TtsExperience_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATtsExperience, ATtsExperience::StaticClass, TEXT("ATtsExperience"), &Z_Registration_Info_UClass_ATtsExperience, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATtsExperience), 1013556686U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Experience_TtsExperience_h_3283244408(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Experience_TtsExperience_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Experience_TtsExperience_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
