// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voice/Platform/PlatformVoiceService.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformVoiceService() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VoiceSDK();
	VOICESDK_API UClass* Z_Construct_UClass_UPlatformVoiceService();
	VOICESDK_API UClass* Z_Construct_UClass_UPlatformVoiceService_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UVoiceService();
// End Cross Module References
	void UPlatformVoiceService::StaticRegisterNativesUPlatformVoiceService()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlatformVoiceService);
	UClass* Z_Construct_UClass_UPlatformVoiceService_NoRegister()
	{
		return UPlatformVoiceService::StaticClass();
	}
	struct Z_Construct_UClass_UPlatformVoiceService_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlatformVoiceService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoiceService,
		(UObject* (*)())Z_Construct_UPackage__Script_VoiceSDK,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformVoiceService_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Meta" },
		{ "IncludePath", "Voice/Platform/PlatformVoiceService.h" },
		{ "ModuleRelativePath", "Public/Voice/Platform/PlatformVoiceService.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlatformVoiceService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlatformVoiceService>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlatformVoiceService_Statics::ClassParams = {
		&UPlatformVoiceService::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlatformVoiceService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformVoiceService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlatformVoiceService()
	{
		if (!Z_Registration_Info_UClass_UPlatformVoiceService.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlatformVoiceService.OuterSingleton, Z_Construct_UClass_UPlatformVoiceService_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlatformVoiceService.OuterSingleton;
	}
	template<> VOICESDK_API UClass* StaticClass<UPlatformVoiceService>()
	{
		return UPlatformVoiceService::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformVoiceService);
	UPlatformVoiceService::~UPlatformVoiceService() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_VoiceSDK_Public_Voice_Platform_PlatformVoiceService_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_VoiceSDK_Public_Voice_Platform_PlatformVoiceService_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlatformVoiceService, UPlatformVoiceService::StaticClass, TEXT("UPlatformVoiceService"), &Z_Registration_Info_UClass_UPlatformVoiceService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlatformVoiceService), 42887983U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_VoiceSDK_Public_Voice_Platform_PlatformVoiceService_h_2496965231(TEXT("/Script/VoiceSDK"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_VoiceSDK_Public_Voice_Platform_PlatformVoiceService_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_VoiceSDK_Public_Voice_Platform_PlatformVoiceService_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
