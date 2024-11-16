// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voice/Service/VoiceService.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoiceService() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_UVoiceEvents_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UVoiceService();
	WIT_API UClass* Z_Construct_UClass_UVoiceService_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UWitAppConfigurationAsset_NoRegister();
// End Cross Module References
	void UVoiceService::StaticRegisterNativesUVoiceService()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoiceService);
	UClass* Z_Construct_UClass_UVoiceService_NoRegister()
	{
		return UVoiceService::StaticClass();
	}
	struct Z_Construct_UClass_UVoiceService_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Configuration_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Configuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Events;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoiceService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceService_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Meta" },
		{ "Comment", "/**\n * Base class implementation of a voice service\n */" },
		{ "IncludePath", "Voice/Service/VoiceService.h" },
		{ "ModuleRelativePath", "Public/Voice/Service/VoiceService.h" },
		{ "ToolTip", "Base class implementation of a voice service" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceService_Statics::NewProp_Configuration_MetaData[] = {
		{ "Comment", "/**\n\x09 * The configuration that this service should use\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Service/VoiceService.h" },
		{ "ToolTip", "The configuration that this service should use" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoiceService_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceService, Configuration), Z_Construct_UClass_UWitAppConfigurationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoiceService_Statics::NewProp_Configuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceService_Statics::NewProp_Configuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceService_Statics::NewProp_Events_MetaData[] = {
		{ "Comment", "/**\n\x09 * The events that this service should use in callbacks\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Voice/Service/VoiceService.h" },
		{ "ToolTip", "The events that this service should use in callbacks" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoiceService_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0020080000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceService, Events), Z_Construct_UClass_UVoiceEvents_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoiceService_Statics::NewProp_Events_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceService_Statics::NewProp_Events_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoiceService_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceService_Statics::NewProp_Configuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceService_Statics::NewProp_Events,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoiceService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoiceService>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoiceService_Statics::ClassParams = {
		&UVoiceService::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoiceService_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceService_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UVoiceService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoiceService()
	{
		if (!Z_Registration_Info_UClass_UVoiceService.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoiceService.OuterSingleton, Z_Construct_UClass_UVoiceService_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoiceService.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<UVoiceService>()
	{
		return UVoiceService::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoiceService);
	UVoiceService::~UVoiceService() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Service_VoiceService_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Service_VoiceService_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoiceService, UVoiceService::StaticClass, TEXT("UVoiceService"), &Z_Registration_Info_UClass_UVoiceService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoiceService), 19612102U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Service_VoiceService_h_1894363739(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Service_VoiceService_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Service_VoiceService_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
