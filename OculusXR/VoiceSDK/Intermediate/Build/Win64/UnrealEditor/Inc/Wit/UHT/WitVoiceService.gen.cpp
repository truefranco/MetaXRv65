// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wit/Voice/WitVoiceService.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWitVoiceService() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_UVoiceService();
	WIT_API UClass* Z_Construct_UClass_UWitVoiceService();
	WIT_API UClass* Z_Construct_UClass_UWitVoiceService_NoRegister();
// End Cross Module References
	void UWitVoiceService::StaticRegisterNativesUWitVoiceService()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWitVoiceService);
	UClass* Z_Construct_UClass_UWitVoiceService_NoRegister()
	{
		return UWitVoiceService::StaticClass();
	}
	struct Z_Construct_UClass_UWitVoiceService_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWitVoiceService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoiceService,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWitVoiceService_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Meta" },
		{ "Comment", "/**\n * Component that encapsulates the Wit Voice Command API. Provides functionality for making speech and message requests\n * to Wit.ai to interpret and extract meaning. To use it simply attach the UWitVoiceService component in the hierarchy of any Actor\n */" },
		{ "IncludePath", "Wit/Voice/WitVoiceService.h" },
		{ "ModuleRelativePath", "Public/Wit/Voice/WitVoiceService.h" },
		{ "ToolTip", "Component that encapsulates the Wit Voice Command API. Provides functionality for making speech and message requests\nto Wit.ai to interpret and extract meaning. To use it simply attach the UWitVoiceService component in the hierarchy of any Actor" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWitVoiceService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWitVoiceService>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWitVoiceService_Statics::ClassParams = {
		&UWitVoiceService::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWitVoiceService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWitVoiceService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWitVoiceService()
	{
		if (!Z_Registration_Info_UClass_UWitVoiceService.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWitVoiceService.OuterSingleton, Z_Construct_UClass_UWitVoiceService_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWitVoiceService.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<UWitVoiceService>()
	{
		return UWitVoiceService::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWitVoiceService);
	UWitVoiceService::~UWitVoiceService() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Voice_WitVoiceService_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Voice_WitVoiceService_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWitVoiceService, UWitVoiceService::StaticClass, TEXT("UWitVoiceService"), &Z_Registration_Info_UClass_UWitVoiceService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWitVoiceService), 1490159011U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Voice_WitVoiceService_h_318523659(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Voice_WitVoiceService_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Voice_WitVoiceService_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
