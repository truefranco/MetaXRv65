// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Voice/Capture/VoiceCaptureSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoiceCaptureSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_UVoiceCaptureSubsystem();
	WIT_API UClass* Z_Construct_UClass_UVoiceCaptureSubsystem_NoRegister();
	WIT_API UEnum* Z_Construct_UEnum_Wit_EVoiceCaptureEmulationMode();
// End Cross Module References
	DEFINE_FUNCTION(UVoiceCaptureSubsystem::execEnableEmulation)
	{
		P_GET_ENUM(EVoiceCaptureEmulationMode,Z_Param_EmulationModeToUse);
		P_GET_OBJECT(USoundWave,Z_Param_SoundWaveToUse);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableEmulation(EVoiceCaptureEmulationMode(Z_Param_EmulationModeToUse),Z_Param_SoundWaveToUse,Z_Param_Out_Tag);
		P_NATIVE_END;
	}
	void UVoiceCaptureSubsystem::StaticRegisterNativesUVoiceCaptureSubsystem()
	{
		UClass* Class = UVoiceCaptureSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableEmulation", &UVoiceCaptureSubsystem::execEnableEmulation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoiceCaptureSubsystem_EnableEmulation_Statics
	{
		struct VoiceCaptureSubsystem_eventEnableEmulation_Parms
		{
			EVoiceCaptureEmulationMode EmulationModeToUse;
			USoundWave* SoundWaveToUse;
			FName Tag;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_EmulationModeToUse_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EmulationModeToUse;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundWaveToUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoiceCaptureSubsystem_EnableEmulation_Statics::NewProp_EmulationModeToUse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoiceCaptureSubsystem_EnableEmulation_Statics::NewProp_EmulationModeToUse = { "EmulationModeToUse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoiceCaptureSubsystem_eventEnableEmulation_Parms, EmulationModeToUse), Z_Construct_UEnum_Wit_EVoiceCaptureEmulationMode, METADATA_PARAMS(nullptr, 0) }; // 1887667253
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceCaptureSubsystem_EnableEmulation_Statics::NewProp_SoundWaveToUse = { "SoundWaveToUse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoiceCaptureSubsystem_eventEnableEmulation_Parms, SoundWaveToUse), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceCaptureSubsystem_EnableEmulation_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoiceCaptureSubsystem_EnableEmulation_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoiceCaptureSubsystem_eventEnableEmulation_Parms, Tag), METADATA_PARAMS(Z_Construct_UFunction_UVoiceCaptureSubsystem_EnableEmulation_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceCaptureSubsystem_EnableEmulation_Statics::NewProp_Tag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceCaptureSubsystem_EnableEmulation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceCaptureSubsystem_EnableEmulation_Statics::NewProp_EmulationModeToUse_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceCaptureSubsystem_EnableEmulation_Statics::NewProp_EmulationModeToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceCaptureSubsystem_EnableEmulation_Statics::NewProp_SoundWaveToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceCaptureSubsystem_EnableEmulation_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceCaptureSubsystem_EnableEmulation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Enable the use of the null capture\n\x09 */" },
		{ "ModuleRelativePath", "Private/Voice/Capture/VoiceCaptureSubsystem.h" },
		{ "ToolTip", "Enable the use of the null capture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceCaptureSubsystem_EnableEmulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceCaptureSubsystem, nullptr, "EnableEmulation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoiceCaptureSubsystem_EnableEmulation_Statics::VoiceCaptureSubsystem_eventEnableEmulation_Parms), Z_Construct_UFunction_UVoiceCaptureSubsystem_EnableEmulation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceCaptureSubsystem_EnableEmulation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceCaptureSubsystem_EnableEmulation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceCaptureSubsystem_EnableEmulation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceCaptureSubsystem_EnableEmulation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoiceCaptureSubsystem_EnableEmulation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoiceCaptureSubsystem);
	UClass* Z_Construct_UClass_UVoiceCaptureSubsystem_NoRegister()
	{
		return UVoiceCaptureSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UVoiceCaptureSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmulationCaptureSoundWave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EmulationCaptureSoundWave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TtsExperienceTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TtsExperienceTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoiceCaptureSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoiceCaptureSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoiceCaptureSubsystem_EnableEmulation, "EnableEmulation" }, // 3352323819
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceCaptureSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UE4 Voice Capture wrapper for Wit.ai integration\n */" },
		{ "IncludePath", "Voice/Capture/VoiceCaptureSubsystem.h" },
		{ "ModuleRelativePath", "Private/Voice/Capture/VoiceCaptureSubsystem.h" },
		{ "ToolTip", "UE4 Voice Capture wrapper for Wit.ai integration" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceCaptureSubsystem_Statics::NewProp_EmulationCaptureSoundWave_MetaData[] = {
		{ "Comment", "/** Sound wave to use with the null capture */" },
		{ "ModuleRelativePath", "Private/Voice/Capture/VoiceCaptureSubsystem.h" },
		{ "ToolTip", "Sound wave to use with the null capture" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoiceCaptureSubsystem_Statics::NewProp_EmulationCaptureSoundWave = { "EmulationCaptureSoundWave", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceCaptureSubsystem, EmulationCaptureSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoiceCaptureSubsystem_Statics::NewProp_EmulationCaptureSoundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceCaptureSubsystem_Statics::NewProp_EmulationCaptureSoundWave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceCaptureSubsystem_Statics::NewProp_TtsExperienceTag_MetaData[] = {
		{ "Comment", "/** Set Tag for TTS speaker which is used to create sound wave from TTS to use with the null capture */" },
		{ "ModuleRelativePath", "Private/Voice/Capture/VoiceCaptureSubsystem.h" },
		{ "ToolTip", "Set Tag for TTS speaker which is used to create sound wave from TTS to use with the null capture" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoiceCaptureSubsystem_Statics::NewProp_TtsExperienceTag = { "TtsExperienceTag", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceCaptureSubsystem, TtsExperienceTag), METADATA_PARAMS(Z_Construct_UClass_UVoiceCaptureSubsystem_Statics::NewProp_TtsExperienceTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceCaptureSubsystem_Statics::NewProp_TtsExperienceTag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoiceCaptureSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceCaptureSubsystem_Statics::NewProp_EmulationCaptureSoundWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceCaptureSubsystem_Statics::NewProp_TtsExperienceTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoiceCaptureSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoiceCaptureSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoiceCaptureSubsystem_Statics::ClassParams = {
		&UVoiceCaptureSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVoiceCaptureSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceCaptureSubsystem_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoiceCaptureSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceCaptureSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoiceCaptureSubsystem()
	{
		if (!Z_Registration_Info_UClass_UVoiceCaptureSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoiceCaptureSubsystem.OuterSingleton, Z_Construct_UClass_UVoiceCaptureSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoiceCaptureSubsystem.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<UVoiceCaptureSubsystem>()
	{
		return UVoiceCaptureSubsystem::StaticClass();
	}
	UVoiceCaptureSubsystem::UVoiceCaptureSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoiceCaptureSubsystem);
	UVoiceCaptureSubsystem::~UVoiceCaptureSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Private_Voice_Capture_VoiceCaptureSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Private_Voice_Capture_VoiceCaptureSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoiceCaptureSubsystem, UVoiceCaptureSubsystem::StaticClass, TEXT("UVoiceCaptureSubsystem"), &Z_Registration_Info_UClass_UVoiceCaptureSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoiceCaptureSubsystem), 2599183753U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Private_Voice_Capture_VoiceCaptureSubsystem_h_3816953316(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Private_Voice_Capture_VoiceCaptureSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Private_Voice_Capture_VoiceCaptureSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
