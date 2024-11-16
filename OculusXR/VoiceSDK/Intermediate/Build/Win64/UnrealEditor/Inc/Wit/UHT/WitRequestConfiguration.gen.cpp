// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wit/Request/WitRequestConfiguration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWitRequestConfiguration() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitRequestConfiguration();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WitRequestConfiguration;
class UScriptStruct* FWitRequestConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WitRequestConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WitRequestConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWitRequestConfiguration, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("WitRequestConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_WitRequestConfiguration.OuterSingleton;
}
template<> WIT_API UScriptStruct* StaticStruct<FWitRequestConfiguration>()
{
	return FWitRequestConfiguration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWitRequestConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitRequestConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A compact configuration for setting up a Wit.ai request. Use the methods in FWitRequestBuilder to construct this\n */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitRequestConfiguration.h" },
		{ "ToolTip", "A compact configuration for setting up a Wit.ai request. Use the methods in FWitRequestBuilder to construct this" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWitRequestConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWitRequestConfiguration>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWitRequestConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		&NewStructOps,
		"WitRequestConfiguration",
		sizeof(FWitRequestConfiguration),
		alignof(FWitRequestConfiguration),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWitRequestConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitRequestConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWitRequestConfiguration()
	{
		if (!Z_Registration_Info_UScriptStruct_WitRequestConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WitRequestConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FWitRequestConfiguration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WitRequestConfiguration.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitRequestConfiguration_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitRequestConfiguration_h_Statics::ScriptStructInfo[] = {
		{ FWitRequestConfiguration::StaticStruct, Z_Construct_UScriptStruct_FWitRequestConfiguration_Statics::NewStructOps, TEXT("WitRequestConfiguration"), &Z_Registration_Info_UScriptStruct_WitRequestConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWitRequestConfiguration), 3918665097U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitRequestConfiguration_h_1515228547(TEXT("/Script/Wit"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitRequestConfiguration_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitRequestConfiguration_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
