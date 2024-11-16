// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Composer/Handlers/Speech/ComposerSpeechDefaultHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComposerSpeechDefaultHandler() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_AWitTtsSpeaker_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UComposerSpeechDefaultHandler();
	WIT_API UClass* Z_Construct_UClass_UComposerSpeechDefaultHandler_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UComposerSpeechHandler();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FComposerSpeaker();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComposerSpeaker;
class UScriptStruct* FComposerSpeaker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComposerSpeaker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComposerSpeaker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComposerSpeaker, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("ComposerSpeaker"));
	}
	return Z_Registration_Info_UScriptStruct_ComposerSpeaker.OuterSingleton;
}
template<> WIT_API UScriptStruct* StaticStruct<FComposerSpeaker>()
{
	return FComposerSpeaker::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComposerSpeaker_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SpeakerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Speaker;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComposerSpeaker_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Provides a mapping between speaker name and speaker\n */" },
		{ "ModuleRelativePath", "Public/Composer/Handlers/Speech/ComposerSpeechDefaultHandler.h" },
		{ "ToolTip", "Provides a mapping between speaker name and speaker" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComposerSpeaker_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComposerSpeaker>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComposerSpeaker_Statics::NewProp_SpeakerName_MetaData[] = {
		{ "Category", "Composer" },
		{ "Comment", "/** The speaker's name */" },
		{ "ModuleRelativePath", "Public/Composer/Handlers/Speech/ComposerSpeechDefaultHandler.h" },
		{ "ToolTip", "The speaker's name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComposerSpeaker_Statics::NewProp_SpeakerName = { "SpeakerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComposerSpeaker, SpeakerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FComposerSpeaker_Statics::NewProp_SpeakerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComposerSpeaker_Statics::NewProp_SpeakerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComposerSpeaker_Statics::NewProp_Speaker_MetaData[] = {
		{ "Category", "Composer" },
		{ "Comment", "/** The associated speaker actor to use */" },
		{ "ModuleRelativePath", "Public/Composer/Handlers/Speech/ComposerSpeechDefaultHandler.h" },
		{ "ToolTip", "The associated speaker actor to use" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FComposerSpeaker_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComposerSpeaker, Speaker), Z_Construct_UClass_AWitTtsSpeaker_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FComposerSpeaker_Statics::NewProp_Speaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComposerSpeaker_Statics::NewProp_Speaker_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComposerSpeaker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComposerSpeaker_Statics::NewProp_SpeakerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComposerSpeaker_Statics::NewProp_Speaker,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComposerSpeaker_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		&NewStructOps,
		"ComposerSpeaker",
		sizeof(FComposerSpeaker),
		alignof(FComposerSpeaker),
		Z_Construct_UScriptStruct_FComposerSpeaker_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComposerSpeaker_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComposerSpeaker_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComposerSpeaker_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComposerSpeaker()
	{
		if (!Z_Registration_Info_UScriptStruct_ComposerSpeaker.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComposerSpeaker.InnerSingleton, Z_Construct_UScriptStruct_FComposerSpeaker_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComposerSpeaker.InnerSingleton;
	}
	void UComposerSpeechDefaultHandler::StaticRegisterNativesUComposerSpeechDefaultHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComposerSpeechDefaultHandler);
	UClass* Z_Construct_UClass_UComposerSpeechDefaultHandler_NoRegister()
	{
		return UComposerSpeechDefaultHandler::StaticClass();
	}
	struct Z_Construct_UClass_UComposerSpeechDefaultHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerNameContextMapKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SpeakerNameContextMapKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Speakers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speakers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Speakers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComposerSpeechDefaultHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComposerSpeechHandler,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposerSpeechDefaultHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Meta" },
		{ "Comment", "/**\n * Default class for implementing a composer action handler. \n */" },
		{ "IncludePath", "Composer/Handlers/Speech/ComposerSpeechDefaultHandler.h" },
		{ "ModuleRelativePath", "Public/Composer/Handlers/Speech/ComposerSpeechDefaultHandler.h" },
		{ "ToolTip", "Default class for implementing a composer action handler." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposerSpeechDefaultHandler_Statics::NewProp_SpeakerNameContextMapKey_MetaData[] = {
		{ "Category", "Composer|Speaker" },
		{ "Comment", "/**\n\x09 * The key to use to lookup the speaker name in the context map\n\x09 */" },
		{ "ModuleRelativePath", "Public/Composer/Handlers/Speech/ComposerSpeechDefaultHandler.h" },
		{ "ToolTip", "The key to use to lookup the speaker name in the context map" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UComposerSpeechDefaultHandler_Statics::NewProp_SpeakerNameContextMapKey = { "SpeakerNameContextMapKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposerSpeechDefaultHandler, SpeakerNameContextMapKey), METADATA_PARAMS(Z_Construct_UClass_UComposerSpeechDefaultHandler_Statics::NewProp_SpeakerNameContextMapKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposerSpeechDefaultHandler_Statics::NewProp_SpeakerNameContextMapKey_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComposerSpeechDefaultHandler_Statics::NewProp_Speakers_Inner = { "Speakers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FComposerSpeaker, METADATA_PARAMS(nullptr, 0) }; // 3725097147
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposerSpeechDefaultHandler_Statics::NewProp_Speakers_MetaData[] = {
		{ "Category", "Composer|Speaker" },
		{ "Comment", "/**\n\x09 * The speakers that are available to be activated \n\x09 */" },
		{ "ModuleRelativePath", "Public/Composer/Handlers/Speech/ComposerSpeechDefaultHandler.h" },
		{ "ToolTip", "The speakers that are available to be activated" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComposerSpeechDefaultHandler_Statics::NewProp_Speakers = { "Speakers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposerSpeechDefaultHandler, Speakers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UComposerSpeechDefaultHandler_Statics::NewProp_Speakers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposerSpeechDefaultHandler_Statics::NewProp_Speakers_MetaData)) }; // 3725097147
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComposerSpeechDefaultHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposerSpeechDefaultHandler_Statics::NewProp_SpeakerNameContextMapKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposerSpeechDefaultHandler_Statics::NewProp_Speakers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposerSpeechDefaultHandler_Statics::NewProp_Speakers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComposerSpeechDefaultHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComposerSpeechDefaultHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComposerSpeechDefaultHandler_Statics::ClassParams = {
		&UComposerSpeechDefaultHandler::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComposerSpeechDefaultHandler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComposerSpeechDefaultHandler_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UComposerSpeechDefaultHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComposerSpeechDefaultHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComposerSpeechDefaultHandler()
	{
		if (!Z_Registration_Info_UClass_UComposerSpeechDefaultHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComposerSpeechDefaultHandler.OuterSingleton, Z_Construct_UClass_UComposerSpeechDefaultHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComposerSpeechDefaultHandler.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<UComposerSpeechDefaultHandler>()
	{
		return UComposerSpeechDefaultHandler::StaticClass();
	}
	UComposerSpeechDefaultHandler::UComposerSpeechDefaultHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComposerSpeechDefaultHandler);
	UComposerSpeechDefaultHandler::~UComposerSpeechDefaultHandler() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Handlers_Speech_ComposerSpeechDefaultHandler_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Handlers_Speech_ComposerSpeechDefaultHandler_h_Statics::ScriptStructInfo[] = {
		{ FComposerSpeaker::StaticStruct, Z_Construct_UScriptStruct_FComposerSpeaker_Statics::NewStructOps, TEXT("ComposerSpeaker"), &Z_Registration_Info_UScriptStruct_ComposerSpeaker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComposerSpeaker), 3725097147U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Handlers_Speech_ComposerSpeechDefaultHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComposerSpeechDefaultHandler, UComposerSpeechDefaultHandler::StaticClass, TEXT("UComposerSpeechDefaultHandler"), &Z_Registration_Info_UClass_UComposerSpeechDefaultHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComposerSpeechDefaultHandler), 2744002417U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Handlers_Speech_ComposerSpeechDefaultHandler_h_225366705(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Handlers_Speech_ComposerSpeechDefaultHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Handlers_Speech_ComposerSpeechDefaultHandler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Handlers_Speech_ComposerSpeechDefaultHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Handlers_Speech_ComposerSpeechDefaultHandler_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
