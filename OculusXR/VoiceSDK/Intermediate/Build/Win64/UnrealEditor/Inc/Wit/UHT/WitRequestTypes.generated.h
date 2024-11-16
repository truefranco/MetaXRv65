// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wit/Request/WitRequestTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WIT_WitRequestTypes_generated_h
#error "WitRequestTypes.generated.h already included, missing '#pragma once' in WitRequestTypes.h"
#endif
#define WIT_WitRequestTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitRequestTypes_h


#define FOREACH_ENUM_EWITREQUESTENDPOINT(op) \
	op(EWitRequestEndpoint::Speech) \
	op(EWitRequestEndpoint::Message) \
	op(EWitRequestEndpoint::Synthesize) \
	op(EWitRequestEndpoint::GetVoices) \
	op(EWitRequestEndpoint::Converse) \
	op(EWitRequestEndpoint::Event) \
	op(EWitRequestEndpoint::GetApps) \
	op(EWitRequestEndpoint::GetEntities) \
	op(EWitRequestEndpoint::GetIntents) \
	op(EWitRequestEndpoint::GetTraits) \
	op(EWitRequestEndpoint::ClientToken) \
	op(EWitRequestEndpoint::Dictation) 

enum class EWitRequestEndpoint : uint8;
template<> struct TIsUEnumClass<EWitRequestEndpoint> { enum { Value = true }; };
template<> WIT_API UEnum* StaticEnum<EWitRequestEndpoint>();

#define FOREACH_ENUM_EWITPARAMETER(op) \
	op(EWitParameter::Text) \
	op(EWitParameter::SessionId) \
	op(EWitParameter::ContextMap) \
	op(EWitParameter::Offset) \
	op(EWitParameter::Limit) 

enum class EWitParameter : uint8;
template<> struct TIsUEnumClass<EWitParameter> { enum { Value = true }; };
template<> WIT_API UEnum* StaticEnum<EWitParameter>();

#define FOREACH_ENUM_EWITREQUESTFORMAT(op) \
	op(EWitRequestFormat::Raw) \
	op(EWitRequestFormat::Wav) \
	op(EWitRequestFormat::Json) 

enum class EWitRequestFormat : uint8;
template<> struct TIsUEnumClass<EWitRequestFormat> { enum { Value = true }; };
template<> WIT_API UEnum* StaticEnum<EWitRequestFormat>();

#define FOREACH_ENUM_EWITREQUESTENCODING(op) \
	op(EWitRequestEncoding::SignedInteger) \
	op(EWitRequestEncoding::FloatingPoint) \
	op(EWitRequestEncoding::UnsignedInteger) 

enum class EWitRequestEncoding : uint8;
template<> struct TIsUEnumClass<EWitRequestEncoding> { enum { Value = true }; };
template<> WIT_API UEnum* StaticEnum<EWitRequestEncoding>();

#define FOREACH_ENUM_EWITREQUESTSAMPLESIZE(op) \
	op(EWitRequestSampleSize::Byte) \
	op(EWitRequestSampleSize::Word) \
	op(EWitRequestSampleSize::DoubleWord) 

enum class EWitRequestSampleSize : uint8;
template<> struct TIsUEnumClass<EWitRequestSampleSize> { enum { Value = true }; };
template<> WIT_API UEnum* StaticEnum<EWitRequestSampleSize>();

#define FOREACH_ENUM_EWITREQUESTENDIAN(op) \
	op(EWitRequestEndian::Little) \
	op(EWitRequestEndian::Big) 

enum class EWitRequestEndian : uint8;
template<> struct TIsUEnumClass<EWitRequestEndian> { enum { Value = true }; };
template<> WIT_API UEnum* StaticEnum<EWitRequestEndian>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
