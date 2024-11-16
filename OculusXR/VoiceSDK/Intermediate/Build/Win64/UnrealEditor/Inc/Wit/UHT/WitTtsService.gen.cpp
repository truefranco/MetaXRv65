// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wit/TTS/WitTtsService.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWitTtsService() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_UTtsService();
	WIT_API UClass* Z_Construct_UClass_UWitTtsService();
	WIT_API UClass* Z_Construct_UClass_UWitTtsService_NoRegister();
// End Cross Module References
	void UWitTtsService::StaticRegisterNativesUWitTtsService()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWitTtsService);
	UClass* Z_Construct_UClass_UWitTtsService_NoRegister()
	{
		return UWitTtsService::StaticClass();
	}
	struct Z_Construct_UClass_UWitTtsService_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsWavFileOutputEnabled_MetaData[];
#endif
		static void NewProp_bIsWavFileOutputEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWavFileOutputEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWitTtsService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTtsService,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWitTtsService_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Meta" },
		{ "Comment", "/**\n * Component that encapsulates the Wit Text to Speech API. Provides functionality for speech synthesis from text input\n * using Wit.ai. To use it simply attach the UWitTtsService component in the hierarchy of any Actor\n */" },
		{ "IncludePath", "Wit/TTS/WitTtsService.h" },
		{ "ModuleRelativePath", "Public/Wit/TTS/WitTtsService.h" },
		{ "ToolTip", "Component that encapsulates the Wit Text to Speech API. Provides functionality for speech synthesis from text input\nusing Wit.ai. To use it simply attach the UWitTtsService component in the hierarchy of any Actor" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWitTtsService_Statics::NewProp_bIsWavFileOutputEnabled_MetaData[] = {
		{ "Category", "TTS|Debug" },
		{ "Comment", "/**\n\x09 * If set to true this will record the voice input and write it to a named wav file for debugging. The output file will be written to\n\x09 * the project folder's Saved/BouncedWavFiles folder as Wit/RecordedVoiceInput.wav\n\x09 */" },
		{ "ModuleRelativePath", "Public/Wit/TTS/WitTtsService.h" },
		{ "ToolTip", "If set to true this will record the voice input and write it to a named wav file for debugging. The output file will be written to\nthe project folder's Saved/BouncedWavFiles folder as Wit/RecordedVoiceInput.wav" },
	};
#endif
	void Z_Construct_UClass_UWitTtsService_Statics::NewProp_bIsWavFileOutputEnabled_SetBit(void* Obj)
	{
		((UWitTtsService*)Obj)->bIsWavFileOutputEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWitTtsService_Statics::NewProp_bIsWavFileOutputEnabled = { "bIsWavFileOutputEnabled", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWitTtsService), &Z_Construct_UClass_UWitTtsService_Statics::NewProp_bIsWavFileOutputEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWitTtsService_Statics::NewProp_bIsWavFileOutputEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWitTtsService_Statics::NewProp_bIsWavFileOutputEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWitTtsService_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWitTtsService_Statics::NewProp_bIsWavFileOutputEnabled,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWitTtsService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWitTtsService>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWitTtsService_Statics::ClassParams = {
		&UWitTtsService::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UWitTtsService_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UWitTtsService_Statics::PropPointers), 0),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWitTtsService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWitTtsService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWitTtsService()
	{
		if (!Z_Registration_Info_UClass_UWitTtsService.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWitTtsService.OuterSingleton, Z_Construct_UClass_UWitTtsService_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWitTtsService.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<UWitTtsService>()
	{
		return UWitTtsService::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWitTtsService);
	UWitTtsService::~UWitTtsService() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_TTS_WitTtsService_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_TTS_WitTtsService_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWitTtsService, UWitTtsService::StaticClass, TEXT("UWitTtsService"), &Z_Registration_Info_UClass_UWitTtsService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWitTtsService), 688548112U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_TTS_WitTtsService_h_1914512302(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_TTS_WitTtsService_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_TTS_WitTtsService_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
