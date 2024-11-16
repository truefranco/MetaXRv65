// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tool/SpeechGenerator/SWitSpeechGeneratorTab.h"
#include "TTS/Configuration/TtsConfiguration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSWitSpeechGeneratorTab() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_WitEditor();
	WIT_API UClass* Z_Construct_UClass_UTtsVoicePresetAsset_NoRegister();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FTtsConfiguration();
	WITEDITOR_API UClass* Z_Construct_UClass_UWitEditedTextCollection();
	WITEDITOR_API UClass* Z_Construct_UClass_UWitEditedTextCollection_NoRegister();
	WITEDITOR_API UClass* Z_Construct_UClass_UWitTextCollectionAsset();
	WITEDITOR_API UClass* Z_Construct_UClass_UWitTextCollectionAsset_NoRegister();
	WITEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWitTextItem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WitTextItem;
class UScriptStruct* FWitTextItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WitTextItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WitTextItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWitTextItem, (UObject*)Z_Construct_UPackage__Script_WitEditor(), TEXT("WitTextItem"));
	}
	return Z_Registration_Info_UScriptStruct_WitTextItem.OuterSingleton;
}
template<> WITEDITOR_API UScriptStruct* StaticStruct<FWitTextItem>()
{
	return FWitTextItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWitTextItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoicePreset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VoicePreset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClipId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitTextItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Single text item we want to convert to speech\n */" },
		{ "ModuleRelativePath", "Private/Tool/SpeechGenerator/SWitSpeechGeneratorTab.h" },
		{ "ToolTip", "Single text item we want to convert to speech" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWitTextItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWitTextItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitTextItem_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Text Item" },
		{ "Comment", "/** The text to convert to speech */" },
		{ "ModuleRelativePath", "Private/Tool/SpeechGenerator/SWitSpeechGeneratorTab.h" },
		{ "ToolTip", "The text to convert to speech" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitTextItem_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitTextItem, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitTextItem_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitTextItem_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitTextItem_Statics::NewProp_VoicePreset_MetaData[] = {
		{ "Category", "Text Item" },
		{ "Comment", "/** The voice preset to use during the conversion */" },
		{ "ModuleRelativePath", "Private/Tool/SpeechGenerator/SWitSpeechGeneratorTab.h" },
		{ "ToolTip", "The voice preset to use during the conversion" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWitTextItem_Statics::NewProp_VoicePreset = { "VoicePreset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitTextItem, VoicePreset), Z_Construct_UClass_UTtsVoicePresetAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitTextItem_Statics::NewProp_VoicePreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitTextItem_Statics::NewProp_VoicePreset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitTextItem_Statics::NewProp_ClipId_MetaData[] = {
		{ "Category", "Text Item" },
		{ "Comment", "/** Read only value that shows the file name the clip is written to */" },
		{ "ModuleRelativePath", "Private/Tool/SpeechGenerator/SWitSpeechGeneratorTab.h" },
		{ "ToolTip", "Read only value that shows the file name the clip is written to" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitTextItem_Statics::NewProp_ClipId = { "ClipId", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitTextItem, ClipId), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitTextItem_Statics::NewProp_ClipId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitTextItem_Statics::NewProp_ClipId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWitTextItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitTextItem_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitTextItem_Statics::NewProp_VoicePreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitTextItem_Statics::NewProp_ClipId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWitTextItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WitEditor,
		nullptr,
		&NewStructOps,
		"WitTextItem",
		sizeof(FWitTextItem),
		alignof(FWitTextItem),
		Z_Construct_UScriptStruct_FWitTextItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitTextItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWitTextItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitTextItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWitTextItem()
	{
		if (!Z_Registration_Info_UScriptStruct_WitTextItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WitTextItem.InnerSingleton, Z_Construct_UScriptStruct_FWitTextItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WitTextItem.InnerSingleton;
	}
	void UWitTextCollectionAsset::StaticRegisterNativesUWitTextCollectionAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWitTextCollectionAsset);
	UClass* Z_Construct_UClass_UWitTextCollectionAsset_NoRegister()
	{
		return UWitTextCollectionAsset::StaticClass();
	}
	struct Z_Construct_UClass_UWitTextCollectionAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentFolder;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWitTextCollectionAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_WitEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWitTextCollectionAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * TextCollection of text items that we want to convert to speech\n */" },
		{ "IncludePath", "Tool/SpeechGenerator/SWitSpeechGeneratorTab.h" },
		{ "ModuleRelativePath", "Private/Tool/SpeechGenerator/SWitSpeechGeneratorTab.h" },
		{ "ToolTip", "TextCollection of text items that we want to convert to speech" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWitTextCollectionAsset_Statics::NewProp_ContentFolder_MetaData[] = {
		{ "Category", "Output Location" },
		{ "Comment", "/** The content folder to output the converted audio files to. This is relative to the base content folder */" },
		{ "ModuleRelativePath", "Private/Tool/SpeechGenerator/SWitSpeechGeneratorTab.h" },
		{ "ToolTip", "The content folder to output the converted audio files to. This is relative to the base content folder" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWitTextCollectionAsset_Statics::NewProp_ContentFolder = { "ContentFolder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWitTextCollectionAsset, ContentFolder), METADATA_PARAMS(Z_Construct_UClass_UWitTextCollectionAsset_Statics::NewProp_ContentFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWitTextCollectionAsset_Statics::NewProp_ContentFolder_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWitTextCollectionAsset_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWitTextItem, METADATA_PARAMS(nullptr, 0) }; // 3609476195
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWitTextCollectionAsset_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "Text To Convert" },
		{ "Comment", "/** The text items we want to batch convert */" },
		{ "ModuleRelativePath", "Private/Tool/SpeechGenerator/SWitSpeechGeneratorTab.h" },
		{ "ToolTip", "The text items we want to batch convert" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWitTextCollectionAsset_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWitTextCollectionAsset, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWitTextCollectionAsset_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWitTextCollectionAsset_Statics::NewProp_Items_MetaData)) }; // 3609476195
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWitTextCollectionAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWitTextCollectionAsset_Statics::NewProp_ContentFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWitTextCollectionAsset_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWitTextCollectionAsset_Statics::NewProp_Items,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWitTextCollectionAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWitTextCollectionAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWitTextCollectionAsset_Statics::ClassParams = {
		&UWitTextCollectionAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWitTextCollectionAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWitTextCollectionAsset_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWitTextCollectionAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWitTextCollectionAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWitTextCollectionAsset()
	{
		if (!Z_Registration_Info_UClass_UWitTextCollectionAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWitTextCollectionAsset.OuterSingleton, Z_Construct_UClass_UWitTextCollectionAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWitTextCollectionAsset.OuterSingleton;
	}
	template<> WITEDITOR_API UClass* StaticClass<UWitTextCollectionAsset>()
	{
		return UWitTextCollectionAsset::StaticClass();
	}
	UWitTextCollectionAsset::UWitTextCollectionAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWitTextCollectionAsset);
	UWitTextCollectionAsset::~UWitTextCollectionAsset() {}
	DEFINE_FUNCTION(UWitEditedTextCollection::execOnSynthesizeError)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ErrorMessage);
		P_GET_PROPERTY(FStrProperty,Z_Param_HumanReadableMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSynthesizeError(Z_Param_ErrorMessage,Z_Param_HumanReadableMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWitEditedTextCollection::execOnSynthesizeRawResponse)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ClipId);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_BinaryData);
		P_GET_STRUCT_REF(FTtsConfiguration,Z_Param_Out_ClipSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSynthesizeRawResponse(Z_Param_ClipId,Z_Param_Out_BinaryData,Z_Param_Out_ClipSettings);
		P_NATIVE_END;
	}
	void UWitEditedTextCollection::StaticRegisterNativesUWitEditedTextCollection()
	{
		UClass* Class = UWitEditedTextCollection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSynthesizeError", &UWitEditedTextCollection::execOnSynthesizeError },
			{ "OnSynthesizeRawResponse", &UWitEditedTextCollection::execOnSynthesizeRawResponse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeError_Statics
	{
		struct WitEditedTextCollection_eventOnSynthesizeError_Parms
		{
			FString ErrorMessage;
			FString HumanReadableMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HumanReadableMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HumanReadableMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeError_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeError_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WitEditedTextCollection_eventOnSynthesizeError_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeError_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeError_Statics::NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeError_Statics::NewProp_HumanReadableMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeError_Statics::NewProp_HumanReadableMessage = { "HumanReadableMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WitEditedTextCollection_eventOnSynthesizeError_Parms, HumanReadableMessage), METADATA_PARAMS(Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeError_Statics::NewProp_HumanReadableMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeError_Statics::NewProp_HumanReadableMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeError_Statics::NewProp_ErrorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeError_Statics::NewProp_HumanReadableMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeError_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Callback when an error occurs */" },
		{ "ModuleRelativePath", "Private/Tool/SpeechGenerator/SWitSpeechGeneratorTab.h" },
		{ "ToolTip", "Callback when an error occurs" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWitEditedTextCollection, nullptr, "OnSynthesizeError", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeError_Statics::WitEditedTextCollection_eventOnSynthesizeError_Parms), Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeRawResponse_Statics
	{
		struct WitEditedTextCollection_eventOnSynthesizeRawResponse_Parms
		{
			FString ClipId;
			TArray<uint8> BinaryData;
			FTtsConfiguration ClipSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClipId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BinaryData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BinaryData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BinaryData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClipSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeRawResponse_Statics::NewProp_ClipId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeRawResponse_Statics::NewProp_ClipId = { "ClipId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WitEditedTextCollection_eventOnSynthesizeRawResponse_Parms, ClipId), METADATA_PARAMS(Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeRawResponse_Statics::NewProp_ClipId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeRawResponse_Statics::NewProp_ClipId_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeRawResponse_Statics::NewProp_BinaryData_Inner = { "BinaryData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeRawResponse_Statics::NewProp_BinaryData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeRawResponse_Statics::NewProp_BinaryData = { "BinaryData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WitEditedTextCollection_eventOnSynthesizeRawResponse_Parms, BinaryData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeRawResponse_Statics::NewProp_BinaryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeRawResponse_Statics::NewProp_BinaryData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeRawResponse_Statics::NewProp_ClipSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeRawResponse_Statics::NewProp_ClipSettings = { "ClipSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WitEditedTextCollection_eventOnSynthesizeRawResponse_Parms, ClipSettings), Z_Construct_UScriptStruct_FTtsConfiguration, METADATA_PARAMS(Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeRawResponse_Statics::NewProp_ClipSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeRawResponse_Statics::NewProp_ClipSettings_MetaData)) }; // 2639599679
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeRawResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeRawResponse_Statics::NewProp_ClipId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeRawResponse_Statics::NewProp_BinaryData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeRawResponse_Statics::NewProp_BinaryData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeRawResponse_Statics::NewProp_ClipSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeRawResponse_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Callback to receive the converted sound wave files */" },
		{ "ModuleRelativePath", "Private/Tool/SpeechGenerator/SWitSpeechGeneratorTab.h" },
		{ "ToolTip", "Callback to receive the converted sound wave files" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeRawResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWitEditedTextCollection, nullptr, "OnSynthesizeRawResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeRawResponse_Statics::WitEditedTextCollection_eventOnSynthesizeRawResponse_Parms), Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeRawResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeRawResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeRawResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeRawResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeRawResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeRawResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWitEditedTextCollection);
	UClass* Z_Construct_UClass_UWitEditedTextCollection_NoRegister()
	{
		return UWitEditedTextCollection::StaticClass();
	}
	struct Z_Construct_UClass_UWitEditedTextCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextCollection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWitEditedTextCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WitEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWitEditedTextCollection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeError, "OnSynthesizeError" }, // 871292603
		{ &Z_Construct_UFunction_UWitEditedTextCollection_OnSynthesizeRawResponse, "OnSynthesizeRawResponse" }, // 2721732917
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWitEditedTextCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The currently edited text collection\n */" },
		{ "IncludePath", "Tool/SpeechGenerator/SWitSpeechGeneratorTab.h" },
		{ "ModuleRelativePath", "Private/Tool/SpeechGenerator/SWitSpeechGeneratorTab.h" },
		{ "ToolTip", "The currently edited text collection" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWitEditedTextCollection_Statics::NewProp_TextCollection_MetaData[] = {
		{ "Category", "Selected" },
		{ "Comment", "/** The currently selected text collection we are viewing */" },
		{ "ModuleRelativePath", "Private/Tool/SpeechGenerator/SWitSpeechGeneratorTab.h" },
		{ "ToolTip", "The currently selected text collection we are viewing" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWitEditedTextCollection_Statics::NewProp_TextCollection = { "TextCollection", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWitEditedTextCollection, TextCollection), Z_Construct_UClass_UWitTextCollectionAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWitEditedTextCollection_Statics::NewProp_TextCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWitEditedTextCollection_Statics::NewProp_TextCollection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWitEditedTextCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWitEditedTextCollection_Statics::NewProp_TextCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWitEditedTextCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWitEditedTextCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWitEditedTextCollection_Statics::ClassParams = {
		&UWitEditedTextCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWitEditedTextCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWitEditedTextCollection_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWitEditedTextCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWitEditedTextCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWitEditedTextCollection()
	{
		if (!Z_Registration_Info_UClass_UWitEditedTextCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWitEditedTextCollection.OuterSingleton, Z_Construct_UClass_UWitEditedTextCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWitEditedTextCollection.OuterSingleton;
	}
	template<> WITEDITOR_API UClass* StaticClass<UWitEditedTextCollection>()
	{
		return UWitEditedTextCollection::StaticClass();
	}
	UWitEditedTextCollection::UWitEditedTextCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWitEditedTextCollection);
	UWitEditedTextCollection::~UWitEditedTextCollection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_WitEditor_Private_Tool_SpeechGenerator_SWitSpeechGeneratorTab_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_WitEditor_Private_Tool_SpeechGenerator_SWitSpeechGeneratorTab_h_Statics::ScriptStructInfo[] = {
		{ FWitTextItem::StaticStruct, Z_Construct_UScriptStruct_FWitTextItem_Statics::NewStructOps, TEXT("WitTextItem"), &Z_Registration_Info_UScriptStruct_WitTextItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWitTextItem), 3609476195U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_WitEditor_Private_Tool_SpeechGenerator_SWitSpeechGeneratorTab_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWitTextCollectionAsset, UWitTextCollectionAsset::StaticClass, TEXT("UWitTextCollectionAsset"), &Z_Registration_Info_UClass_UWitTextCollectionAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWitTextCollectionAsset), 234366139U) },
		{ Z_Construct_UClass_UWitEditedTextCollection, UWitEditedTextCollection::StaticClass, TEXT("UWitEditedTextCollection"), &Z_Registration_Info_UClass_UWitEditedTextCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWitEditedTextCollection), 757388407U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_WitEditor_Private_Tool_SpeechGenerator_SWitSpeechGeneratorTab_h_3345505534(TEXT("/Script/WitEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_WitEditor_Private_Tool_SpeechGenerator_SWitSpeechGeneratorTab_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_WitEditor_Private_Tool_SpeechGenerator_SWitSpeechGeneratorTab_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_WitEditor_Private_Tool_SpeechGenerator_SWitSpeechGeneratorTab_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_WitEditor_Private_Tool_SpeechGenerator_SWitSpeechGeneratorTab_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
