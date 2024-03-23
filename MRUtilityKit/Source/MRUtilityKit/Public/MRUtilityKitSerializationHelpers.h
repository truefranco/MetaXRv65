/*
Copyright (c) Meta Platforms, Inc. and affiliates.
All rights reserved.

This source code is licensed under the license found in the
LICENSE file in the root directory of this source tree.
*/
#pragma once

#include "Dom/JsonObject.h"
#include "OculusXRAnchorTypes.h"
#include "OculusXRRoomLayoutManagerComponent.h"

TSharedPtr<FJsonValue> MRUKSerialize(const FString& String);

void MRUKDeserialize(const FJsonValue& Value, FString& String);

TSharedPtr<FJsonValue> MRUKSerialize(const FOculusXRUUID& UUID);

void MRUKDeserialize(const FJsonValue& Value, FOculusXRUUID& UUID);

TSharedPtr<FJsonValue> MRUKSerialize(const double& Number);

void MRUKDeserialize(const FJsonValue& Value, double& Number);

TSharedPtr<FJsonValue> MRUKSerialize(const FOculusXRRoomLayout& RoomLayout);

void MRUKDeserialize(const FJsonValue& Value, FOculusXRRoomLayout& RoomLayout);

template <typename T>
TSharedPtr<FJsonValue> MRUKSerialize(const UE::Math::TVector2<T>& Vector)
{
	return MakeShareable(new FJsonValueArray({ MakeShareable(new FJsonValueNumber(Vector.X)), MakeShareable(new FJsonValueNumber(Vector.Y)) }));
}

template <typename T>
void MRUKDeserialize(const FJsonValue& Value, UE::Math::TVector2<T>& Vector)
{
	auto Array = Value.AsArray();
	if (Array.Num() == 2)
	{
		MRUKDeserialize(*Array[0], Vector.X);
		MRUKDeserialize(*Array[1], Vector.Y);
	}
	else
	{
		UE_LOG(LogJson, Error, TEXT("Json Array is of length %d (expected 2) when deserializing TVector2"), Array.Num());
		Vector = UE::Math::TVector2<T>::ZeroVector;
	}
}

template <typename T>
TSharedPtr<FJsonValue> MRUKSerialize(const UE::Math::TVector<T>& Vector)
{
	return MakeShareable(new FJsonValueArray({ MakeShareable(new FJsonValueNumber(Vector.X)), MakeShareable(new FJsonValueNumber(Vector.Y)), MakeShareable(new FJsonValueNumber(Vector.Z)) }));
}

template <typename T>
void MRUKDeserialize(const FJsonValue& Value, UE::Math::TVector<T>& Vector)
{
	auto Array = Value.AsArray();
	if (Array.Num() == 3)
	{
		MRUKDeserialize(*Array[0], Vector.X);
		MRUKDeserialize(*Array[1], Vector.Y);
		MRUKDeserialize(*Array[2], Vector.Z);
	}
	else
	{
		UE_LOG(LogJson, Error, TEXT("Json Array is of length %d (expected 3) when deserializing TVector"), Array.Num());
		Vector = UE::Math::TVector<T>::ZeroVector;
	}
}

template <typename T>
TSharedPtr<FJsonValue> MRUKSerialize(const UE::Math::TRotator<T>& Rotation)
{
	return MakeShareable(new FJsonValueArray({ MakeShareable(new FJsonValueNumber(Rotation.Pitch)), MakeShareable(new FJsonValueNumber(Rotation.Yaw)), MakeShareable(new FJsonValueNumber(Rotation.Roll)) }));
}

template <typename T>
void MRUKDeserialize(const FJsonValue& Value, UE::Math::TRotator<T>& Rotation)
{
	auto Array = Value.AsArray();
	if (Array.Num() == 3)
	{
		MRUKDeserialize(*Array[0], Rotation.Pitch);
		MRUKDeserialize(*Array[1], Rotation.Yaw);
		MRUKDeserialize(*Array[2], Rotation.Roll);
	}
	else
	{
		UE_LOG(LogJson, Error, TEXT("Json Array is of length %d (expected 3) when deserializing TRotator"), Array.Num());
		Rotation = UE::Math::TRotator<T>::ZeroRotator;
	}
}

template <typename T>
TSharedPtr<FJsonValue> MRUKSerialize(const UE::Math::TBox2<T>& Box)
{
	if (Box.bIsValid)
	{
		TSharedRef<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
		JsonObject->SetField("Min", MRUKSerialize(Box.Min));
		JsonObject->SetField("Max", MRUKSerialize(Box.Max));
		return MakeShareable(new FJsonValueObject(JsonObject));
	}
	else
	{
		return MakeShareable(new FJsonValueNull());
	}
}

template <typename T>
void MRUKDeserialize(const FJsonValue& Value, UE::Math::TBox2<T>& Box)
{
	if (Value.IsNull())
	{
		Box.Init();
	}
	else
	{
		auto Object = Value.AsObject();
		MRUKDeserialize(*Object->GetField<EJson::None>("Min"), Box.Min);
		MRUKDeserialize(*Object->GetField<EJson::None>("Max"), Box.Max);
		Box.bIsValid = true;
	}
}

template <typename T>
TSharedPtr<FJsonValue> MRUKSerialize(const UE::Math::TBox<T>& Box)
{
	if (Box.IsValid)
	{
		TSharedRef<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
		JsonObject->SetField("Min", MRUKSerialize(Box.Min));
		JsonObject->SetField("Max", MRUKSerialize(Box.Max));
		return MakeShareable(new FJsonValueObject(JsonObject));
	}
	else
	{
		return MakeShareable(new FJsonValueNull());
	}
}

template <typename T>
void MRUKDeserialize(const FJsonValue& Value, UE::Math::TBox<T>& Box)
{
	if (Value.IsNull())
	{
		Box.Init();
	}
	else
	{
		auto Object = Value.AsObject();
		MRUKDeserialize(*Object->GetField<EJson::None>("Min"), Box.Min);
		MRUKDeserialize(*Object->GetField<EJson::None>("Max"), Box.Max);
		Box.IsValid = 1;
	}
}

template <typename T>
TSharedPtr<FJsonValue> MRUKSerialize(const UE::Math::TTransform<T>& Transform)
{
	TSharedRef<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
	JsonObject->SetField("Translation", MRUKSerialize(Transform.GetTranslation()));
	JsonObject->SetField("Rotation", MRUKSerialize(Transform.Rotator()));
	JsonObject->SetField("Scale", MRUKSerialize(Transform.GetScale3D()));
	return MakeShareable(new FJsonValueObject(JsonObject));
}

template <typename T>
void MRUKDeserialize(const FJsonValue& Value, UE::Math::TTransform<T>& Transform)
{
	auto Object = Value.AsObject();
	UE::Math::TVector<T> Translation;
	UE::Math::TRotator<T> Rotation;
	UE::Math::TVector<T> Scale;
	MRUKDeserialize(*Object->GetField<EJson::None>("Translation"), Translation);
	MRUKDeserialize(*Object->GetField<EJson::None>("Rotation"), Rotation);
	MRUKDeserialize(*Object->GetField<EJson::None>("Scale"), Scale);

	Transform.SetComponents(UE::Math::TQuat<T>(Rotation), Translation, Scale);
}

template <typename T>
TSharedPtr<FJsonValue> MRUKSerialize(const TArray<T>& Array)
{
	TArray<TSharedPtr<FJsonValue>> JsonArray;
	JsonArray.Reserve(Array.Num());
	for (const auto& Item : Array)
	{
		JsonArray.Add(MRUKSerialize(Item));
	}
	return MakeShareable(new FJsonValueArray(JsonArray));
}

template <typename T>
void MRUKDeserialize(const FJsonValue& Value, TArray<T>& OutArray)
{
	auto Array = Value.AsArray();
	OutArray.Empty();
	OutArray.Reserve(Array.Num());
	for (const auto& Item : Array)
	{
		T ItemDeserialized;
		MRUKDeserialize(*Item, ItemDeserialized);
		OutArray.Push(ItemDeserialized);
	}
}