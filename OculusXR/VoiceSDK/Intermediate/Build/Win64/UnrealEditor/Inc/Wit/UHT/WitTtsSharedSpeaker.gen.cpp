// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wit/TTS/WitTtsSharedSpeaker.h"
#include "TTS/Configuration/TtsConfiguration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWitTtsSharedSpeaker() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_ATtsExperience_NoRegister();
	WIT_API UClass* Z_Construct_UClass_AWitTtsSharedSpeaker();
	WIT_API UClass* Z_Construct_UClass_AWitTtsSharedSpeaker_NoRegister();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FTtsConfiguration();
// End Cross Module References
	DEFINE_FUNCTION(AWitTtsSharedSpeaker::execOnSynthesizeResponse)
	{
		P_GET_UBOOL(Z_Param_bIsSuccessful);
		P_GET_OBJECT(USoundWave,Z_Param_SoundWave);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSynthesizeResponse(Z_Param_bIsSuccessful,Z_Param_SoundWave);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWitTtsSharedSpeaker::execIsLoading)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLoading();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWitTtsSharedSpeaker::execIsSpeaking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSpeaking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWitTtsSharedSpeaker::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWitTtsSharedSpeaker::execSpeakWithSettings)
	{
		P_GET_STRUCT_REF(FTtsConfiguration,Z_Param_Out_ClipSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpeakWithSettings(Z_Param_Out_ClipSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWitTtsSharedSpeaker::execSpeak)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TextToSpeak);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Speak(Z_Param_TextToSpeak);
		P_NATIVE_END;
	}
	void AWitTtsSharedSpeaker::StaticRegisterNativesAWitTtsSharedSpeaker()
	{
		UClass* Class = AWitTtsSharedSpeaker::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsLoading", &AWitTtsSharedSpeaker::execIsLoading },
			{ "IsSpeaking", &AWitTtsSharedSpeaker::execIsSpeaking },
			{ "OnSynthesizeResponse", &AWitTtsSharedSpeaker::execOnSynthesizeResponse },
			{ "Speak", &AWitTtsSharedSpeaker::execSpeak },
			{ "SpeakWithSettings", &AWitTtsSharedSpeaker::execSpeakWithSettings },
			{ "Stop", &AWitTtsSharedSpeaker::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWitTtsSharedSpeaker_IsLoading_Statics
	{
		struct WitTtsSharedSpeaker_eventIsLoading_Parms
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
	void Z_Construct_UFunction_AWitTtsSharedSpeaker_IsLoading_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WitTtsSharedSpeaker_eventIsLoading_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWitTtsSharedSpeaker_IsLoading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WitTtsSharedSpeaker_eventIsLoading_Parms), &Z_Construct_UFunction_AWitTtsSharedSpeaker_IsLoading_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWitTtsSharedSpeaker_IsLoading_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWitTtsSharedSpeaker_IsLoading_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWitTtsSharedSpeaker_IsLoading_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTS" },
		{ "Comment", "/**\n\x09 * Are we currently loading?\n\x09 *\n\x09 * @return true if we are loading\n\x09 */" },
		{ "ModuleRelativePath", "Public/Wit/TTS/WitTtsSharedSpeaker.h" },
		{ "ToolTip", "Are we currently loading?\n\n@return true if we are loading" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWitTtsSharedSpeaker_IsLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWitTtsSharedSpeaker, nullptr, "IsLoading", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWitTtsSharedSpeaker_IsLoading_Statics::WitTtsSharedSpeaker_eventIsLoading_Parms), Z_Construct_UFunction_AWitTtsSharedSpeaker_IsLoading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWitTtsSharedSpeaker_IsLoading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWitTtsSharedSpeaker_IsLoading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWitTtsSharedSpeaker_IsLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWitTtsSharedSpeaker_IsLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWitTtsSharedSpeaker_IsLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWitTtsSharedSpeaker_IsSpeaking_Statics
	{
		struct WitTtsSharedSpeaker_eventIsSpeaking_Parms
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
	void Z_Construct_UFunction_AWitTtsSharedSpeaker_IsSpeaking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WitTtsSharedSpeaker_eventIsSpeaking_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWitTtsSharedSpeaker_IsSpeaking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WitTtsSharedSpeaker_eventIsSpeaking_Parms), &Z_Construct_UFunction_AWitTtsSharedSpeaker_IsSpeaking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWitTtsSharedSpeaker_IsSpeaking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWitTtsSharedSpeaker_IsSpeaking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWitTtsSharedSpeaker_IsSpeaking_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTS" },
		{ "Comment", "/**\n\x09 * Are we currently speaking?\n\x09 *\n\x09 * @return true if we are speaking\n\x09 */" },
		{ "ModuleRelativePath", "Public/Wit/TTS/WitTtsSharedSpeaker.h" },
		{ "ToolTip", "Are we currently speaking?\n\n@return true if we are speaking" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWitTtsSharedSpeaker_IsSpeaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWitTtsSharedSpeaker, nullptr, "IsSpeaking", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWitTtsSharedSpeaker_IsSpeaking_Statics::WitTtsSharedSpeaker_eventIsSpeaking_Parms), Z_Construct_UFunction_AWitTtsSharedSpeaker_IsSpeaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWitTtsSharedSpeaker_IsSpeaking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWitTtsSharedSpeaker_IsSpeaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWitTtsSharedSpeaker_IsSpeaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWitTtsSharedSpeaker_IsSpeaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWitTtsSharedSpeaker_IsSpeaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWitTtsSharedSpeaker_OnSynthesizeResponse_Statics
	{
		struct WitTtsSharedSpeaker_eventOnSynthesizeResponse_Parms
		{
			bool bIsSuccessful;
			USoundWave* SoundWave;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSuccessful_MetaData[];
#endif
		static void NewProp_bIsSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSuccessful;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundWave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWitTtsSharedSpeaker_OnSynthesizeResponse_Statics::NewProp_bIsSuccessful_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AWitTtsSharedSpeaker_OnSynthesizeResponse_Statics::NewProp_bIsSuccessful_SetBit(void* Obj)
	{
		((WitTtsSharedSpeaker_eventOnSynthesizeResponse_Parms*)Obj)->bIsSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWitTtsSharedSpeaker_OnSynthesizeResponse_Statics::NewProp_bIsSuccessful = { "bIsSuccessful", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WitTtsSharedSpeaker_eventOnSynthesizeResponse_Parms), &Z_Construct_UFunction_AWitTtsSharedSpeaker_OnSynthesizeResponse_Statics::NewProp_bIsSuccessful_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AWitTtsSharedSpeaker_OnSynthesizeResponse_Statics::NewProp_bIsSuccessful_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWitTtsSharedSpeaker_OnSynthesizeResponse_Statics::NewProp_bIsSuccessful_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWitTtsSharedSpeaker_OnSynthesizeResponse_Statics::NewProp_SoundWave = { "SoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WitTtsSharedSpeaker_eventOnSynthesizeResponse_Parms, SoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWitTtsSharedSpeaker_OnSynthesizeResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWitTtsSharedSpeaker_OnSynthesizeResponse_Statics::NewProp_bIsSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWitTtsSharedSpeaker_OnSynthesizeResponse_Statics::NewProp_SoundWave,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWitTtsSharedSpeaker_OnSynthesizeResponse_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Callback that is called when a Wit.ai response is received which is used to see if we have a match\n\x09 * \n\x09 * @param bIsSuccessful [in] true if the response was successful\n\x09 * @param SoundWave [in] the generated sound wave\n\x09 */" },
		{ "ModuleRelativePath", "Public/Wit/TTS/WitTtsSharedSpeaker.h" },
		{ "ToolTip", "Callback that is called when a Wit.ai response is received which is used to see if we have a match\n\n@param bIsSuccessful [in] true if the response was successful\n@param SoundWave [in] the generated sound wave" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWitTtsSharedSpeaker_OnSynthesizeResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWitTtsSharedSpeaker, nullptr, "OnSynthesizeResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWitTtsSharedSpeaker_OnSynthesizeResponse_Statics::WitTtsSharedSpeaker_eventOnSynthesizeResponse_Parms), Z_Construct_UFunction_AWitTtsSharedSpeaker_OnSynthesizeResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWitTtsSharedSpeaker_OnSynthesizeResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWitTtsSharedSpeaker_OnSynthesizeResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWitTtsSharedSpeaker_OnSynthesizeResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWitTtsSharedSpeaker_OnSynthesizeResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWitTtsSharedSpeaker_OnSynthesizeResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWitTtsSharedSpeaker_Speak_Statics
	{
		struct WitTtsSharedSpeaker_eventSpeak_Parms
		{
			FString TextToSpeak;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextToSpeak_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TextToSpeak;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWitTtsSharedSpeaker_Speak_Statics::NewProp_TextToSpeak_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AWitTtsSharedSpeaker_Speak_Statics::NewProp_TextToSpeak = { "TextToSpeak", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WitTtsSharedSpeaker_eventSpeak_Parms, TextToSpeak), METADATA_PARAMS(Z_Construct_UFunction_AWitTtsSharedSpeaker_Speak_Statics::NewProp_TextToSpeak_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWitTtsSharedSpeaker_Speak_Statics::NewProp_TextToSpeak_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWitTtsSharedSpeaker_Speak_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWitTtsSharedSpeaker_Speak_Statics::NewProp_TextToSpeak,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWitTtsSharedSpeaker_Speak_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTS" },
		{ "Comment", "/**\n\x09 * Speak a phrase with the default configuration\n\x09 *\n\x09 * @param TextToSpeak [in] the text to speak\n\x09 */" },
		{ "ModuleRelativePath", "Public/Wit/TTS/WitTtsSharedSpeaker.h" },
		{ "ToolTip", "Speak a phrase with the default configuration\n\n@param TextToSpeak [in] the text to speak" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWitTtsSharedSpeaker_Speak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWitTtsSharedSpeaker, nullptr, "Speak", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWitTtsSharedSpeaker_Speak_Statics::WitTtsSharedSpeaker_eventSpeak_Parms), Z_Construct_UFunction_AWitTtsSharedSpeaker_Speak_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWitTtsSharedSpeaker_Speak_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWitTtsSharedSpeaker_Speak_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWitTtsSharedSpeaker_Speak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWitTtsSharedSpeaker_Speak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWitTtsSharedSpeaker_Speak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWitTtsSharedSpeaker_SpeakWithSettings_Statics
	{
		struct WitTtsSharedSpeaker_eventSpeakWithSettings_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWitTtsSharedSpeaker_SpeakWithSettings_Statics::NewProp_ClipSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWitTtsSharedSpeaker_SpeakWithSettings_Statics::NewProp_ClipSettings = { "ClipSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WitTtsSharedSpeaker_eventSpeakWithSettings_Parms, ClipSettings), Z_Construct_UScriptStruct_FTtsConfiguration, METADATA_PARAMS(Z_Construct_UFunction_AWitTtsSharedSpeaker_SpeakWithSettings_Statics::NewProp_ClipSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWitTtsSharedSpeaker_SpeakWithSettings_Statics::NewProp_ClipSettings_MetaData)) }; // 2639599679
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWitTtsSharedSpeaker_SpeakWithSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWitTtsSharedSpeaker_SpeakWithSettings_Statics::NewProp_ClipSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWitTtsSharedSpeaker_SpeakWithSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTS" },
		{ "Comment", "/**\n\x09 * Speak a phrase with custom settings\n\x09 *\n\x09 * @param ClipSettings [in] the settings to use\n\x09 */" },
		{ "ModuleRelativePath", "Public/Wit/TTS/WitTtsSharedSpeaker.h" },
		{ "ToolTip", "Speak a phrase with custom settings\n\n@param ClipSettings [in] the settings to use" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWitTtsSharedSpeaker_SpeakWithSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWitTtsSharedSpeaker, nullptr, "SpeakWithSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWitTtsSharedSpeaker_SpeakWithSettings_Statics::WitTtsSharedSpeaker_eventSpeakWithSettings_Parms), Z_Construct_UFunction_AWitTtsSharedSpeaker_SpeakWithSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWitTtsSharedSpeaker_SpeakWithSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWitTtsSharedSpeaker_SpeakWithSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWitTtsSharedSpeaker_SpeakWithSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWitTtsSharedSpeaker_SpeakWithSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWitTtsSharedSpeaker_SpeakWithSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWitTtsSharedSpeaker_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWitTtsSharedSpeaker_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTS" },
		{ "Comment", "/**\n\x09 * Stop speaking\n\x09 */" },
		{ "ModuleRelativePath", "Public/Wit/TTS/WitTtsSharedSpeaker.h" },
		{ "ToolTip", "Stop speaking" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWitTtsSharedSpeaker_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWitTtsSharedSpeaker, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWitTtsSharedSpeaker_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWitTtsSharedSpeaker_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWitTtsSharedSpeaker_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWitTtsSharedSpeaker_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWitTtsSharedSpeaker);
	UClass* Z_Construct_UClass_AWitTtsSharedSpeaker_NoRegister()
	{
		return AWitTtsSharedSpeaker::StaticClass();
	}
	struct Z_Construct_UClass_AWitTtsSharedSpeaker_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TtsExperienceTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TtsExperienceTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TtsExperience_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TtsExperience;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWitTtsSharedSpeaker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWitTtsSharedSpeaker_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWitTtsSharedSpeaker_IsLoading, "IsLoading" }, // 2198973764
		{ &Z_Construct_UFunction_AWitTtsSharedSpeaker_IsSpeaking, "IsSpeaking" }, // 2516390541
		{ &Z_Construct_UFunction_AWitTtsSharedSpeaker_OnSynthesizeResponse, "OnSynthesizeResponse" }, // 4125029844
		{ &Z_Construct_UFunction_AWitTtsSharedSpeaker_Speak, "Speak" }, // 4076725776
		{ &Z_Construct_UFunction_AWitTtsSharedSpeaker_SpeakWithSettings, "SpeakWithSettings" }, // 3323176256
		{ &Z_Construct_UFunction_AWitTtsSharedSpeaker_Stop, "Stop" }, // 1361878430
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitTtsSharedSpeaker_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Meta" },
		{ "Comment", "/**\n * Represents a speaker\n */" },
		{ "IncludePath", "Wit/TTS/WitTtsSharedSpeaker.h" },
		{ "ModuleRelativePath", "Public/Wit/TTS/WitTtsSharedSpeaker.h" },
		{ "ToolTip", "Represents a speaker" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitTtsSharedSpeaker_Statics::NewProp_TtsExperienceTag_MetaData[] = {
		{ "Category", "TTS" },
		{ "Comment", "/**\n\x09 * The tag of the TTS experience to use in case there is more than one. If the tag is empty use the first found\n\x09 */" },
		{ "ModuleRelativePath", "Public/Wit/TTS/WitTtsSharedSpeaker.h" },
		{ "ToolTip", "The tag of the TTS experience to use in case there is more than one. If the tag is empty use the first found" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWitTtsSharedSpeaker_Statics::NewProp_TtsExperienceTag = { "TtsExperienceTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWitTtsSharedSpeaker, TtsExperienceTag), METADATA_PARAMS(Z_Construct_UClass_AWitTtsSharedSpeaker_Statics::NewProp_TtsExperienceTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWitTtsSharedSpeaker_Statics::NewProp_TtsExperienceTag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitTtsSharedSpeaker_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "Category", "TTS" },
		{ "Comment", "/**\n\x09 * The audio source used to play sounds\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Wit/TTS/WitTtsSharedSpeaker.h" },
		{ "ToolTip", "The audio source used to play sounds" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWitTtsSharedSpeaker_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWitTtsSharedSpeaker, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWitTtsSharedSpeaker_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWitTtsSharedSpeaker_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitTtsSharedSpeaker_Statics::NewProp_TtsExperience_MetaData[] = {
		{ "Comment", "/**\n\x09 * The TTS experience that the speaker will use\n\x09 */" },
		{ "ModuleRelativePath", "Public/Wit/TTS/WitTtsSharedSpeaker.h" },
		{ "ToolTip", "The TTS experience that the speaker will use" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWitTtsSharedSpeaker_Statics::NewProp_TtsExperience = { "TtsExperience", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWitTtsSharedSpeaker, TtsExperience), Z_Construct_UClass_ATtsExperience_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWitTtsSharedSpeaker_Statics::NewProp_TtsExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWitTtsSharedSpeaker_Statics::NewProp_TtsExperience_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWitTtsSharedSpeaker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWitTtsSharedSpeaker_Statics::NewProp_TtsExperienceTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWitTtsSharedSpeaker_Statics::NewProp_AudioComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWitTtsSharedSpeaker_Statics::NewProp_TtsExperience,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWitTtsSharedSpeaker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWitTtsSharedSpeaker>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWitTtsSharedSpeaker_Statics::ClassParams = {
		&AWitTtsSharedSpeaker::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWitTtsSharedSpeaker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWitTtsSharedSpeaker_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWitTtsSharedSpeaker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWitTtsSharedSpeaker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWitTtsSharedSpeaker()
	{
		if (!Z_Registration_Info_UClass_AWitTtsSharedSpeaker.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWitTtsSharedSpeaker.OuterSingleton, Z_Construct_UClass_AWitTtsSharedSpeaker_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWitTtsSharedSpeaker.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<AWitTtsSharedSpeaker>()
	{
		return AWitTtsSharedSpeaker::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWitTtsSharedSpeaker);
	AWitTtsSharedSpeaker::~AWitTtsSharedSpeaker() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_TTS_WitTtsSharedSpeaker_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_TTS_WitTtsSharedSpeaker_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWitTtsSharedSpeaker, AWitTtsSharedSpeaker::StaticClass, TEXT("AWitTtsSharedSpeaker"), &Z_Registration_Info_UClass_AWitTtsSharedSpeaker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWitTtsSharedSpeaker), 817690018U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_TTS_WitTtsSharedSpeaker_h_2329833169(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_TTS_WitTtsSharedSpeaker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_TTS_WitTtsSharedSpeaker_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
