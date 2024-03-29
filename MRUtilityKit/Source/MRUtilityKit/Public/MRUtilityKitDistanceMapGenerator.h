/*
Copyright (c) Meta Platforms, Inc. and affiliates.
All rights reserved.

This source code is licensed under the license found in the
LICENSE file in the root directory of this source tree.
*/
#pragma once

#include "GameFramework/Actor.h"
#include "MRUtilityKitDistanceMapGenerator.generated.h"

const FName GMRUK_DISTANCE_MAP_ACTOR_TAG = TEXT("DistanceMapActor");

/**
 * Generates a distance map that can be used in materials to calculate the distance to various objects.
 * This can enable interesting effects. With the distance map you can get the distance from scene objects
 * or walls in a material shader.
 * 
 * The Jump Flood Algorithm is used to generate the distance map. This is fast enough to regenerate
 * every tick.
 *
 * To capture a distance map after a room has been loaded call CaptureDistanceMap().
 * It will return a captured distance map. In case you already called CaptureDistanceMap()
 * you can receive the last captured distance map with GetDistanceMap(). No other setup is required.
 *
 * This class will create procedural meshes for every anchor to create a mask. These meshes have their
 * visibility set to scene capture only. That however means that if you place a scene capture component yourself
 * that the meshes will show up in your scene capture component. The actors that have the procedural meshes
 * attached are tagged with GMRUK_DISTANCE_MAP_ACTOR_TAG. In case you don't want them to show up in your
 * scene capture you can hide them by receiving all these actors with the tag GMRUK_DISTANCE_MAP_ACTOR_TAG
 * and add these to the scene captures hidden actors.
 */
UCLASS(ClassGroup = MRUtilityKit, meta = (DisplayName = "MR Utility Kit Distance Map Generator"))
class MRUTILITYKIT_API AMRUKDistanceMapGenerator : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MR Utility Kit")
	class USceneComponent* Root;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MR Utility Kit")
	class USceneCaptureComponent2D* SceneCapture2D;

	/**
	 * First render target for jump flood algorithm.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MR Utility Kit")
	class UCanvasRenderTarget2D* RenderTarget1;

	/**
	 * Second render target for jump flood algorithm.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MR Utility Kit")
	class UCanvasRenderTarget2D* RenderTarget2;

	/**
	 * Material to render a mask that gets used to calculate the distance map.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MR Utility Kit")
	class UMaterialInterface* MaskMaterial;

	/**
	 * Material that executes a pass of the jump flood algorithm.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MR Utility Kit")
	class UMaterialInterface* JFPassMaterial;

	/**
	 * Capture the distance map.
	 * @return The captured distance map.
	 */
	UFUNCTION(BlueprintCallable, Category = "MR Utility Kit")
	UTexture* CaptureDistanceMap();

	/**
	 * Return the captured distance map. Be sure to call CaptureDistanceMap() before
	 * @return The captured distance map.
	 */
	UFUNCTION(BlueprintCallable, Category = "MR Utility Kit")
	UTexture* GetDistanceMap() const;

	/**
	 * Retrive the view info from the scene capture. This is useful for reprojection of
	 * the distance map in a material.
	 * @return The view info.
	 */
	UFUNCTION(BlueprintCallable, Category = "MR Utility Kit")
	FMinimalViewInfo GetSceneCaptureView() const;

public:
	AMRUKDistanceMapGenerator();

protected:
	void BeginPlay() override;

private:
	int32 DistanceMapRT = -1;

	UPROPERTY()
	class UMaterialInstanceDynamic* JFPassMaterialInstance = nullptr;

	UPROPERTY()
	UMaterialInterface* SceneObjectMaskMaterial;

	UPROPERTY()
	UMaterialInterface* FloorMaskMaterial;

	void CaptureInitialSceneMask();
	void RenderDistanceMap();

	UFUNCTION()
	void CreateMaskMeshesForRoom(AMRUKRoom* Room);

	UFUNCTION()
	void CreateMaskMeshOfAnchor(AMRUKAnchor* Anchor);

	UFUNCTION()
	void UpdateMaskMeshOfAnchor(AMRUKAnchor* Anchor);
};
