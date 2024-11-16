// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tool/ConfigurationEditor/SWitConfigurationEditorTab.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSWitConfigurationEditorTab() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_WitEditor();
	WIT_API UClass* Z_Construct_UClass_UWitAppConfigurationAsset_NoRegister();
	WITEDITOR_API UClass* Z_Construct_UClass_UWitEditedConfiguration();
	WITEDITOR_API UClass* Z_Construct_UClass_UWitEditedConfiguration_NoRegister();
// End Cross Module References
	void UWitEditedConfiguration::StaticRegisterNativesUWitEditedConfiguration()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWitEditedConfiguration);
	UClass* Z_Construct_UClass_UWitEditedConfiguration_NoRegister()
	{
		return UWitEditedConfiguration::StaticClass();
	}
	struct Z_Construct_UClass_UWitEditedConfiguration_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Configuration_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Configuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWitEditedConfiguration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WitEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWitEditedConfiguration_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UObject representation of the sdk settings\n */" },
		{ "IncludePath", "Tool/ConfigurationEditor/SWitConfigurationEditorTab.h" },
		{ "ModuleRelativePath", "Private/Tool/ConfigurationEditor/SWitConfigurationEditorTab.h" },
		{ "ToolTip", "UObject representation of the sdk settings" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWitEditedConfiguration_Statics::NewProp_Configuration_MetaData[] = {
		{ "Category", "Selected" },
		{ "Comment", "/** The configuration currently being edited */" },
		{ "ModuleRelativePath", "Private/Tool/ConfigurationEditor/SWitConfigurationEditorTab.h" },
		{ "ToolTip", "The configuration currently being edited" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWitEditedConfiguration_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWitEditedConfiguration, Configuration), Z_Construct_UClass_UWitAppConfigurationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWitEditedConfiguration_Statics::NewProp_Configuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWitEditedConfiguration_Statics::NewProp_Configuration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWitEditedConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWitEditedConfiguration_Statics::NewProp_Configuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWitEditedConfiguration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWitEditedConfiguration>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWitEditedConfiguration_Statics::ClassParams = {
		&UWitEditedConfiguration::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWitEditedConfiguration_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWitEditedConfiguration_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWitEditedConfiguration_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWitEditedConfiguration_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWitEditedConfiguration()
	{
		if (!Z_Registration_Info_UClass_UWitEditedConfiguration.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWitEditedConfiguration.OuterSingleton, Z_Construct_UClass_UWitEditedConfiguration_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWitEditedConfiguration.OuterSingleton;
	}
	template<> WITEDITOR_API UClass* StaticClass<UWitEditedConfiguration>()
	{
		return UWitEditedConfiguration::StaticClass();
	}
	UWitEditedConfiguration::UWitEditedConfiguration(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWitEditedConfiguration);
	UWitEditedConfiguration::~UWitEditedConfiguration() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_WitEditor_Private_Tool_ConfigurationEditor_SWitConfigurationEditorTab_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_WitEditor_Private_Tool_ConfigurationEditor_SWitConfigurationEditorTab_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWitEditedConfiguration, UWitEditedConfiguration::StaticClass, TEXT("UWitEditedConfiguration"), &Z_Registration_Info_UClass_UWitEditedConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWitEditedConfiguration), 3324866248U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_WitEditor_Private_Tool_ConfigurationEditor_SWitConfigurationEditorTab_h_3301407705(TEXT("/Script/WitEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_WitEditor_Private_Tool_ConfigurationEditor_SWitConfigurationEditorTab_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_WitEditor_Private_Tool_ConfigurationEditor_SWitConfigurationEditorTab_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
