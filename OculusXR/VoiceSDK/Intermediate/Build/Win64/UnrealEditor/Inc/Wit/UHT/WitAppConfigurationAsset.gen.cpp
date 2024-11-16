// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wit/Configuration/WitAppConfigurationAsset.h"
#include "Voice/Configuration/VoiceConfiguration.h"
#include "Wit/Configuration/WitAppConfiguration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWitAppConfigurationAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_UWitAppConfigurationAsset();
	WIT_API UClass* Z_Construct_UClass_UWitAppConfigurationAsset_NoRegister();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FVoiceConfiguration();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitAppConfiguration();
// End Cross Module References
	void UWitAppConfigurationAsset::StaticRegisterNativesUWitAppConfigurationAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWitAppConfigurationAsset);
	UClass* Z_Construct_UClass_UWitAppConfigurationAsset_NoRegister()
	{
		return UWitAppConfigurationAsset::StaticClass();
	}
	struct Z_Construct_UClass_UWitAppConfigurationAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Application_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Application;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Voice_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Voice;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWitAppConfigurationAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWitAppConfigurationAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A simple data asset that stores the binary representation of a clip\n */" },
		{ "IncludePath", "Wit/Configuration/WitAppConfigurationAsset.h" },
		{ "ModuleRelativePath", "Public/Wit/Configuration/WitAppConfigurationAsset.h" },
		{ "ToolTip", "A simple data asset that stores the binary representation of a clip" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWitAppConfigurationAsset_Statics::NewProp_Application_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/** The general application configuration */" },
		{ "ModuleRelativePath", "Public/Wit/Configuration/WitAppConfigurationAsset.h" },
		{ "ToolTip", "The general application configuration" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWitAppConfigurationAsset_Statics::NewProp_Application = { "Application", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWitAppConfigurationAsset, Application), Z_Construct_UScriptStruct_FWitAppConfiguration, METADATA_PARAMS(Z_Construct_UClass_UWitAppConfigurationAsset_Statics::NewProp_Application_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWitAppConfigurationAsset_Statics::NewProp_Application_MetaData)) }; // 3839312586
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWitAppConfigurationAsset_Statics::NewProp_Voice_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "//** Speech endpoint configuration */\n" },
		{ "ModuleRelativePath", "Public/Wit/Configuration/WitAppConfigurationAsset.h" },
		{ "ToolTip", "/ Speech endpoint configuration" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWitAppConfigurationAsset_Statics::NewProp_Voice = { "Voice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWitAppConfigurationAsset, Voice), Z_Construct_UScriptStruct_FVoiceConfiguration, METADATA_PARAMS(Z_Construct_UClass_UWitAppConfigurationAsset_Statics::NewProp_Voice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWitAppConfigurationAsset_Statics::NewProp_Voice_MetaData)) }; // 2144799283
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWitAppConfigurationAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWitAppConfigurationAsset_Statics::NewProp_Application,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWitAppConfigurationAsset_Statics::NewProp_Voice,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWitAppConfigurationAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWitAppConfigurationAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWitAppConfigurationAsset_Statics::ClassParams = {
		&UWitAppConfigurationAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWitAppConfigurationAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWitAppConfigurationAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWitAppConfigurationAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWitAppConfigurationAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWitAppConfigurationAsset()
	{
		if (!Z_Registration_Info_UClass_UWitAppConfigurationAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWitAppConfigurationAsset.OuterSingleton, Z_Construct_UClass_UWitAppConfigurationAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWitAppConfigurationAsset.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<UWitAppConfigurationAsset>()
	{
		return UWitAppConfigurationAsset::StaticClass();
	}
	UWitAppConfigurationAsset::UWitAppConfigurationAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWitAppConfigurationAsset);
	UWitAppConfigurationAsset::~UWitAppConfigurationAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Configuration_WitAppConfigurationAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Configuration_WitAppConfigurationAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWitAppConfigurationAsset, UWitAppConfigurationAsset::StaticClass, TEXT("UWitAppConfigurationAsset"), &Z_Registration_Info_UClass_UWitAppConfigurationAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWitAppConfigurationAsset), 478452829U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Configuration_WitAppConfigurationAsset_h_3222094058(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Configuration_WitAppConfigurationAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Configuration_WitAppConfigurationAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
