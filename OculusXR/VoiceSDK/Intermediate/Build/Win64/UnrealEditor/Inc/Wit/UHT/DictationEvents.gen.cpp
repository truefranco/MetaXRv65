// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dictation/Events/DictationEvents.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDictationEvents() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_UDictationEvents();
	WIT_API UClass* Z_Construct_UClass_UDictationEvents_NoRegister();
	WIT_API UFunction* Z_Construct_UDelegateFunction_Wit_OnWitErrorDelegate__DelegateSignature();
	WIT_API UFunction* Z_Construct_UDelegateFunction_Wit_OnWitEventDelegate__DelegateSignature();
	WIT_API UFunction* Z_Construct_UDelegateFunction_Wit_OnWitResponseDelegate__DelegateSignature();
	WIT_API UFunction* Z_Construct_UDelegateFunction_Wit_OnWitTranscriptionDelegate__DelegateSignature();
// End Cross Module References
	void UDictationEvents::StaticRegisterNativesUDictationEvents()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDictationEvents);
	UClass* Z_Construct_UClass_UDictationEvents_NoRegister()
	{
		return UDictationEvents::StaticClass();
	}
	struct Z_Construct_UClass_UDictationEvents_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWitResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWitResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWitError_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWitError;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPartialTranscription_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPartialTranscription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFullTranscription_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFullTranscription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStartDictation_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartDictation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStopDictation_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStopDictation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDictationEvents_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDictationEvents_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Meta" },
		{ "Comment", "/**\n * Container for all Dictation events\n */" },
		{ "IncludePath", "Dictation/Events/DictationEvents.h" },
		{ "ModuleRelativePath", "Public/Dictation/Events/DictationEvents.h" },
		{ "ToolTip", "Container for all Dictation events" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDictationEvents_Statics::NewProp_OnWitResponse_MetaData[] = {
		{ "Comment", "/**\n\x09 * Callback to call when a Wit request has been fully processed. The callback receives the full WitResponse\n\x09 * which can be used to do any required processing\n\x09 */" },
		{ "ModuleRelativePath", "Public/Dictation/Events/DictationEvents.h" },
		{ "ToolTip", "Callback to call when a Wit request has been fully processed. The callback receives the full WitResponse\nwhich can be used to do any required processing" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDictationEvents_Statics::NewProp_OnWitResponse = { "OnWitResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDictationEvents, OnWitResponse), Z_Construct_UDelegateFunction_Wit_OnWitResponseDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDictationEvents_Statics::NewProp_OnWitResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDictationEvents_Statics::NewProp_OnWitResponse_MetaData)) }; // 3997116777
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDictationEvents_Statics::NewProp_OnWitError_MetaData[] = {
		{ "Comment", "/**\n\x09 * Callback to call when there is a Wit error \n\x09 */" },
		{ "ModuleRelativePath", "Public/Dictation/Events/DictationEvents.h" },
		{ "ToolTip", "Callback to call when there is a Wit error" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDictationEvents_Statics::NewProp_OnWitError = { "OnWitError", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDictationEvents, OnWitError), Z_Construct_UDelegateFunction_Wit_OnWitErrorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDictationEvents_Statics::NewProp_OnWitError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDictationEvents_Statics::NewProp_OnWitError_MetaData)) }; // 2112623604
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDictationEvents_Statics::NewProp_OnPartialTranscription_MetaData[] = {
		{ "Comment", "/**\n\x09 * Callback to call whenever a partial transcription is received \n\x09 */" },
		{ "ModuleRelativePath", "Public/Dictation/Events/DictationEvents.h" },
		{ "ToolTip", "Callback to call whenever a partial transcription is received" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDictationEvents_Statics::NewProp_OnPartialTranscription = { "OnPartialTranscription", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDictationEvents, OnPartialTranscription), Z_Construct_UDelegateFunction_Wit_OnWitTranscriptionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDictationEvents_Statics::NewProp_OnPartialTranscription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDictationEvents_Statics::NewProp_OnPartialTranscription_MetaData)) }; // 2746204240
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDictationEvents_Statics::NewProp_OnFullTranscription_MetaData[] = {
		{ "Comment", "/**\n\x09 * Callback to call when a full transcription is received \n\x09 */" },
		{ "ModuleRelativePath", "Public/Dictation/Events/DictationEvents.h" },
		{ "ToolTip", "Callback to call when a full transcription is received" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDictationEvents_Statics::NewProp_OnFullTranscription = { "OnFullTranscription", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDictationEvents, OnFullTranscription), Z_Construct_UDelegateFunction_Wit_OnWitTranscriptionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDictationEvents_Statics::NewProp_OnFullTranscription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDictationEvents_Statics::NewProp_OnFullTranscription_MetaData)) }; // 2746204240
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDictationEvents_Statics::NewProp_OnStartDictation_MetaData[] = {
		{ "Comment", "/**\n\x09 * Called when dictation starts\n\x09 */" },
		{ "ModuleRelativePath", "Public/Dictation/Events/DictationEvents.h" },
		{ "ToolTip", "Called when dictation starts" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDictationEvents_Statics::NewProp_OnStartDictation = { "OnStartDictation", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDictationEvents, OnStartDictation), Z_Construct_UDelegateFunction_Wit_OnWitEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDictationEvents_Statics::NewProp_OnStartDictation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDictationEvents_Statics::NewProp_OnStartDictation_MetaData)) }; // 991225925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDictationEvents_Statics::NewProp_OnStopDictation_MetaData[] = {
		{ "Comment", "/**\n\x09 * Called when dictations stops for any reason\n\x09 */" },
		{ "ModuleRelativePath", "Public/Dictation/Events/DictationEvents.h" },
		{ "ToolTip", "Called when dictations stops for any reason" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDictationEvents_Statics::NewProp_OnStopDictation = { "OnStopDictation", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDictationEvents, OnStopDictation), Z_Construct_UDelegateFunction_Wit_OnWitEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDictationEvents_Statics::NewProp_OnStopDictation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDictationEvents_Statics::NewProp_OnStopDictation_MetaData)) }; // 991225925
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDictationEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDictationEvents_Statics::NewProp_OnWitResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDictationEvents_Statics::NewProp_OnWitError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDictationEvents_Statics::NewProp_OnPartialTranscription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDictationEvents_Statics::NewProp_OnFullTranscription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDictationEvents_Statics::NewProp_OnStartDictation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDictationEvents_Statics::NewProp_OnStopDictation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDictationEvents_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDictationEvents>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDictationEvents_Statics::ClassParams = {
		&UDictationEvents::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDictationEvents_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDictationEvents_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDictationEvents_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDictationEvents_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDictationEvents()
	{
		if (!Z_Registration_Info_UClass_UDictationEvents.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDictationEvents.OuterSingleton, Z_Construct_UClass_UDictationEvents_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDictationEvents.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<UDictationEvents>()
	{
		return UDictationEvents::StaticClass();
	}
	UDictationEvents::UDictationEvents(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDictationEvents);
	UDictationEvents::~UDictationEvents() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Dictation_Events_DictationEvents_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Dictation_Events_DictationEvents_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDictationEvents, UDictationEvents::StaticClass, TEXT("UDictationEvents"), &Z_Registration_Info_UClass_UDictationEvents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDictationEvents), 750052083U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Dictation_Events_DictationEvents_h_3312671220(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Dictation_Events_DictationEvents_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Dictation_Events_DictationEvents_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
