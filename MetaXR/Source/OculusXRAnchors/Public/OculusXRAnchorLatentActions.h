// Copyright (c) Meta Platforms, Inc. and affiliates.

#pragma once

#include "Kismet/BlueprintAsyncActionBase.h"
#include "Templates/SharedPointer.h"
#include "OculusXRAnchorTypes.h"
#include "OculusXRAnchorComponent.h"
#include "OculusXRAnchorComponents.h"
#include "OculusXRAnchorLatentActions.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOculusXR_LatentAction_CreateSpatialAnchor_Success, UOculusXRAnchorComponent*, Anchor, EOculusXRAnchorResult::Type, Result);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOculusXR_LatentAction_CreateSpatialAnchor_Failure, EOculusXRAnchorResult::Type, Result);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOculusXR_LatentAction_EraseAnchor_Success, AActor*, Actor, FOculusXRUUID, UUID, EOculusXRAnchorResult::Type, Result);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOculusXR_LatentAction_EraseAnchor_Failure, EOculusXRAnchorResult::Type, Result);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOculusXR_LatentAction_SaveAnchor_Success, UOculusXRAnchorComponent*, Anchor, EOculusXRAnchorResult::Type, Result);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOculusXR_LatentAction_SaveAnchor_Failure, EOculusXRAnchorResult::Type, Result);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOculusXR_LatentAction_SaveAnchorList_Success, const TArray<UOculusXRAnchorComponent*>&, Anchors, EOculusXRAnchorResult::Type, Result);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOculusXR_LatentAction_SaveAnchorList_Failure, EOculusXRAnchorResult::Type, Result);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOculusXR_LatentAction_QueryAnchors_Success, const TArray<FOculusXRSpaceQueryResult>&, QueryResults, EOculusXRAnchorResult::Type, Result);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOculusXR_LatentAction_QueryAnchors_Failure, EOculusXRAnchorResult::Type, Result);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOculusXR_LatentAction_SetComponentStatus_Success, UOculusXRAnchorComponent*, Anchor, EOculusXRSpaceComponentType, ComponentType, bool, Enabled, EOculusXRAnchorResult::Type, Result);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOculusXR_LatentAction_SetComponentStatus_Failure, EOculusXRAnchorResult::Type, Result);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOculusXR_LatentAction_SetAnchorComponentStatus_Success, UOculusXRBaseAnchorComponent*, Component, EOculusXRAnchorResult::Type, Result);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOculusXR_LatentAction_SetAnchorComponentStatus_Failure, EOculusXRAnchorResult::Type, Result);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOculusXR_LatentAction_ShareAnchors_Success, const TArray<UOculusXRAnchorComponent*>&, SharedAnchors, const TArray<FString>&, UserIds, EOculusXRAnchorResult::Type, Result);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOculusXR_LatentAction_ShareAnchors_Failure, EOculusXRAnchorResult::Type, Result);


//
// Create Anchor
//
UCLASS()
class OCULUSXRANCHORS_API UOculusXRAsyncAction_CreateSpatialAnchor : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	virtual void Activate() override;

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"))
	static UOculusXRAsyncAction_CreateSpatialAnchor* OculusXRAsyncCreateSpatialAnchor(AActor* TargetActor, const FTransform& AnchorTransform);

	UPROPERTY(BlueprintAssignable)
	FOculusXR_LatentAction_CreateSpatialAnchor_Success Success;

	UPROPERTY(BlueprintAssignable)
	FOculusXR_LatentAction_CreateSpatialAnchor_Failure Failure;

	// Target actor
	UPROPERTY(Transient)
	AActor* TargetActor;

	FTransform AnchorTransform;

private:
	void HandleCreateComplete(EOculusXRAnchorResult::Type CreateResult, UOculusXRAnchorComponent* Anchor);
};

//
// Erase Anchor
//
UCLASS()
class OCULUSXRANCHORS_API UOculusXRAsyncAction_EraseAnchor : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	virtual void Activate() override;

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"))
	static UOculusXRAsyncAction_EraseAnchor* OculusXRAsyncEraseAnchor(AActor* TargetActor);

	UPROPERTY(BlueprintAssignable)
	FOculusXR_LatentAction_EraseAnchor_Success Success;

	UPROPERTY(BlueprintAssignable)
	FOculusXR_LatentAction_EraseAnchor_Failure Failure;

	// Target actor
	UPROPERTY(Transient)
	AActor* TargetActor;

	FOculusXRUInt64 DeleteRequestId;

private:
	void HandleEraseAnchorComplete(EOculusXRAnchorResult::Type EraseResult, FOculusXRUUID UUID);
};

//
// Save Anchor
//
UCLASS()
class OCULUSXRANCHORS_API UOculusXRAsyncAction_SaveAnchor : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	virtual void Activate() override;

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"))
	static UOculusXRAsyncAction_SaveAnchor* OculusXRAsyncSaveAnchor(AActor* TargetActor, EOculusXRSpaceStorageLocation StorageLocation);

	UPROPERTY(BlueprintAssignable)
	FOculusXR_LatentAction_SaveAnchor_Success Success;

	UPROPERTY(BlueprintAssignable)
	FOculusXR_LatentAction_SaveAnchor_Failure Failure;

	// Target actor
	UPROPERTY(Transient)
	AActor* TargetActor;

	EOculusXRSpaceStorageLocation StorageLocation;

private:
	void HandleSaveAnchorComplete(EOculusXRAnchorResult::Type SaveResult, UOculusXRAnchorComponent* Anchor);
};

//
// Save Anchor List
//
UCLASS()
class OCULUSXRANCHORS_API UOculusXRAsyncAction_SaveAnchorList : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	virtual void Activate() override;

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"))
	static UOculusXRAsyncAction_SaveAnchorList* OculusXRAsyncSaveAnchorList(const TArray<AActor*>& TargetActors, EOculusXRSpaceStorageLocation StorageLocation);

	UPROPERTY(BlueprintAssignable)
	FOculusXR_LatentAction_SaveAnchorList_Success Success;

	UPROPERTY(BlueprintAssignable)
	FOculusXR_LatentAction_SaveAnchorList_Failure Failure;

	UPROPERTY(Transient)
	TArray<UOculusXRAnchorComponent*> TargetAnchors;

	EOculusXRSpaceStorageLocation StorageLocation;

private:
	void HandleSaveAnchorListComplete(EOculusXRAnchorResult::Type SaveResult, const TArray<UOculusXRAnchorComponent*>& SavedSpaces);
};

//
// Query Anchors
//
UCLASS()
class OCULUSXRANCHORS_API UOculusXRAsyncAction_QueryAnchors : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	virtual void Activate() override;

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"))
	static UOculusXRAsyncAction_QueryAnchors* OculusXRAsyncQueryAnchors(EOculusXRSpaceStorageLocation Location, const TArray<FOculusXRUUID>& UUIDs);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"))
	static UOculusXRAsyncAction_QueryAnchors* OculusXRAsyncQueryAnchorsAdvanced(const FOculusXRSpaceQueryInfo& QueryInfo);

	UPROPERTY(BlueprintAssignable)
	FOculusXR_LatentAction_QueryAnchors_Success Success;

	UPROPERTY(BlueprintAssignable)
	FOculusXR_LatentAction_QueryAnchors_Failure Failure;

	FOculusXRSpaceQueryInfo QueryInfo;
	TArray<FOculusXRSpaceQueryResult> QueryResults;

private:
	void HandleQueryAnchorsResults(EOculusXRAnchorResult::Type QueryResult, const TArray<FOculusXRSpaceQueryResult>& Results);
};

//
// Set Component Status
//
UCLASS()
class OCULUSXRANCHORS_API UOculusXRAsyncAction_SetAnchorComponentStatus : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	virtual void Activate() override;

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"))
	static UOculusXRAsyncAction_SetAnchorComponentStatus* OculusXRAsyncSetAnchorComponentStatus(AActor* TargetActor, EOculusXRSpaceComponentType ComponentType, bool bEnabled);

	UPROPERTY(BlueprintAssignable)
	FOculusXR_LatentAction_SetComponentStatus_Success Success;

	UPROPERTY(BlueprintAssignable)
	FOculusXR_LatentAction_SetComponentStatus_Failure Failure;

	// Target actor
	UPROPERTY(Transient)
	AActor* TargetActor;

	UPROPERTY(Transient)
	UOculusXRAnchorComponent* TargetAnchorComponent;

	EOculusXRSpaceComponentType ComponentType;
	bool bEnabled;

private:
	void HandleSetComponentStatusComplete(EOculusXRAnchorResult::Type SetStatusResult, uint64 AnchorHandle, EOculusXRSpaceComponentType SpaceComponentType, bool bResultEnabled);
};

//
// Set Anchor Component Status
//
UCLASS()
class OCULUSXRANCHORS_API UOculusXRAsyncAction_SetComponentStatus : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	virtual void Activate() override;

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"))
	static UOculusXRAsyncAction_SetComponentStatus* OculusXRAsyncSetComponentStatus(UOculusXRBaseAnchorComponent* Component, bool bEnabled);

	UPROPERTY(BlueprintAssignable)
	FOculusXR_LatentAction_SetAnchorComponentStatus_Success Success;

	UPROPERTY(BlueprintAssignable)
	FOculusXR_LatentAction_SetAnchorComponentStatus_Failure Failure;

	// Target actor
	UPROPERTY(Transient)
	UOculusXRBaseAnchorComponent* Component;
	bool bEnabled;

private:
	void HandleSetComponentStatusComplete(EOculusXRAnchorResult::Type SetStatusResult, uint64 AnchorHandle, EOculusXRSpaceComponentType SpaceComponentType, bool bResultEnabled);
};

//
// Share Anchors
//
UCLASS()
class OCULUSXRANCHORS_API UOculusXRAsyncAction_ShareAnchors : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	virtual void Activate() override;

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"))
	static UOculusXRAsyncAction_ShareAnchors* OculusXRAsyncShareAnchors(const TArray<AActor*>& TargetActors, const TArray<FString>& ToShareWithIds);

	UPROPERTY(BlueprintAssignable)
	FOculusXR_LatentAction_ShareAnchors_Success Success;

	UPROPERTY(BlueprintAssignable)
	FOculusXR_LatentAction_ShareAnchors_Failure Failure;

	// Target Spaces
	UPROPERTY(Transient)
	TArray<UOculusXRAnchorComponent*> TargetAnchors;

	// Users to share with
	TArray<uint64> ToShareWithIds;

	FOculusXRUInt64 ShareSpacesRequestId;

private:
	void HandleShareAnchorsComplete(EOculusXRAnchorResult::Type ShareResult, const TArray<UOculusXRAnchorComponent*>& TargetAnchors, const TArray<uint64>& OculusUserIds);
};


UCLASS()
class OCULUSXRANCHORS_API UOculusXRAnchorLaunchCaptureFlow : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOculusXRAnchorCaptureFlowFinished);

	UFUNCTION(BlueprintCallable, Category = "OculusXR|SpatialAnchor", meta = (WorldContext = "WorldContext", BlueprintInternalUseOnly = "true"))
	static UOculusXRAnchorLaunchCaptureFlow* LaunchCaptureFlowAsync(const UObject* WorldContext);

	void Activate() override;

	UPROPERTY(BlueprintAssignable)
	FOculusXRAnchorCaptureFlowFinished Success;

	UPROPERTY(BlueprintAssignable)
	FOculusXRAnchorCaptureFlowFinished Failure;

private:
	uint64 Request = 0;

	UFUNCTION(CallInEditor)
	void OnCaptureFinish(FOculusXRUInt64 RequestId, bool bSuccess);
};
