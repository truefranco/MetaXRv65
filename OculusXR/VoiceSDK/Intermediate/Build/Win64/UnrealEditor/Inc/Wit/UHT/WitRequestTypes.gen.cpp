// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wit/Request/WitRequestTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWitRequestTypes() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UEnum* Z_Construct_UEnum_Wit_EWitParameter();
	WIT_API UEnum* Z_Construct_UEnum_Wit_EWitRequestEncoding();
	WIT_API UEnum* Z_Construct_UEnum_Wit_EWitRequestEndian();
	WIT_API UEnum* Z_Construct_UEnum_Wit_EWitRequestEndpoint();
	WIT_API UEnum* Z_Construct_UEnum_Wit_EWitRequestFormat();
	WIT_API UEnum* Z_Construct_UEnum_Wit_EWitRequestSampleSize();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWitRequestEndpoint;
	static UEnum* EWitRequestEndpoint_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWitRequestEndpoint.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWitRequestEndpoint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Wit_EWitRequestEndpoint, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("EWitRequestEndpoint"));
		}
		return Z_Registration_Info_UEnum_EWitRequestEndpoint.OuterSingleton;
	}
	template<> WIT_API UEnum* StaticEnum<EWitRequestEndpoint>()
	{
		return EWitRequestEndpoint_StaticEnum();
	}
	struct Z_Construct_UEnum_Wit_EWitRequestEndpoint_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Wit_EWitRequestEndpoint_Statics::Enumerators[] = {
		{ "EWitRequestEndpoint::Speech", (int64)EWitRequestEndpoint::Speech },
		{ "EWitRequestEndpoint::Message", (int64)EWitRequestEndpoint::Message },
		{ "EWitRequestEndpoint::Synthesize", (int64)EWitRequestEndpoint::Synthesize },
		{ "EWitRequestEndpoint::GetVoices", (int64)EWitRequestEndpoint::GetVoices },
		{ "EWitRequestEndpoint::Converse", (int64)EWitRequestEndpoint::Converse },
		{ "EWitRequestEndpoint::Event", (int64)EWitRequestEndpoint::Event },
		{ "EWitRequestEndpoint::GetApps", (int64)EWitRequestEndpoint::GetApps },
		{ "EWitRequestEndpoint::GetEntities", (int64)EWitRequestEndpoint::GetEntities },
		{ "EWitRequestEndpoint::GetIntents", (int64)EWitRequestEndpoint::GetIntents },
		{ "EWitRequestEndpoint::GetTraits", (int64)EWitRequestEndpoint::GetTraits },
		{ "EWitRequestEndpoint::ClientToken", (int64)EWitRequestEndpoint::ClientToken },
		{ "EWitRequestEndpoint::Dictation", (int64)EWitRequestEndpoint::Dictation },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Wit_EWitRequestEndpoint_Statics::Enum_MetaDataParams[] = {
		{ "ClientToken.Name", "EWitRequestEndpoint::ClientToken" },
		{ "Comment", "/**\n * A list of the available endpoints for Wit.ai.\n */" },
		{ "Converse.Name", "EWitRequestEndpoint::Converse" },
		{ "Dictation.Name", "EWitRequestEndpoint::Dictation" },
		{ "Event.Name", "EWitRequestEndpoint::Event" },
		{ "GetApps.Name", "EWitRequestEndpoint::GetApps" },
		{ "GetEntities.Name", "EWitRequestEndpoint::GetEntities" },
		{ "GetIntents.Name", "EWitRequestEndpoint::GetIntents" },
		{ "GetTraits.Name", "EWitRequestEndpoint::GetTraits" },
		{ "GetVoices.Name", "EWitRequestEndpoint::GetVoices" },
		{ "Message.Name", "EWitRequestEndpoint::Message" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitRequestTypes.h" },
		{ "Speech.Name", "EWitRequestEndpoint::Speech" },
		{ "Synthesize.Name", "EWitRequestEndpoint::Synthesize" },
		{ "ToolTip", "A list of the available endpoints for Wit.ai." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Wit_EWitRequestEndpoint_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		"EWitRequestEndpoint",
		"EWitRequestEndpoint",
		Z_Construct_UEnum_Wit_EWitRequestEndpoint_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Wit_EWitRequestEndpoint_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Wit_EWitRequestEndpoint_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Wit_EWitRequestEndpoint_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Wit_EWitRequestEndpoint()
	{
		if (!Z_Registration_Info_UEnum_EWitRequestEndpoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWitRequestEndpoint.InnerSingleton, Z_Construct_UEnum_Wit_EWitRequestEndpoint_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWitRequestEndpoint.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWitParameter;
	static UEnum* EWitParameter_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWitParameter.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWitParameter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Wit_EWitParameter, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("EWitParameter"));
		}
		return Z_Registration_Info_UEnum_EWitParameter.OuterSingleton;
	}
	template<> WIT_API UEnum* StaticEnum<EWitParameter>()
	{
		return EWitParameter_StaticEnum();
	}
	struct Z_Construct_UEnum_Wit_EWitParameter_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Wit_EWitParameter_Statics::Enumerators[] = {
		{ "EWitParameter::Text", (int64)EWitParameter::Text },
		{ "EWitParameter::SessionId", (int64)EWitParameter::SessionId },
		{ "EWitParameter::ContextMap", (int64)EWitParameter::ContextMap },
		{ "EWitParameter::Offset", (int64)EWitParameter::Offset },
		{ "EWitParameter::Limit", (int64)EWitParameter::Limit },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Wit_EWitParameter_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * A list of the available parameters for Wit.ai\n */" },
		{ "ContextMap.Name", "EWitParameter::ContextMap" },
		{ "Limit.Name", "EWitParameter::Limit" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitRequestTypes.h" },
		{ "Offset.Name", "EWitParameter::Offset" },
		{ "SessionId.Name", "EWitParameter::SessionId" },
		{ "Text.Name", "EWitParameter::Text" },
		{ "ToolTip", "A list of the available parameters for Wit.ai" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Wit_EWitParameter_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		"EWitParameter",
		"EWitParameter",
		Z_Construct_UEnum_Wit_EWitParameter_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Wit_EWitParameter_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Wit_EWitParameter_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Wit_EWitParameter_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Wit_EWitParameter()
	{
		if (!Z_Registration_Info_UEnum_EWitParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWitParameter.InnerSingleton, Z_Construct_UEnum_Wit_EWitParameter_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWitParameter.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWitRequestFormat;
	static UEnum* EWitRequestFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWitRequestFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWitRequestFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Wit_EWitRequestFormat, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("EWitRequestFormat"));
		}
		return Z_Registration_Info_UEnum_EWitRequestFormat.OuterSingleton;
	}
	template<> WIT_API UEnum* StaticEnum<EWitRequestFormat>()
	{
		return EWitRequestFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_Wit_EWitRequestFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Wit_EWitRequestFormat_Statics::Enumerators[] = {
		{ "EWitRequestFormat::Raw", (int64)EWitRequestFormat::Raw },
		{ "EWitRequestFormat::Wav", (int64)EWitRequestFormat::Wav },
		{ "EWitRequestFormat::Json", (int64)EWitRequestFormat::Json },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Wit_EWitRequestFormat_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * A list of the available audio formats for the /speech endpoint of Wit.ai.\n */" },
		{ "Json.Name", "EWitRequestFormat::Json" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitRequestTypes.h" },
		{ "Raw.Name", "EWitRequestFormat::Raw" },
		{ "ToolTip", "A list of the available audio formats for the /speech endpoint of Wit.ai." },
		{ "Wav.Name", "EWitRequestFormat::Wav" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Wit_EWitRequestFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		"EWitRequestFormat",
		"EWitRequestFormat",
		Z_Construct_UEnum_Wit_EWitRequestFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Wit_EWitRequestFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Wit_EWitRequestFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Wit_EWitRequestFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Wit_EWitRequestFormat()
	{
		if (!Z_Registration_Info_UEnum_EWitRequestFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWitRequestFormat.InnerSingleton, Z_Construct_UEnum_Wit_EWitRequestFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWitRequestFormat.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWitRequestEncoding;
	static UEnum* EWitRequestEncoding_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWitRequestEncoding.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWitRequestEncoding.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Wit_EWitRequestEncoding, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("EWitRequestEncoding"));
		}
		return Z_Registration_Info_UEnum_EWitRequestEncoding.OuterSingleton;
	}
	template<> WIT_API UEnum* StaticEnum<EWitRequestEncoding>()
	{
		return EWitRequestEncoding_StaticEnum();
	}
	struct Z_Construct_UEnum_Wit_EWitRequestEncoding_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Wit_EWitRequestEncoding_Statics::Enumerators[] = {
		{ "EWitRequestEncoding::SignedInteger", (int64)EWitRequestEncoding::SignedInteger },
		{ "EWitRequestEncoding::FloatingPoint", (int64)EWitRequestEncoding::FloatingPoint },
		{ "EWitRequestEncoding::UnsignedInteger", (int64)EWitRequestEncoding::UnsignedInteger },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Wit_EWitRequestEncoding_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * A list of the available audio encodings for the /speech endpoint of Wit.ai.\n */" },
		{ "FloatingPoint.Name", "EWitRequestEncoding::FloatingPoint" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitRequestTypes.h" },
		{ "SignedInteger.Name", "EWitRequestEncoding::SignedInteger" },
		{ "ToolTip", "A list of the available audio encodings for the /speech endpoint of Wit.ai." },
		{ "UnsignedInteger.Name", "EWitRequestEncoding::UnsignedInteger" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Wit_EWitRequestEncoding_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		"EWitRequestEncoding",
		"EWitRequestEncoding",
		Z_Construct_UEnum_Wit_EWitRequestEncoding_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Wit_EWitRequestEncoding_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Wit_EWitRequestEncoding_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Wit_EWitRequestEncoding_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Wit_EWitRequestEncoding()
	{
		if (!Z_Registration_Info_UEnum_EWitRequestEncoding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWitRequestEncoding.InnerSingleton, Z_Construct_UEnum_Wit_EWitRequestEncoding_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWitRequestEncoding.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWitRequestSampleSize;
	static UEnum* EWitRequestSampleSize_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWitRequestSampleSize.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWitRequestSampleSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Wit_EWitRequestSampleSize, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("EWitRequestSampleSize"));
		}
		return Z_Registration_Info_UEnum_EWitRequestSampleSize.OuterSingleton;
	}
	template<> WIT_API UEnum* StaticEnum<EWitRequestSampleSize>()
	{
		return EWitRequestSampleSize_StaticEnum();
	}
	struct Z_Construct_UEnum_Wit_EWitRequestSampleSize_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Wit_EWitRequestSampleSize_Statics::Enumerators[] = {
		{ "EWitRequestSampleSize::Byte", (int64)EWitRequestSampleSize::Byte },
		{ "EWitRequestSampleSize::Word", (int64)EWitRequestSampleSize::Word },
		{ "EWitRequestSampleSize::DoubleWord", (int64)EWitRequestSampleSize::DoubleWord },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Wit_EWitRequestSampleSize_Statics::Enum_MetaDataParams[] = {
		{ "Byte.Name", "EWitRequestSampleSize::Byte" },
		{ "Comment", "/**\n * A list of the available audio sample sizes for the /speech endpoint of Wit.ai.\n */" },
		{ "DoubleWord.Name", "EWitRequestSampleSize::DoubleWord" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitRequestTypes.h" },
		{ "ToolTip", "A list of the available audio sample sizes for the /speech endpoint of Wit.ai." },
		{ "Word.Name", "EWitRequestSampleSize::Word" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Wit_EWitRequestSampleSize_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		"EWitRequestSampleSize",
		"EWitRequestSampleSize",
		Z_Construct_UEnum_Wit_EWitRequestSampleSize_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Wit_EWitRequestSampleSize_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Wit_EWitRequestSampleSize_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Wit_EWitRequestSampleSize_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Wit_EWitRequestSampleSize()
	{
		if (!Z_Registration_Info_UEnum_EWitRequestSampleSize.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWitRequestSampleSize.InnerSingleton, Z_Construct_UEnum_Wit_EWitRequestSampleSize_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWitRequestSampleSize.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWitRequestEndian;
	static UEnum* EWitRequestEndian_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWitRequestEndian.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWitRequestEndian.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Wit_EWitRequestEndian, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("EWitRequestEndian"));
		}
		return Z_Registration_Info_UEnum_EWitRequestEndian.OuterSingleton;
	}
	template<> WIT_API UEnum* StaticEnum<EWitRequestEndian>()
	{
		return EWitRequestEndian_StaticEnum();
	}
	struct Z_Construct_UEnum_Wit_EWitRequestEndian_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Wit_EWitRequestEndian_Statics::Enumerators[] = {
		{ "EWitRequestEndian::Little", (int64)EWitRequestEndian::Little },
		{ "EWitRequestEndian::Big", (int64)EWitRequestEndian::Big },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Wit_EWitRequestEndian_Statics::Enum_MetaDataParams[] = {
		{ "Big.Name", "EWitRequestEndian::Big" },
		{ "Comment", "/**\n * A list of the available audio endianness for the /speech endpoint of Wit.ai.\n */" },
		{ "Little.Name", "EWitRequestEndian::Little" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitRequestTypes.h" },
		{ "ToolTip", "A list of the available audio endianness for the /speech endpoint of Wit.ai." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Wit_EWitRequestEndian_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		"EWitRequestEndian",
		"EWitRequestEndian",
		Z_Construct_UEnum_Wit_EWitRequestEndian_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Wit_EWitRequestEndian_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Wit_EWitRequestEndian_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Wit_EWitRequestEndian_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Wit_EWitRequestEndian()
	{
		if (!Z_Registration_Info_UEnum_EWitRequestEndian.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWitRequestEndian.InnerSingleton, Z_Construct_UEnum_Wit_EWitRequestEndian_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWitRequestEndian.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitRequestTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitRequestTypes_h_Statics::EnumInfo[] = {
		{ EWitRequestEndpoint_StaticEnum, TEXT("EWitRequestEndpoint"), &Z_Registration_Info_UEnum_EWitRequestEndpoint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 719755925U) },
		{ EWitParameter_StaticEnum, TEXT("EWitParameter"), &Z_Registration_Info_UEnum_EWitParameter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4267167529U) },
		{ EWitRequestFormat_StaticEnum, TEXT("EWitRequestFormat"), &Z_Registration_Info_UEnum_EWitRequestFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2795795041U) },
		{ EWitRequestEncoding_StaticEnum, TEXT("EWitRequestEncoding"), &Z_Registration_Info_UEnum_EWitRequestEncoding, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2907972505U) },
		{ EWitRequestSampleSize_StaticEnum, TEXT("EWitRequestSampleSize"), &Z_Registration_Info_UEnum_EWitRequestSampleSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4169066269U) },
		{ EWitRequestEndian_StaticEnum, TEXT("EWitRequestEndian"), &Z_Registration_Info_UEnum_EWitRequestEndian, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 808231474U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitRequestTypes_h_3683602973(TEXT("/Script/Wit"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitRequestTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitRequestTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
