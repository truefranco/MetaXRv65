// Copyright (c) Meta Platforms, Inc. and affiliates.

#include "OculusXRAnchorTypes.h"
#include "OculusXRHMDPrivate.h"
#include "OculusXRAnchorsModule.h"
#include "OculusXRAnchorTypesPrivate.h"

bool FOculusXRUInt64::operator==(const FOculusXRUInt64& Right) const
{
	return IsEqual(Right);
}
bool FOculusXRUInt64::operator!=(const FOculusXRUInt64& Right) const
{
	return !IsEqual(Right);
}

FOculusXRUUID::FOculusXRUUID()
{
	FMemory::Memzero(&UUIDBytes, OCULUSXR_UUID_SIZE);
}

FOculusXRUUID::FOculusXRUUID(const ovrpXRUuidArray& UuidArray)
{
	FMemory::Memcpy(UUIDBytes, UuidArray);
}

bool FOculusXRUUID::operator==(const FOculusXRUUID& Right) const
{
	return IsEqual(Right);
}

bool FOculusXRUUID::operator!=(const FOculusXRUUID& Right) const
{
	return !IsEqual(Right);
}

bool FOculusXRUUID::IsValidUUID() const
{
	static uint8 InvalidUUID[OCULUSXR_UUID_SIZE] = { 0 };

	return FMemory::Memcmp(UUIDBytes, InvalidUUID, OCULUSXR_UUID_SIZE) != 0;
}

bool FOculusXRUUID::IsEqual(const FOculusXRUUID& Other) const
{
	return FMemory::Memcmp(UUIDBytes, Other.UUIDBytes, OCULUSXR_UUID_SIZE) == 0;
}

uint32 GetTypeHash(const FOculusXRUUID& Other)
{
	return FCrc::MemCrc32(&Other.UUIDBytes, sizeof(Other.UUIDBytes));
}

bool FOculusXRUUID::NetSerialize(FArchive& Ar, class UPackageMap* Map, bool& bOutSuccess)
{
	uint8 data[16] = { 0 };

	for (uint8 i = 0; i < OCULUSXR_UUID_SIZE; ++i)
	{
		data[i] = UUIDBytes[i];
	};

	for (uint8 i = 0; i < OCULUSXR_UUID_SIZE; ++i)
	{
		Ar << data[i];
	};

	for (uint8 i = 0; i < OCULUSXR_UUID_SIZE; ++i)
	{
		UUIDBytes[i] = data[i];
	};

	bOutSuccess = true;

	return true;
}

FArchive& operator<<(FArchive& Ar, FOculusXRUUID& UUID)
{
	bool bOutSuccess = false;
	UUID.NetSerialize(Ar, nullptr, bOutSuccess);

	return Ar;
}

bool FOculusXRUUID::Serialize(FArchive& Ar)
{
	Ar << *this;
	return true;
}

FString FOculusXRUUID::ToString() const
{
	return BytesToHex(UUIDBytes, OCULUSXR_UUID_SIZE);
}

