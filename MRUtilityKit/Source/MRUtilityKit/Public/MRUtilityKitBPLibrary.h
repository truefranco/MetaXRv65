/*
Copyright (c) Meta Platforms, Inc. and affiliates.
All rights reserved.

This source code is licensed under the license found in the
LICENSE file in the root directory of this source tree.
*/
#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "MRUtilityKitBPLibrary.generated.h"

/**
 * Load the scene async from device.
 */
UCLASS()
class MRUTILITYKIT_API UMRUKLoadFromDevice : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMRUKLoaded);

	UFUNCTION(BlueprintCallable, Category = "MR Utility Kit", meta = (WorldContext = "WorldContext", BlueprintInternalUseOnly = "true"))
	static UMRUKLoadFromDevice* LoadSceneFromDeviceAsync(const UObject* WorldContext);

	virtual void Activate() override;

	UPROPERTY(BlueprintAssignable)
	FMRUKLoaded Success;

	UPROPERTY(BlueprintAssignable)
	FMRUKLoaded Failure;

private:
	UFUNCTION(CallInEditor)
	void OnSceneLoaded(bool Succeeded);

	TWeakObjectPtr<UWorld> World = nullptr;
};

UCLASS()
class MRUTILITYKIT_API UMRUKBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	 * Load the global mesh from the device.
	 * @param SpaceQuery        Space query of the room.
	 * @param OutProceduralMesh Procedural mesh to load the triangle data in.
	 * @param LoadCollision     Whether to generate collision or not.
	 * @param WorldContext      Context of the world.
	 * @return                  Whether the load was successful or not.
	 */
	UFUNCTION(BlueprintCallable, Category = "MR Utility Kit", meta = (WorldContext = "WorldContext"))
	static bool LoadGlobalMeshFromDevice(FOculusXRSpaceQueryResult SpaceQuery, UProceduralMeshComponent* OutProceduralMesh, bool LoadCollision, const UObject* WorldContext);

	/**
	 * Load the global mesh from a JSON string.
	 * @param JsonString        The string containing the JSON.
	 * @param SpaceQuery        Space query of the room.
	 * @param OutProceduralMesh Procedural mesh to load the triangle data in.
	 * @param LoadCollision     Whether to generate collision or not
	 * @return                  Whether the load was successful or not.
	 */
	UFUNCTION(BlueprintCallable, Category = "MR Utility Kit")
	static bool LoadGlobalMeshFromJsonString(const FString& JsonString, FOculusXRSpaceQueryResult SpaceQuery, UProceduralMeshComponent* OutProceduralMesh, bool LoadCollision);

	/**
     * (Re)Calculate Normals and Tangents of the given procedural mesh.
	 * @param Mesh The procedural mesh.
	 */
	UFUNCTION(BlueprintCallable, Category = "MR Utility Kit")
	static void RecalculateProceduralMeshAndTangents(class UProceduralMeshComponent* Mesh);

	/**
     * Check if the current Unreal Engine is the fork of Meta.
	 * @return Whether its the fork or not.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MR Utility Kit")
	static bool IsUnrealEngineMetaFork();
};
