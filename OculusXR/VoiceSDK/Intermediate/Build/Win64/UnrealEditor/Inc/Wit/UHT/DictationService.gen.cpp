// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dictation/Service/DictationService.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDictationService() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_UDictationEvents_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UDictationService();
	WIT_API UClass* Z_Construct_UClass_UDictationService_NoRegister();
// End Cross Module References
	void UDictationService::StaticRegisterNativesUDictationService()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDictationService);
	UClass* Z_Construct_UClass_UDictationService_NoRegister()
	{
		return UDictationService::StaticClass();
	}
	struct Z_Construct_UClass_UDictationService_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Events;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDictationService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDictationService_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Meta" },
		{ "Comment", "/**\n * Base class implementation of a dictation service\n */" },
		{ "IncludePath", "Dictation/Service/DictationService.h" },
		{ "ModuleRelativePath", "Public/Dictation/Service/DictationService.h" },
		{ "ToolTip", "Base class implementation of a dictation service" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDictationService_Statics::NewProp_Events_MetaData[] = {
		{ "Comment", "/**\n\x09 * The events that this service should use in callbacks\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Dictation/Service/DictationService.h" },
		{ "ToolTip", "The events that this service should use in callbacks" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDictationService_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0020080000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDictationService, Events), Z_Construct_UClass_UDictationEvents_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDictationService_Statics::NewProp_Events_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDictationService_Statics::NewProp_Events_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDictationService_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDictationService_Statics::NewProp_Events,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDictationService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDictationService>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDictationService_Statics::ClassParams = {
		&UDictationService::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDictationService_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDictationService_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UDictationService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDictationService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDictationService()
	{
		if (!Z_Registration_Info_UClass_UDictationService.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDictationService.OuterSingleton, Z_Construct_UClass_UDictationService_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDictationService.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<UDictationService>()
	{
		return UDictationService::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDictationService);
	UDictationService::~UDictationService() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Dictation_Service_DictationService_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Dictation_Service_DictationService_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDictationService, UDictationService::StaticClass, TEXT("UDictationService"), &Z_Registration_Info_UClass_UDictationService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDictationService), 144492725U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Dictation_Service_DictationService_h_1306042250(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Dictation_Service_DictationService_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Dictation_Service_DictationService_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
