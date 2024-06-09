/*
Copyright (c) Meta Platforms, Inc. and affiliates.
All rights reserved.

This source code is licensed under the license found in the
LICENSE file in the root directory of this source tree.
*/
#pragma once

#include "GameFramework/Actor.h"
#include "MRUtilityKit.h"
#include "MRUtilityKitAnchorActorSpawner.generated.h"

/**
 * Spawns meshes on anchor positions.
 */
UCLASS(ClassGroup = MRUtilityKit, meta = (DisplayName = "MR Utility Kit Anchor Actor Spawner"))
class MRUTILITYKIT_API AMRUKAnchorActorSpawner : public AActor
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteriorSpawned, AMRUKRoom*, Room);

	/**
	 * Event that gets fired when the interior spawner finished spawning actors.
	 */
	UPROPERTY(BlueprintAssignable, Category = "MR Utility Kit")
	FOnInteriorSpawned OnActorsSpawned;

	/**
	 * Seed to use for the random generator that decideds wich actor class to 
	 * spawn if there a given multiple for a label.
	 * negative values will have the effect to initialize the random generator
	 * to a random seed.
	 */
	UPROPERTY(EditAnywhere, Category = "MR Utility Kit")
	int AnchorRandomSpawnSeed = -1;

	/**
	 * Whether actors should be spawned automatically after the mixed reality 
	 * utility kit has been initialized. This should not be changed after the scene has been loaded.
	 */
	UPROPERTY(EditAnywhere, Category = "MR Utility Kit")
	EMRUKSpawnMode SpawnMode = EMRUKSpawnMode::CurrentRoomOnly;

	/**
	 * Material to use when falling back to procedural material.
	 */
	UPROPERTY(EditAnywhere, Category = "MR Utility Kit")
	UMaterialInterface* ProceduralMaterial = nullptr;

	/**
	 * Whether or not the spawner should fallback to procedural meshes in case no actor
	 * class has been defined for a label. This behaviour can be overwritten on the label
	 * basis in SpawnGroups.
	 */
	UPROPERTY(EditAnywhere, Category = "MR Utility Kit")
	bool ShouldFallbackToProcedural = true;

	/**
	 * Labels for which holes should be created in the parents plane mesh.
	 * E.g. if holes are needed in the walls where the windows and doors are, specify DOOR_FRAME and WINDOW_FRAME.
	 */
	UPROPERTY(EditAnywhere, Category = "MR Utility Kit")
	TArray<FString> CutHoleLabels;

	/**
	 * A map of Actor classes to spawn for the given label.
	 */
	UPROPERTY(EditAnywhere, Category = "MR Utility Kit")
	TMap<FString, FMRUKSpawnGroup> SpawnGroups{
		{ FMRUKLabels::Bed, {} },
		{ FMRUKLabels::Ceiling, {} },
		{ FMRUKLabels::Couch, {} },
		{ FMRUKLabels::DoorFrame, {} },
		{ FMRUKLabels::Floor, {} },
		{ FMRUKLabels::Lamp, {} },
		{ FMRUKLabels::Plant, {} },
		{ FMRUKLabels::Screen, {} },
		{ FMRUKLabels::Storage, {} },
		{ FMRUKLabels::Table, {} },
		{ FMRUKLabels::WallArt, {} },
		{ FMRUKLabels::WallFace, {} },
		{ FMRUKLabels::InvisibleWallFace, { {}, EMRUKSpawnerSelectionMode::Random, EMRUKFallbackToProceduralOverwrite::NoFallback } },
		{ FMRUKLabels::WindowFrame, {} },
		{ FMRUKLabels::Other, {} },
	};

	/**
	 * Spawns the meshes for the given labels above on the anchor positions in each room.
	 * There might be multiple actor classes for a give label. If thats the case a actor class will be chosen radomly. 
	 * The seed for this random generator can be set by AnchorRandomSpawnSeed.
	 * This function will be called automatically after the mixed reality utility kit initialized unless
	 * the option SpawnOnStart is set to false.
	 * If there is no actor class specified for a label then a procedural mesh matching the anchors volume and plane
	 * will be generated.
	 */
	UFUNCTION(BlueprintCallable, Category = "MR Utility Kit")
	void SpawnActors(AMRUKRoom* Room);

	/**
	 * Return all spawned actors from the give room.
	 * @param Room The room from which the actors should be returned
	 * @param Actors The spawned actors.
	 */
	UFUNCTION(BlueprintCallable, Category = "MR Utility Kit")
	void GetSpawnedActorsByRoom(AMRUKRoom* Room, TArray<AActor*>& Actors);

	/**
	 * Return all spawned actors from all rooms.
	 * @param Actors The spawned actors.
	 */
	UFUNCTION(BlueprintCallable, Category = "MR Utility Kit")
	void GetSpawnedActors(TArray<AActor*>& Actors);

protected:
	void BeginPlay() override;

	UFUNCTION()
	void OnRoomCreated(AMRUKRoom* Room);

	UFUNCTION()
	void OnRoomUpdated(AMRUKRoom* Room);

	UFUNCTION()
	void OnRoomRemoved(AMRUKRoom* Room);

	UFUNCTION()
	void RemoveActors(AMRUKRoom* Room);

private:
	// Room UUID to spawned actors in this room
	TMap<AMRUKRoom*, TArray<AActor*>> SpawnedActors;

	int32 LastSeed = -1;
};
