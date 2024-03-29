/*
Copyright (c) Meta Platforms, Inc. and affiliates.
All rights reserved.

This source code is licensed under the license found in the
LICENSE file in the root directory of this source tree.
*/
#include "MRUtilityKitSerializationHelpers.h"

TSharedPtr<FJsonValue> MRUKSerialize(const FString& String)
{
	return MakeShareable(new FJsonValueString(String));
}

void MRUKDeserialize(const FJsonValue& Value, FString& String)
{
	String = Value.AsString();
}

TSharedPtr<FJsonValue> MRUKSerialize(const FOculusXRUUID& UUID)
{
	return MakeShareable(new FJsonValueString(UUID.ToString()));
}

void MRUKDeserialize(const FJsonValue& Value, FOculusXRUUID& UUID)
{
	const auto Hex = Value.AsString();
	if (Hex.Len() == OCULUSXR_UUID_SIZE * 2)
	{
		HexToBytes(Hex, UUID.UUIDBytes);
	}
	else
	{
		UE_LOG(LogJson, Error, TEXT("Json String '%s' is not of expected length %d when deserializing FOculusXRUUID"), *Hex, OCULUSXR_UUID_SIZE * 2);
		UUID = FOculusXRUUID();
	}
}

TSharedPtr<FJsonValue> MRUKSerialize(const double& Number)
{
	return MakeShareable(new FJsonValueNumber(Number));
}

void MRUKDeserialize(const FJsonValue& Value, double& Number)
{
	Number = Value.AsNumber();
}

TSharedPtr<FJsonValue> MRUKSerialize(const FOculusXRRoomLayout& RoomLayout)
{
	const TSharedRef<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
	// Note: No need to serialize the list of room object UUIDs since it is just the list of
	// all anchors in the room
	JsonObject->SetField("FloorUuid", MRUKSerialize(RoomLayout.FloorUuid));
	JsonObject->SetField("CeilingUuid", MRUKSerialize(RoomLayout.CeilingUuid));
	JsonObject->SetField("WallsUuid", MRUKSerialize(RoomLayout.WallsUuid));
	return MakeShareable(new FJsonValueObject(JsonObject));
}

void MRUKDeserialize(const FJsonValue& Value, FOculusXRRoomLayout& RoomLayout)
{
	const auto Object = Value.AsObject();
	MRUKDeserialize(*Object->GetField<EJson::None>("FloorUuid"), RoomLayout.FloorUuid);
	MRUKDeserialize(*Object->GetField<EJson::None>("CeilingUuid"), RoomLayout.CeilingUuid);
	MRUKDeserialize(*Object->GetField<EJson::None>("WallsUuid"), RoomLayout.WallsUuid);
}
