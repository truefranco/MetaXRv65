// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Composer/Handlers/Speech/ComposerSpeechHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComposerSpeechHandler() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_UComposerSpeechHandler();
	WIT_API UClass* Z_Construct_UClass_UComposerSpeechHandler_NoRegister();
// End Cross Module References
	void UComposerSpeechHandler::StaticRegisterNativesUComposerSpeechHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComposerSpeechHandler);
	UClass* Z_Construct_UClass_UComposerSpeechHandler_NoRegister()
	{
		return UComposerSpeechHandler::StaticClass();
	}
	struct Z_Construct_UClass_UComposerSpeechHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComposerSpeechHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposerSpeechHandler_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Abstract class for implementing a composer action handler. This should be the base if you want to implement your own action handler implementation\n */" },
		{ "IncludePath", "Composer/Handlers/Speech/ComposerSpeechHandler.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Composer/Handlers/Speech/ComposerSpeechHandler.h" },
		{ "ToolTip", "Abstract class for implementing a composer action handler. This should be the base if you want to implement your own action handler implementation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComposerSpeechHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComposerSpeechHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComposerSpeechHandler_Statics::ClassParams = {
		&UComposerSpeechHandler::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UComposerSpeechHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComposerSpeechHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComposerSpeechHandler()
	{
		if (!Z_Registration_Info_UClass_UComposerSpeechHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComposerSpeechHandler.OuterSingleton, Z_Construct_UClass_UComposerSpeechHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComposerSpeechHandler.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<UComposerSpeechHandler>()
	{
		return UComposerSpeechHandler::StaticClass();
	}
	UComposerSpeechHandler::UComposerSpeechHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComposerSpeechHandler);
	UComposerSpeechHandler::~UComposerSpeechHandler() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Handlers_Speech_ComposerSpeechHandler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Handlers_Speech_ComposerSpeechHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComposerSpeechHandler, UComposerSpeechHandler::StaticClass, TEXT("UComposerSpeechHandler"), &Z_Registration_Info_UClass_UComposerSpeechHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComposerSpeechHandler), 2861886904U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Handlers_Speech_ComposerSpeechHandler_h_108597032(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Handlers_Speech_ComposerSpeechHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Handlers_Speech_ComposerSpeechHandler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
