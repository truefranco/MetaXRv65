// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wit/Request/WitPartialResponseValidator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FWitResponse;
#ifdef WIT_WitPartialResponseValidator_generated_h
#error "WitPartialResponseValidator.generated.h already included, missing '#pragma once' in WitPartialResponseValidator.h"
#endif
#define WIT_WitPartialResponseValidator_generated_h

#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_19_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_19_RPC_WRAPPERS \
	virtual bool ValidatePartialResponse_Implementation(FWitResponse const& Response) { return false; }; \
 \
	DECLARE_FUNCTION(execValidatePartialResponse);


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ValidatePartialResponse_Implementation(FWitResponse const& Response) { return false; }; \
 \
	DECLARE_FUNCTION(execValidatePartialResponse);


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_19_ACCESSORS
#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_19_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWitPartialResponseValidator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWitPartialResponseValidator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWitPartialResponseValidator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWitPartialResponseValidator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWitPartialResponseValidator(UWitPartialResponseValidator&&); \
	NO_API UWitPartialResponseValidator(const UWitPartialResponseValidator&); \
public: \
	NO_API virtual ~UWitPartialResponseValidator();


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWitPartialResponseValidator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWitPartialResponseValidator(UWitPartialResponseValidator&&); \
	NO_API UWitPartialResponseValidator(const UWitPartialResponseValidator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWitPartialResponseValidator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWitPartialResponseValidator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWitPartialResponseValidator) \
	NO_API virtual ~UWitPartialResponseValidator();


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUWitPartialResponseValidator(); \
	friend struct Z_Construct_UClass_UWitPartialResponseValidator_Statics; \
public: \
	DECLARE_CLASS(UWitPartialResponseValidator, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Wit"), NO_API) \
	DECLARE_SERIALIZER(UWitPartialResponseValidator)


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_19_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_19_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IWitPartialResponseValidator() {} \
public: \
	typedef UWitPartialResponseValidator UClassType; \
	typedef IWitPartialResponseValidator ThisClass; \
	static bool Execute_ValidatePartialResponse(UObject* O, FWitResponse const& Response); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_19_INCLASS_IINTERFACE \
protected: \
	virtual ~IWitPartialResponseValidator() {} \
public: \
	typedef UWitPartialResponseValidator UClassType; \
	typedef IWitPartialResponseValidator ThisClass; \
	static bool Execute_ValidatePartialResponse(UObject* O, FWitResponse const& Response); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_19_ACCESSORS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_19_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_19_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_19_ACCESSORS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_19_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WIT_API UClass* StaticClass<class UWitPartialResponseValidator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
