// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Wit/Request/WitRequestSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWitRequestSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_UWitRequestSubsystem();
	WIT_API UClass* Z_Construct_UClass_UWitRequestSubsystem_NoRegister();
// End Cross Module References
	void UWitRequestSubsystem::StaticRegisterNativesUWitRequestSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWitRequestSubsystem);
	UClass* Z_Construct_UClass_UWitRequestSubsystem_NoRegister()
	{
		return UWitRequestSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UWitRequestSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWitRequestSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWitRequestSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A class to track an in progress Wit.ai request. It essentially wraps a UE4 HTTP request\n * while also providing a streaming read buffer\n */" },
		{ "IncludePath", "Wit/Request/WitRequestSubsystem.h" },
		{ "ModuleRelativePath", "Private/Wit/Request/WitRequestSubsystem.h" },
		{ "ToolTip", "A class to track an in progress Wit.ai request. It essentially wraps a UE4 HTTP request\nwhile also providing a streaming read buffer" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWitRequestSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWitRequestSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWitRequestSubsystem_Statics::ClassParams = {
		&UWitRequestSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWitRequestSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWitRequestSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWitRequestSubsystem()
	{
		if (!Z_Registration_Info_UClass_UWitRequestSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWitRequestSubsystem.OuterSingleton, Z_Construct_UClass_UWitRequestSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWitRequestSubsystem.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<UWitRequestSubsystem>()
	{
		return UWitRequestSubsystem::StaticClass();
	}
	UWitRequestSubsystem::UWitRequestSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWitRequestSubsystem);
	UWitRequestSubsystem::~UWitRequestSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Private_Wit_Request_WitRequestSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Private_Wit_Request_WitRequestSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWitRequestSubsystem, UWitRequestSubsystem::StaticClass, TEXT("UWitRequestSubsystem"), &Z_Registration_Info_UClass_UWitRequestSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWitRequestSubsystem), 808395341U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Private_Wit_Request_WitRequestSubsystem_h_1228088805(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Private_Wit_Request_WitRequestSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Private_Wit_Request_WitRequestSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
