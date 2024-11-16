// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Composer/Data/ComposerContextMap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComposerContextMap() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_UComposerContextMap();
	WIT_API UClass* Z_Construct_UClass_UComposerContextMap_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UComposerContextMap::execSetObjectField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_OBJECT(UComposerContextMap,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetObjectField(Z_Param_FieldName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposerContextMap::execSetStringField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStringField(Z_Param_FieldName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposerContextMap::execSetNumberField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNumberField(Z_Param_FieldName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposerContextMap::execSetIntegerField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIntegerField(Z_Param_FieldName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposerContextMap::execGetStringArrayField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Values);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetStringArrayField(Z_Param_FieldName,Z_Param_Out_Values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposerContextMap::execGetObjectFromArrayField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY(FIntProperty,Z_Param_ArrayIndex);
		P_GET_OBJECT_REF(UComposerContextMap,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetObjectFromArrayField(Z_Param_FieldName,Z_Param_ArrayIndex,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposerContextMap::execGetObjectField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_OBJECT_REF(UComposerContextMap,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetObjectField(Z_Param_FieldName,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposerContextMap::execGetStringField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetStringField(Z_Param_FieldName,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposerContextMap::execGetNumberField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNumberField(Z_Param_FieldName,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposerContextMap::execGetIntegerField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIntegerField(Z_Param_FieldName,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposerContextMap::execHasField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasField(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposerContextMap::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	void UComposerContextMap::StaticRegisterNativesUComposerContextMap()
	{
		UClass* Class = UComposerContextMap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIntegerField", &UComposerContextMap::execGetIntegerField },
			{ "GetNumberField", &UComposerContextMap::execGetNumberField },
			{ "GetObjectField", &UComposerContextMap::execGetObjectField },
			{ "GetObjectFromArrayField", &UComposerContextMap::execGetObjectFromArrayField },
			{ "GetStringArrayField", &UComposerContextMap::execGetStringArrayField },
			{ "GetStringField", &UComposerContextMap::execGetStringField },
			{ "HasField", &UComposerContextMap::execHasField },
			{ "Reset", &UComposerContextMap::execReset },
			{ "SetIntegerField", &UComposerContextMap::execSetIntegerField },
			{ "SetNumberField", &UComposerContextMap::execSetNumberField },
			{ "SetObjectField", &UComposerContextMap::execSetObjectField },
			{ "SetStringField", &UComposerContextMap::execSetStringField },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComposerContextMap_GetIntegerField_Statics
	{
		struct ComposerContextMap_eventGetIntegerField_Parms
		{
			FString FieldName;
			int32 Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_GetIntegerField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComposerContextMap_GetIntegerField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposerContextMap_eventGetIntegerField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_GetIntegerField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_GetIntegerField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_GetIntegerField_Statics::NewProp_Value_MetaData[] = {
		{ "DisplayName", "Out Value" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UComposerContextMap_GetIntegerField_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposerContextMap_eventGetIntegerField_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_GetIntegerField_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_GetIntegerField_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_GetIntegerField_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Is Found" },
	};
#endif
	void Z_Construct_UFunction_UComposerContextMap_GetIntegerField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComposerContextMap_eventGetIntegerField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComposerContextMap_GetIntegerField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ComposerContextMap_eventGetIntegerField_Parms), &Z_Construct_UFunction_UComposerContextMap_GetIntegerField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_GetIntegerField_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_GetIntegerField_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposerContextMap_GetIntegerField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerContextMap_GetIntegerField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerContextMap_GetIntegerField_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerContextMap_GetIntegerField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_GetIntegerField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composer|ContextMap" },
		{ "Comment", "/**\n\x09 * Get a named integer field\n\x09 *\n\x09 * @param FieldName [in] the field name to look for\n\x09 * @param Value [out] the field value if found\n\x09 *\n\x09 * @return true if the field was found\n\x09 */" },
		{ "ModuleRelativePath", "Public/Composer/Data/ComposerContextMap.h" },
		{ "ToolTip", "Get a named integer field\n\n@param FieldName [in] the field name to look for\n@param Value [out] the field value if found\n\n@return true if the field was found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposerContextMap_GetIntegerField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposerContextMap, nullptr, "GetIntegerField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposerContextMap_GetIntegerField_Statics::ComposerContextMap_eventGetIntegerField_Parms), Z_Construct_UFunction_UComposerContextMap_GetIntegerField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_GetIntegerField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_GetIntegerField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_GetIntegerField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposerContextMap_GetIntegerField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposerContextMap_GetIntegerField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposerContextMap_GetNumberField_Statics
	{
		struct ComposerContextMap_eventGetNumberField_Parms
		{
			FString FieldName;
			float Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_GetNumberField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComposerContextMap_GetNumberField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposerContextMap_eventGetNumberField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_GetNumberField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_GetNumberField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_GetNumberField_Statics::NewProp_Value_MetaData[] = {
		{ "DisplayName", "Out Value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComposerContextMap_GetNumberField_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposerContextMap_eventGetNumberField_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_GetNumberField_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_GetNumberField_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_GetNumberField_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Is Found" },
	};
#endif
	void Z_Construct_UFunction_UComposerContextMap_GetNumberField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComposerContextMap_eventGetNumberField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComposerContextMap_GetNumberField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ComposerContextMap_eventGetNumberField_Parms), &Z_Construct_UFunction_UComposerContextMap_GetNumberField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_GetNumberField_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_GetNumberField_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposerContextMap_GetNumberField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerContextMap_GetNumberField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerContextMap_GetNumberField_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerContextMap_GetNumberField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_GetNumberField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composer|ContextMap" },
		{ "Comment", "/**\n\x09 * Get a named float field\n\x09 *\n\x09 * @param FieldName [in] the field name to look for\n\x09 * @param Value [out] the field value if found\n\x09 *\n\x09 * @return true if the field was found\n\x09 */" },
		{ "ModuleRelativePath", "Public/Composer/Data/ComposerContextMap.h" },
		{ "ToolTip", "Get a named float field\n\n@param FieldName [in] the field name to look for\n@param Value [out] the field value if found\n\n@return true if the field was found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposerContextMap_GetNumberField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposerContextMap, nullptr, "GetNumberField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposerContextMap_GetNumberField_Statics::ComposerContextMap_eventGetNumberField_Parms), Z_Construct_UFunction_UComposerContextMap_GetNumberField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_GetNumberField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_GetNumberField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_GetNumberField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposerContextMap_GetNumberField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposerContextMap_GetNumberField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposerContextMap_GetObjectField_Statics
	{
		struct ComposerContextMap_eventGetObjectField_Parms
		{
			FString FieldName;
			UComposerContextMap* Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_GetObjectField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComposerContextMap_GetObjectField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposerContextMap_eventGetObjectField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_GetObjectField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_GetObjectField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_GetObjectField_Statics::NewProp_Value_MetaData[] = {
		{ "DisplayName", "Out Value" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposerContextMap_GetObjectField_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposerContextMap_eventGetObjectField_Parms, Value), Z_Construct_UClass_UComposerContextMap_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_GetObjectField_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_GetObjectField_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_GetObjectField_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Is Found" },
	};
#endif
	void Z_Construct_UFunction_UComposerContextMap_GetObjectField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComposerContextMap_eventGetObjectField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComposerContextMap_GetObjectField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ComposerContextMap_eventGetObjectField_Parms), &Z_Construct_UFunction_UComposerContextMap_GetObjectField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_GetObjectField_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_GetObjectField_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposerContextMap_GetObjectField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerContextMap_GetObjectField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerContextMap_GetObjectField_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerContextMap_GetObjectField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_GetObjectField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composer|ContextMap" },
		{ "Comment", "/**\n\x09 * Get a named object field\n\x09 *\n\x09 * @param FieldName [in] the field name to look for\n\x09 * @param Value [out] the field value if found\n\x09 *\n\x09 * @return true if the field was found\n\x09 */" },
		{ "ModuleRelativePath", "Public/Composer/Data/ComposerContextMap.h" },
		{ "ToolTip", "Get a named object field\n\n@param FieldName [in] the field name to look for\n@param Value [out] the field value if found\n\n@return true if the field was found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposerContextMap_GetObjectField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposerContextMap, nullptr, "GetObjectField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposerContextMap_GetObjectField_Statics::ComposerContextMap_eventGetObjectField_Parms), Z_Construct_UFunction_UComposerContextMap_GetObjectField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_GetObjectField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_GetObjectField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_GetObjectField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposerContextMap_GetObjectField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposerContextMap_GetObjectField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics
	{
		struct ComposerContextMap_eventGetObjectFromArrayField_Parms
		{
			FString FieldName;
			int32 ArrayIndex;
			UComposerContextMap* Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ArrayIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposerContextMap_eventGetObjectFromArrayField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics::NewProp_ArrayIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics::NewProp_ArrayIndex = { "ArrayIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposerContextMap_eventGetObjectFromArrayField_Parms, ArrayIndex), METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics::NewProp_ArrayIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics::NewProp_ArrayIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics::NewProp_Value_MetaData[] = {
		{ "DisplayName", "Out Value" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposerContextMap_eventGetObjectFromArrayField_Parms, Value), Z_Construct_UClass_UComposerContextMap_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Is Found" },
	};
#endif
	void Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComposerContextMap_eventGetObjectFromArrayField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ComposerContextMap_eventGetObjectFromArrayField_Parms), &Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics::NewProp_ArrayIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composer|ContextMap" },
		{ "Comment", "/**\n\x09 * Get a specific object field in a named object array\n\x09 *\n\x09 * @param FieldName [in] the field name to look for\n\x09 * @param ArrayIndex [in] the array index in the array to retrieve\n\x09 * @param Value [out] the field value if found\n\x09 *\n\x09 * @return true if the field was found\n\x09 */" },
		{ "ModuleRelativePath", "Public/Composer/Data/ComposerContextMap.h" },
		{ "ToolTip", "Get a specific object field in a named object array\n\n@param FieldName [in] the field name to look for\n@param ArrayIndex [in] the array index in the array to retrieve\n@param Value [out] the field value if found\n\n@return true if the field was found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposerContextMap, nullptr, "GetObjectFromArrayField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics::ComposerContextMap_eventGetObjectFromArrayField_Parms), Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposerContextMap_GetStringArrayField_Statics
	{
		struct ComposerContextMap_eventGetStringArrayField_Parms
		{
			FString FieldName;
			TArray<FString> Values;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_GetStringArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComposerContextMap_GetStringArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposerContextMap_eventGetStringArrayField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_GetStringArrayField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_GetStringArrayField_Statics::NewProp_FieldName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComposerContextMap_GetStringArrayField_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_GetStringArrayField_Statics::NewProp_Values_MetaData[] = {
		{ "DisplayName", "Out Value" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UComposerContextMap_GetStringArrayField_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposerContextMap_eventGetStringArrayField_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_GetStringArrayField_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_GetStringArrayField_Statics::NewProp_Values_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_GetStringArrayField_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Is Found" },
	};
#endif
	void Z_Construct_UFunction_UComposerContextMap_GetStringArrayField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComposerContextMap_eventGetStringArrayField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComposerContextMap_GetStringArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ComposerContextMap_eventGetStringArrayField_Parms), &Z_Construct_UFunction_UComposerContextMap_GetStringArrayField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_GetStringArrayField_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_GetStringArrayField_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposerContextMap_GetStringArrayField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerContextMap_GetStringArrayField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerContextMap_GetStringArrayField_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerContextMap_GetStringArrayField_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerContextMap_GetStringArrayField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_GetStringArrayField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composer|ContextMap" },
		{ "Comment", "/**\n\x09 * Get a named string array. This can be used for any kind of array of values field (number, bool or string) but not objects\n\x09 *\n\x09 * @param FieldName [in] the field name to look for\n\x09 * @param Values [out] the field value if found\n\x09 *\n\x09 * @return true if the field was found\n\x09 */" },
		{ "ModuleRelativePath", "Public/Composer/Data/ComposerContextMap.h" },
		{ "ToolTip", "Get a named string array. This can be used for any kind of array of values field (number, bool or string) but not objects\n\n@param FieldName [in] the field name to look for\n@param Values [out] the field value if found\n\n@return true if the field was found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposerContextMap_GetStringArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposerContextMap, nullptr, "GetStringArrayField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposerContextMap_GetStringArrayField_Statics::ComposerContextMap_eventGetStringArrayField_Parms), Z_Construct_UFunction_UComposerContextMap_GetStringArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_GetStringArrayField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_GetStringArrayField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_GetStringArrayField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposerContextMap_GetStringArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposerContextMap_GetStringArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposerContextMap_GetStringField_Statics
	{
		struct ComposerContextMap_eventGetStringField_Parms
		{
			FString FieldName;
			FString Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_GetStringField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComposerContextMap_GetStringField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposerContextMap_eventGetStringField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_GetStringField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_GetStringField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_GetStringField_Statics::NewProp_Value_MetaData[] = {
		{ "DisplayName", "Out Value" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComposerContextMap_GetStringField_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposerContextMap_eventGetStringField_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_GetStringField_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_GetStringField_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_GetStringField_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Is Found" },
	};
#endif
	void Z_Construct_UFunction_UComposerContextMap_GetStringField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComposerContextMap_eventGetStringField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComposerContextMap_GetStringField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ComposerContextMap_eventGetStringField_Parms), &Z_Construct_UFunction_UComposerContextMap_GetStringField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_GetStringField_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_GetStringField_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposerContextMap_GetStringField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerContextMap_GetStringField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerContextMap_GetStringField_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerContextMap_GetStringField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_GetStringField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composer|ContextMap" },
		{ "Comment", "/**\n\x09 * Get a named string field. This can be used for any kind of value field (number, bool or string)\n\x09 *\n\x09 * @param FieldName [in] the field name to look for\n\x09 * @param Value [out] the field value if found\n\x09 *\n\x09 * @return true if the field was found\n\x09 */" },
		{ "ModuleRelativePath", "Public/Composer/Data/ComposerContextMap.h" },
		{ "ToolTip", "Get a named string field. This can be used for any kind of value field (number, bool or string)\n\n@param FieldName [in] the field name to look for\n@param Value [out] the field value if found\n\n@return true if the field was found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposerContextMap_GetStringField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposerContextMap, nullptr, "GetStringField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposerContextMap_GetStringField_Statics::ComposerContextMap_eventGetStringField_Parms), Z_Construct_UFunction_UComposerContextMap_GetStringField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_GetStringField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_GetStringField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_GetStringField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposerContextMap_GetStringField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposerContextMap_GetStringField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposerContextMap_HasField_Statics
	{
		struct ComposerContextMap_eventHasField_Parms
		{
			FString FieldName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_HasField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComposerContextMap_HasField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposerContextMap_eventHasField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_HasField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_HasField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_HasField_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Is Found" },
	};
#endif
	void Z_Construct_UFunction_UComposerContextMap_HasField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComposerContextMap_eventHasField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComposerContextMap_HasField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ComposerContextMap_eventHasField_Parms), &Z_Construct_UFunction_UComposerContextMap_HasField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_HasField_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_HasField_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposerContextMap_HasField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerContextMap_HasField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerContextMap_HasField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_HasField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composer|ContextMap" },
		{ "Comment", "/**\n\x09 * Is there a field with the give name?\n\x09 *\n\x09 * @return true if the field was found\n\x09 */" },
		{ "ModuleRelativePath", "Public/Composer/Data/ComposerContextMap.h" },
		{ "ToolTip", "Is there a field with the give name?\n\n@return true if the field was found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposerContextMap_HasField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposerContextMap, nullptr, "HasField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposerContextMap_HasField_Statics::ComposerContextMap_eventHasField_Parms), Z_Construct_UFunction_UComposerContextMap_HasField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_HasField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_HasField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_HasField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposerContextMap_HasField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposerContextMap_HasField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposerContextMap_Reset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composer|ContextMap" },
		{ "Comment", "/**\n\x09 * Clear the underlying Json object\n\x09 */" },
		{ "ModuleRelativePath", "Public/Composer/Data/ComposerContextMap.h" },
		{ "ToolTip", "Clear the underlying Json object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposerContextMap_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposerContextMap, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposerContextMap_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposerContextMap_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposerContextMap_SetIntegerField_Statics
	{
		struct ComposerContextMap_eventSetIntegerField_Parms
		{
			FString FieldName;
			int32 Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_SetIntegerField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComposerContextMap_SetIntegerField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposerContextMap_eventSetIntegerField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_SetIntegerField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_SetIntegerField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_SetIntegerField_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UComposerContextMap_SetIntegerField_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposerContextMap_eventSetIntegerField_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_SetIntegerField_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_SetIntegerField_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposerContextMap_SetIntegerField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerContextMap_SetIntegerField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerContextMap_SetIntegerField_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_SetIntegerField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composer|ContextMap" },
		{ "Comment", "/**\n\x09 * Set a named integer field\n\x09 *\n\x09 * @param FieldName [in] the field name to look for\n\x09 * @param Value [in] the field value to set\n\x09 */" },
		{ "ModuleRelativePath", "Public/Composer/Data/ComposerContextMap.h" },
		{ "ToolTip", "Set a named integer field\n\n@param FieldName [in] the field name to look for\n@param Value [in] the field value to set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposerContextMap_SetIntegerField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposerContextMap, nullptr, "SetIntegerField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposerContextMap_SetIntegerField_Statics::ComposerContextMap_eventSetIntegerField_Parms), Z_Construct_UFunction_UComposerContextMap_SetIntegerField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_SetIntegerField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_SetIntegerField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_SetIntegerField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposerContextMap_SetIntegerField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposerContextMap_SetIntegerField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposerContextMap_SetNumberField_Statics
	{
		struct ComposerContextMap_eventSetNumberField_Parms
		{
			FString FieldName;
			float Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_SetNumberField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComposerContextMap_SetNumberField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposerContextMap_eventSetNumberField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_SetNumberField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_SetNumberField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_SetNumberField_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComposerContextMap_SetNumberField_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposerContextMap_eventSetNumberField_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_SetNumberField_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_SetNumberField_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposerContextMap_SetNumberField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerContextMap_SetNumberField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerContextMap_SetNumberField_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_SetNumberField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composer|ContextMap" },
		{ "Comment", "/**\n\x09 * Set a named float field\n\x09 *\n\x09 * @param FieldName [in] the field name to look for\n\x09 * @param Value [in] the field value to set\n\x09 */" },
		{ "ModuleRelativePath", "Public/Composer/Data/ComposerContextMap.h" },
		{ "ToolTip", "Set a named float field\n\n@param FieldName [in] the field name to look for\n@param Value [in] the field value to set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposerContextMap_SetNumberField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposerContextMap, nullptr, "SetNumberField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposerContextMap_SetNumberField_Statics::ComposerContextMap_eventSetNumberField_Parms), Z_Construct_UFunction_UComposerContextMap_SetNumberField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_SetNumberField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_SetNumberField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_SetNumberField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposerContextMap_SetNumberField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposerContextMap_SetNumberField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposerContextMap_SetObjectField_Statics
	{
		struct ComposerContextMap_eventSetObjectField_Parms
		{
			FString FieldName;
			UComposerContextMap* Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_SetObjectField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComposerContextMap_SetObjectField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposerContextMap_eventSetObjectField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_SetObjectField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_SetObjectField_Statics::NewProp_FieldName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposerContextMap_SetObjectField_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposerContextMap_eventSetObjectField_Parms, Value), Z_Construct_UClass_UComposerContextMap_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposerContextMap_SetObjectField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerContextMap_SetObjectField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerContextMap_SetObjectField_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_SetObjectField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composer|ContextMap" },
		{ "Comment", "/**\n\x09 * Set a named object field\n\x09 *\n\x09 * @param FieldName [in] the field name to look for\n\x09 * @param Value [in] the field value to set\n\x09 */" },
		{ "ModuleRelativePath", "Public/Composer/Data/ComposerContextMap.h" },
		{ "ToolTip", "Set a named object field\n\n@param FieldName [in] the field name to look for\n@param Value [in] the field value to set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposerContextMap_SetObjectField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposerContextMap, nullptr, "SetObjectField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposerContextMap_SetObjectField_Statics::ComposerContextMap_eventSetObjectField_Parms), Z_Construct_UFunction_UComposerContextMap_SetObjectField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_SetObjectField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_SetObjectField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_SetObjectField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposerContextMap_SetObjectField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposerContextMap_SetObjectField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposerContextMap_SetStringField_Statics
	{
		struct ComposerContextMap_eventSetStringField_Parms
		{
			FString FieldName;
			FString Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_SetStringField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComposerContextMap_SetStringField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposerContextMap_eventSetStringField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_SetStringField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_SetStringField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_SetStringField_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComposerContextMap_SetStringField_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposerContextMap_eventSetStringField_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_SetStringField_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_SetStringField_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposerContextMap_SetStringField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerContextMap_SetStringField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerContextMap_SetStringField_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerContextMap_SetStringField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composer|ContextMap" },
		{ "Comment", "/**\n\x09 * Set a named string field. This can be used for any kind of value field (number, bool or string)\n\x09 *\n\x09 * @param FieldName [in] the field name to look for\n\x09 * @param Value [in] the field value to set\n\x09 */" },
		{ "ModuleRelativePath", "Public/Composer/Data/ComposerContextMap.h" },
		{ "ToolTip", "Set a named string field. This can be used for any kind of value field (number, bool or string)\n\n@param FieldName [in] the field name to look for\n@param Value [in] the field value to set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposerContextMap_SetStringField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposerContextMap, nullptr, "SetStringField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposerContextMap_SetStringField_Statics::ComposerContextMap_eventSetStringField_Parms), Z_Construct_UFunction_UComposerContextMap_SetStringField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_SetStringField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposerContextMap_SetStringField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerContextMap_SetStringField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposerContextMap_SetStringField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposerContextMap_SetStringField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComposerContextMap);
	UClass* Z_Construct_UClass_UComposerContextMap_NoRegister()
	{
		return UComposerContextMap::StaticClass();
	}
	struct Z_Construct_UClass_UComposerContextMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NestedContextMaps_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_NestedContextMaps_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NestedContextMaps_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NestedContextMaps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComposerContextMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UComposerContextMap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComposerContextMap_GetIntegerField, "GetIntegerField" }, // 712359663
		{ &Z_Construct_UFunction_UComposerContextMap_GetNumberField, "GetNumberField" }, // 166252250
		{ &Z_Construct_UFunction_UComposerContextMap_GetObjectField, "GetObjectField" }, // 393271830
		{ &Z_Construct_UFunction_UComposerContextMap_GetObjectFromArrayField, "GetObjectFromArrayField" }, // 149874806
		{ &Z_Construct_UFunction_UComposerContextMap_GetStringArrayField, "GetStringArrayField" }, // 3026701171
		{ &Z_Construct_UFunction_UComposerContextMap_GetStringField, "GetStringField" }, // 4028686426
		{ &Z_Construct_UFunction_UComposerContextMap_HasField, "HasField" }, // 4275676734
		{ &Z_Construct_UFunction_UComposerContextMap_Reset, "Reset" }, // 557271093
		{ &Z_Construct_UFunction_UComposerContextMap_SetIntegerField, "SetIntegerField" }, // 3374875174
		{ &Z_Construct_UFunction_UComposerContextMap_SetNumberField, "SetNumberField" }, // 2871174304
		{ &Z_Construct_UFunction_UComposerContextMap_SetObjectField, "SetObjectField" }, // 937586931
		{ &Z_Construct_UFunction_UComposerContextMap_SetStringField, "SetStringField" }, // 200121357
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposerContextMap_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Wrapper for accessing the context map JSON object. It caches nested Json objects as UObjects so they can be used\n * easily in blueprints\n */" },
		{ "IncludePath", "Composer/Data/ComposerContextMap.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Composer/Data/ComposerContextMap.h" },
		{ "ToolTip", "Wrapper for accessing the context map JSON object. It caches nested Json objects as UObjects so they can be used\neasily in blueprints" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UComposerContextMap_Statics::NewProp_NestedContextMaps_ValueProp = { "NestedContextMaps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UComposerContextMap_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UComposerContextMap_Statics::NewProp_NestedContextMaps_Key_KeyProp = { "NestedContextMaps_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposerContextMap_Statics::NewProp_NestedContextMaps_MetaData[] = {
		{ "Comment", "/** A cache of nested context maps. This is only lazily filled when a nested object field is accessed */" },
		{ "ModuleRelativePath", "Public/Composer/Data/ComposerContextMap.h" },
		{ "ToolTip", "A cache of nested context maps. This is only lazily filled when a nested object field is accessed" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UComposerContextMap_Statics::NewProp_NestedContextMaps = { "NestedContextMaps", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposerContextMap, NestedContextMaps), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UComposerContextMap_Statics::NewProp_NestedContextMaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposerContextMap_Statics::NewProp_NestedContextMaps_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComposerContextMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposerContextMap_Statics::NewProp_NestedContextMaps_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposerContextMap_Statics::NewProp_NestedContextMaps_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposerContextMap_Statics::NewProp_NestedContextMaps,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComposerContextMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComposerContextMap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComposerContextMap_Statics::ClassParams = {
		&UComposerContextMap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UComposerContextMap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UComposerContextMap_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UComposerContextMap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComposerContextMap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComposerContextMap()
	{
		if (!Z_Registration_Info_UClass_UComposerContextMap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComposerContextMap.OuterSingleton, Z_Construct_UClass_UComposerContextMap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComposerContextMap.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<UComposerContextMap>()
	{
		return UComposerContextMap::StaticClass();
	}
	UComposerContextMap::UComposerContextMap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComposerContextMap);
	UComposerContextMap::~UComposerContextMap() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Data_ComposerContextMap_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Data_ComposerContextMap_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComposerContextMap, UComposerContextMap::StaticClass, TEXT("UComposerContextMap"), &Z_Registration_Info_UClass_UComposerContextMap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComposerContextMap), 2473434667U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Data_ComposerContextMap_h_1482275739(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Data_ComposerContextMap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Data_ComposerContextMap_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
