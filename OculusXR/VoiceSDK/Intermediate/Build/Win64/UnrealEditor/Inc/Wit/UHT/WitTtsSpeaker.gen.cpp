// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wit/TTS/WitTtsSpeaker.h"
#include "TTS/Configuration/TtsConfiguration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWitTtsSpeaker() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_AWitTtsExperience();
	WIT_API UClass* Z_Construct_UClass_AWitTtsSpeaker();
	WIT_API UClass* Z_Construct_UClass_AWitTtsSpeaker_NoRegister();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FTtsConfiguration();
// End Cross Module References
	DEFINE_FUNCTION(AWitTtsSpeaker::execOnSynthesizeResponse)
	{
		P_GET_UBOOL(Z_Param_bIsSuccessful);
		P_GET_OBJECT(USoundWave,Z_Param_SoundWave);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSynthesizeResponse(Z_Param_bIsSuccessful,Z_Param_SoundWave);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWitTtsSpeaker::execIsLoading)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLoading();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWitTtsSpeaker::execIsSpeaking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSpeaking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWitTtsSpeaker::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWitTtsSpeaker::execSpeakWithSettings)
	{
		P_GET_STRUCT_REF(FTtsConfiguration,Z_Param_Out_ClipSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpeakWithSettings(Z_Param_Out_ClipSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWitTtsSpeaker::execSpeak)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TextToSpeak);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Speak(Z_Param_TextToSpeak);
		P_NATIVE_END;
	}
	void AWitTtsSpeaker::StaticRegisterNativesAWitTtsSpeaker()
	{
		UClass* Class = AWitTtsSpeaker::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsLoading", &AWitTtsSpeaker::execIsLoading },
			{ "IsSpeaking", &AWitTtsSpeaker::execIsSpeaking },
			{ "OnSynthesizeResponse", &AWitTtsSpeaker::execOnSynthesizeResponse },
			{ "Speak", &AWitTtsSpeaker::execSpeak },
			{ "SpeakWithSettings", &AWitTtsSpeaker::execSpeakWithSettings },
			{ "Stop", &AWitTtsSpeaker::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWitTtsSpeaker_IsLoading_Statics
	{
		struct WitTtsSpeaker_eventIsLoading_Parms
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
	void Z_Construct_UFunction_AWitTtsSpeaker_IsLoading_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WitTtsSpeaker_eventIsLoading_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWitTtsSpeaker_IsLoading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WitTtsSpeaker_eventIsLoading_Parms), &Z_Construct_UFunction_AWitTtsSpeaker_IsLoading_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWitTtsSpeaker_IsLoading_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWitTtsSpeaker_IsLoading_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWitTtsSpeaker_IsLoading_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTS" },
		{ "Comment", "/**\n\x09 * Are we currently loading?\n\x09 *\n\x09 * @return true if we are loading\n\x09 */" },
		{ "ModuleRelativePath", "Public/Wit/TTS/WitTtsSpeaker.h" },
		{ "ToolTip", "Are we currently loading?\n\n@return true if we are loading" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWitTtsSpeaker_IsLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWitTtsSpeaker, nullptr, "IsLoading", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWitTtsSpeaker_IsLoading_Statics::WitTtsSpeaker_eventIsLoading_Parms), Z_Construct_UFunction_AWitTtsSpeaker_IsLoading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWitTtsSpeaker_IsLoading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWitTtsSpeaker_IsLoading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWitTtsSpeaker_IsLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWitTtsSpeaker_IsLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWitTtsSpeaker_IsLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWitTtsSpeaker_IsSpeaking_Statics
	{
		struct WitTtsSpeaker_eventIsSpeaking_Parms
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
	void Z_Construct_UFunction_AWitTtsSpeaker_IsSpeaking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WitTtsSpeaker_eventIsSpeaking_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWitTtsSpeaker_IsSpeaking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WitTtsSpeaker_eventIsSpeaking_Parms), &Z_Construct_UFunction_AWitTtsSpeaker_IsSpeaking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWitTtsSpeaker_IsSpeaking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWitTtsSpeaker_IsSpeaking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWitTtsSpeaker_IsSpeaking_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTS" },
		{ "Comment", "/**\n\x09 * Are we currently speaking?\n\x09 *\n\x09 * @return true if we are speaking\n\x09 */" },
		{ "ModuleRelativePath", "Public/Wit/TTS/WitTtsSpeaker.h" },
		{ "ToolTip", "Are we currently speaking?\n\n@return true if we are speaking" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWitTtsSpeaker_IsSpeaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWitTtsSpeaker, nullptr, "IsSpeaking", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWitTtsSpeaker_IsSpeaking_Statics::WitTtsSpeaker_eventIsSpeaking_Parms), Z_Construct_UFunction_AWitTtsSpeaker_IsSpeaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWitTtsSpeaker_IsSpeaking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWitTtsSpeaker_IsSpeaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWitTtsSpeaker_IsSpeaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWitTtsSpeaker_IsSpeaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWitTtsSpeaker_IsSpeaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWitTtsSpeaker_OnSynthesizeResponse_Statics
	{
		struct WitTtsSpeaker_eventOnSynthesizeResponse_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWitTtsSpeaker_OnSynthesizeResponse_Statics::NewProp_bIsSuccessful_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AWitTtsSpeaker_OnSynthesizeResponse_Statics::NewProp_bIsSuccessful_SetBit(void* Obj)
	{
		((WitTtsSpeaker_eventOnSynthesizeResponse_Parms*)Obj)->bIsSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWitTtsSpeaker_OnSynthesizeResponse_Statics::NewProp_bIsSuccessful = { "bIsSuccessful", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WitTtsSpeaker_eventOnSynthesizeResponse_Parms), &Z_Construct_UFunction_AWitTtsSpeaker_OnSynthesizeResponse_Statics::NewProp_bIsSuccessful_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AWitTtsSpeaker_OnSynthesizeResponse_Statics::NewProp_bIsSuccessful_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWitTtsSpeaker_OnSynthesizeResponse_Statics::NewProp_bIsSuccessful_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWitTtsSpeaker_OnSynthesizeResponse_Statics::NewProp_SoundWave = { "SoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WitTtsSpeaker_eventOnSynthesizeResponse_Parms, SoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWitTtsSpeaker_OnSynthesizeResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWitTtsSpeaker_OnSynthesizeResponse_Statics::NewProp_bIsSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWitTtsSpeaker_OnSynthesizeResponse_Statics::NewProp_SoundWave,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWitTtsSpeaker_OnSynthesizeResponse_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Callback that is called when a Wit.ai response is received which is used to see if we have a match\n\x09 * \n\x09 * @param bIsSuccessful [in] true if the response was successful\n\x09 * @param SoundWave [in] the generated sound wave\n\x09 */" },
		{ "ModuleRelativePath", "Public/Wit/TTS/WitTtsSpeaker.h" },
		{ "ToolTip", "Callback that is called when a Wit.ai response is received which is used to see if we have a match\n\n@param bIsSuccessful [in] true if the response was successful\n@param SoundWave [in] the generated sound wave" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWitTtsSpeaker_OnSynthesizeResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWitTtsSpeaker, nullptr, "OnSynthesizeResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWitTtsSpeaker_OnSynthesizeResponse_Statics::WitTtsSpeaker_eventOnSynthesizeResponse_Parms), Z_Construct_UFunction_AWitTtsSpeaker_OnSynthesizeResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWitTtsSpeaker_OnSynthesizeResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWitTtsSpeaker_OnSynthesizeResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWitTtsSpeaker_OnSynthesizeResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWitTtsSpeaker_OnSynthesizeResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWitTtsSpeaker_OnSynthesizeResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWitTtsSpeaker_Speak_Statics
	{
		struct WitTtsSpeaker_eventSpeak_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWitTtsSpeaker_Speak_Statics::NewProp_TextToSpeak_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AWitTtsSpeaker_Speak_Statics::NewProp_TextToSpeak = { "TextToSpeak", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WitTtsSpeaker_eventSpeak_Parms, TextToSpeak), METADATA_PARAMS(Z_Construct_UFunction_AWitTtsSpeaker_Speak_Statics::NewProp_TextToSpeak_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWitTtsSpeaker_Speak_Statics::NewProp_TextToSpeak_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWitTtsSpeaker_Speak_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWitTtsSpeaker_Speak_Statics::NewProp_TextToSpeak,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWitTtsSpeaker_Speak_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTS" },
		{ "Comment", "/**\n\x09 * Speak a phrase with the default configuration\n\x09 *\n\x09 * @param TextToSpeak [in] text to speak\n\x09 */" },
		{ "ModuleRelativePath", "Public/Wit/TTS/WitTtsSpeaker.h" },
		{ "ToolTip", "Speak a phrase with the default configuration\n\n@param TextToSpeak [in] text to speak" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWitTtsSpeaker_Speak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWitTtsSpeaker, nullptr, "Speak", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWitTtsSpeaker_Speak_Statics::WitTtsSpeaker_eventSpeak_Parms), Z_Construct_UFunction_AWitTtsSpeaker_Speak_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWitTtsSpeaker_Speak_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWitTtsSpeaker_Speak_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWitTtsSpeaker_Speak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWitTtsSpeaker_Speak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWitTtsSpeaker_Speak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWitTtsSpeaker_SpeakWithSettings_Statics
	{
		struct WitTtsSpeaker_eventSpeakWithSettings_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWitTtsSpeaker_SpeakWithSettings_Statics::NewProp_ClipSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWitTtsSpeaker_SpeakWithSettings_Statics::NewProp_ClipSettings = { "ClipSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WitTtsSpeaker_eventSpeakWithSettings_Parms, ClipSettings), Z_Construct_UScriptStruct_FTtsConfiguration, METADATA_PARAMS(Z_Construct_UFunction_AWitTtsSpeaker_SpeakWithSettings_Statics::NewProp_ClipSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWitTtsSpeaker_SpeakWithSettings_Statics::NewProp_ClipSettings_MetaData)) }; // 2639599679
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWitTtsSpeaker_SpeakWithSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWitTtsSpeaker_SpeakWithSettings_Statics::NewProp_ClipSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWitTtsSpeaker_SpeakWithSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTS" },
		{ "Comment", "/**\n\x09 * Speak a phrase with custom settings\n\x09 *\n\x09 * @param ClipSettings [in] the text and settings to speak\n\x09 */" },
		{ "ModuleRelativePath", "Public/Wit/TTS/WitTtsSpeaker.h" },
		{ "ToolTip", "Speak a phrase with custom settings\n\n@param ClipSettings [in] the text and settings to speak" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWitTtsSpeaker_SpeakWithSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWitTtsSpeaker, nullptr, "SpeakWithSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWitTtsSpeaker_SpeakWithSettings_Statics::WitTtsSpeaker_eventSpeakWithSettings_Parms), Z_Construct_UFunction_AWitTtsSpeaker_SpeakWithSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWitTtsSpeaker_SpeakWithSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWitTtsSpeaker_SpeakWithSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWitTtsSpeaker_SpeakWithSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWitTtsSpeaker_SpeakWithSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWitTtsSpeaker_SpeakWithSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWitTtsSpeaker_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWitTtsSpeaker_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTS" },
		{ "Comment", "/**\n\x09 * Stop speaking\n\x09 */" },
		{ "ModuleRelativePath", "Public/Wit/TTS/WitTtsSpeaker.h" },
		{ "ToolTip", "Stop speaking" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWitTtsSpeaker_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWitTtsSpeaker, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWitTtsSpeaker_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWitTtsSpeaker_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWitTtsSpeaker_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWitTtsSpeaker_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWitTtsSpeaker);
	UClass* Z_Construct_UClass_AWitTtsSpeaker_NoRegister()
	{
		return AWitTtsSpeaker::StaticClass();
	}
	struct Z_Construct_UClass_AWitTtsSpeaker_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWitTtsSpeaker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWitTtsExperience,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWitTtsSpeaker_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWitTtsSpeaker_IsLoading, "IsLoading" }, // 4085545428
		{ &Z_Construct_UFunction_AWitTtsSpeaker_IsSpeaking, "IsSpeaking" }, // 237664857
		{ &Z_Construct_UFunction_AWitTtsSpeaker_OnSynthesizeResponse, "OnSynthesizeResponse" }, // 1297572691
		{ &Z_Construct_UFunction_AWitTtsSpeaker_Speak, "Speak" }, // 2911353669
		{ &Z_Construct_UFunction_AWitTtsSpeaker_SpeakWithSettings, "SpeakWithSettings" }, // 205634795
		{ &Z_Construct_UFunction_AWitTtsSpeaker_Stop, "Stop" }, // 3248314229
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitTtsSpeaker_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Meta" },
		{ "Comment", "/**\n * Represents a speaker\n */" },
		{ "IncludePath", "Wit/TTS/WitTtsSpeaker.h" },
		{ "ModuleRelativePath", "Public/Wit/TTS/WitTtsSpeaker.h" },
		{ "ToolTip", "Represents a speaker" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitTtsSpeaker_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "Category", "TTS" },
		{ "Comment", "/**\n\x09 * The audio source used to play sounds\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Wit/TTS/WitTtsSpeaker.h" },
		{ "ToolTip", "The audio source used to play sounds" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWitTtsSpeaker_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWitTtsSpeaker, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWitTtsSpeaker_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWitTtsSpeaker_Statics::NewProp_AudioComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWitTtsSpeaker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWitTtsSpeaker_Statics::NewProp_AudioComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWitTtsSpeaker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWitTtsSpeaker>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWitTtsSpeaker_Statics::ClassParams = {
		&AWitTtsSpeaker::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWitTtsSpeaker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWitTtsSpeaker_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWitTtsSpeaker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWitTtsSpeaker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWitTtsSpeaker()
	{
		if (!Z_Registration_Info_UClass_AWitTtsSpeaker.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWitTtsSpeaker.OuterSingleton, Z_Construct_UClass_AWitTtsSpeaker_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWitTtsSpeaker.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<AWitTtsSpeaker>()
	{
		return AWitTtsSpeaker::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWitTtsSpeaker);
	AWitTtsSpeaker::~AWitTtsSpeaker() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_TTS_WitTtsSpeaker_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_TTS_WitTtsSpeaker_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWitTtsSpeaker, AWitTtsSpeaker::StaticClass, TEXT("AWitTtsSpeaker"), &Z_Registration_Info_UClass_AWitTtsSpeaker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWitTtsSpeaker), 2042745778U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_TTS_WitTtsSpeaker_h_400724154(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_TTS_WitTtsSpeaker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_TTS_WitTtsSpeaker_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
