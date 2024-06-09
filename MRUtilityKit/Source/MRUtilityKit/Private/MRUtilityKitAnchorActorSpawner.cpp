/*
Copyright (c) Meta Platforms, Inc. and affiliates.
All rights reserved.

This source code is licensed under the license found in the
LICENSE file in the root directory of this source tree.
*/
#include "MRUtilityKitAnchorActorSpawner.h"
#include "MRUtilityKitTelemetry.h"
#include "MRUtilityKitSubsystem.h"

#include "Engine/GameInstance.h"

void AMRUKAnchorActorSpawner::BeginPlay()
{
	Super::BeginPlay();

#if WITH_EDITOR
	if (OculusXRTelemetry::IsActive())
	{
		MRUKTelemetry::FLoadAnchorActorSpawnerMarker().Start().End(OculusXRTelemetry::EAction::Success);
	}
#endif

	if (SpawnMode == EMRUKSpawnMode::CurrentRoomOnly)
	{
		const auto Subsystem = GetGameInstance()->GetSubsystem<UMRUKSubsystem>();
		if (Subsystem->SceneLoadStatus == EMRUKInitStatus::Complete)
		{
			SpawnActors(Subsystem->GetCurrentRoom());
		}
		else
		{
			// Only listen for the room created event in case no current room was available yet
			Subsystem->OnRoomCreated.AddUniqueDynamic(this, &AMRUKAnchorActorSpawner::OnRoomCreated);
		}
	}
	else if (SpawnMode == EMRUKSpawnMode::AllRooms)
	{
		const auto Subsystem = GetGameInstance()->GetSubsystem<UMRUKSubsystem>();
		for (auto Room : Subsystem->Rooms)
		{
			SpawnActors(Room);
		}

		// Listen for new rooms that get created
		Subsystem->OnRoomCreated.AddUniqueDynamic(this, &AMRUKAnchorActorSpawner::OnRoomCreated);
	}
}

void AMRUKAnchorActorSpawner::OnRoomCreated(AMRUKRoom* Room)
{
	if (SpawnMode == EMRUKSpawnMode::CurrentRoomOnly && SpawnedActors.Num() > 0)
	{
		// We already spawned a room
		return;
	}
	SpawnActors(Room);
}

void AMRUKAnchorActorSpawner::OnRoomUpdated(AMRUKRoom* Room)
{
	if (!SpawnedActors.Find(Room))
	{
		// A room was updated that we don't care about. If we are in current room only mode
		// we only want to update the one room we created
		return;
	}
	SpawnActors(Room);
}

void AMRUKAnchorActorSpawner::OnRoomRemoved(AMRUKRoom* Room)
{
	RemoveActors(Room);
}

void AMRUKAnchorActorSpawner::RemoveActors(AMRUKRoom* Room)
{
	if (!IsValid(Room))
	{
		UE_LOG(LogMRUK, Warning, TEXT("Can not remove actors from room that is a nullptr"));
		return;
	}

	if (TArray<AActor*>* Actors = SpawnedActors.Find(Room))
	{
		for (AActor* Actor : *Actors)
		{
			if (IsValid(Actor))
			{
				Actor->Destroy();
			}
		}
		Actors->Empty();
		SpawnedActors.Remove(Room);
	}
}

void AMRUKAnchorActorSpawner::SpawnActors(AMRUKRoom* Room)
{
	if (!IsValid(Room))
	{
		UE_LOG(LogMRUK, Warning, TEXT("Can not spawn actors in Room that is a nullptr"));
		return;
	}

	RemoveActors(Room);

	// Use last seed if possible to keep spawning deterministic after the first spawn.
	// In case the anchor random spawn seed has been changed it will be used instead
	// of the last seed.
	int32 Seed = -1;
	if (LastSeed >= 0)
	{
		if ((AnchorRandomSpawnSeed >= 0) && (LastSeed != AnchorRandomSpawnSeed))
		{
			Seed = AnchorRandomSpawnSeed;
		}
		else
		{
			Seed = LastSeed;
		}
	}
	else if (AnchorRandomSpawnSeed >= 0)
	{
		Seed = AnchorRandomSpawnSeed;
	}

	FRandomStream RandomStream(Seed);
	if (Seed < 0)
	{
		RandomStream.GenerateNewSeed();
	}
	LastSeed = RandomStream.GetCurrentSeed();
	const TArray<AActor*>& Actors = Room->SpawnInteriorFromStream(SpawnGroups, RandomStream, CutHoleLabels,
		ProceduralMaterial, ShouldFallbackToProcedural);
	SpawnedActors.Add(Room, Actors);

	const auto Subsystem = GetGameInstance()->GetSubsystem<UMRUKSubsystem>();
	Subsystem->OnRoomUpdated.AddUniqueDynamic(this, &AMRUKAnchorActorSpawner::OnRoomUpdated);
	Subsystem->OnRoomRemoved.AddUniqueDynamic(this, &AMRUKAnchorActorSpawner::OnRoomRemoved);

	OnActorsSpawned.Broadcast(Room);
}

void AMRUKAnchorActorSpawner::GetSpawnedActorsByRoom(AMRUKRoom* Room, TArray<AActor*>& Actors)
{
	if (const TArray<AActor*>* A = SpawnedActors.Find(Room))
	{
		Actors.Append(*A);
	}
}

void AMRUKAnchorActorSpawner::GetSpawnedActors(TArray<AActor*>& Actors)
{
	for (const auto& KeyValue : SpawnedActors)
	{
		Actors.Append(KeyValue.Value);
	}
}
