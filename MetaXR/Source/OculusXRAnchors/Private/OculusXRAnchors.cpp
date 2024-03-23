// Copyright (c) Meta Platforms, Inc. and affiliates.

#include "OculusXRAnchors.h"
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "GameFramework/PlayerController.h"
#include "OculusXRAnchorsModule.h"
#include "OculusXRAnchorDelegates.h"
#include "OculusXRHMDModule.h"
#include "OculusXRAnchorManager.h"
#include "OculusXRSpatialAnchorComponent.h"
#include "OculusXRAnchorBPFunctionLibrary.h"
#include "OculusXRTelemetryAnchorsEvents.h"

namespace OculusXRAnchors
{

	void FOculusXRAnchors::Initialize()
	{
		DelegateHandleAnchorCreate = FOculusXRAnchorEventDelegates::OculusSpatialAnchorCreateComplete.AddRaw(this, &FOculusXRAnchors::HandleSpatialAnchorCreateComplete);
		DelegateHandleAnchorErase = FOculusXRAnchorEventDelegates::OculusSpaceEraseComplete.AddRaw(this, &FOculusXRAnchors::HandleAnchorEraseComplete);
		DelegateHandleSetComponentStatus = FOculusXRAnchorEventDelegates::OculusSpaceSetComponentStatusComplete.AddRaw(this, &FOculusXRAnchors::HandleSetComponentStatusComplete);
		DelegateHandleAnchorSave = FOculusXRAnchorEventDelegates::OculusSpaceSaveComplete.AddRaw(this, &FOculusXRAnchors::HandleAnchorSaveComplete);
		DelegateHandleAnchorSaveList = FOculusXRAnchorEventDelegates::OculusSpaceListSaveComplete.AddRaw(this, &FOculusXRAnchors::HandleAnchorSaveListComplete);
		DelegateHandleQueryResultsBegin = FOculusXRAnchorEventDelegates::OculusSpaceQueryResults.AddRaw(this, &FOculusXRAnchors::HandleAnchorQueryResultsBegin);
		DelegateHandleQueryResultElement = FOculusXRAnchorEventDelegates::OculusSpaceQueryResult.AddRaw(this, &FOculusXRAnchors::HandleAnchorQueryResultElement);
		DelegateHandleQueryComplete = FOculusXRAnchorEventDelegates::OculusSpaceQueryComplete.AddRaw(this, &FOculusXRAnchors::HandleAnchorQueryComplete);
		DelegateHandleAnchorShare = FOculusXRAnchorEventDelegates::OculusSpaceShareComplete.AddRaw(this, &FOculusXRAnchors::HandleAnchorSharingComplete);
	}

	void FOculusXRAnchors::Teardown()
	{
		FOculusXRAnchorEventDelegates::OculusSpatialAnchorCreateComplete.Remove(DelegateHandleAnchorCreate);
		FOculusXRAnchorEventDelegates::OculusSpaceEraseComplete.Remove(DelegateHandleAnchorErase);
		FOculusXRAnchorEventDelegates::OculusSpaceSetComponentStatusComplete.Remove(DelegateHandleSetComponentStatus);
		FOculusXRAnchorEventDelegates::OculusSpaceSaveComplete.Remove(DelegateHandleAnchorSave);
		FOculusXRAnchorEventDelegates::OculusSpaceListSaveComplete.Remove(DelegateHandleAnchorSaveList);
		FOculusXRAnchorEventDelegates::OculusSpaceQueryResults.Remove(DelegateHandleQueryResultsBegin);
		FOculusXRAnchorEventDelegates::OculusSpaceQueryResult.Remove(DelegateHandleQueryResultElement);
		FOculusXRAnchorEventDelegates::OculusSpaceQueryComplete.Remove(DelegateHandleQueryComplete);
		FOculusXRAnchorEventDelegates::OculusSpaceShareComplete.Remove(DelegateHandleAnchorShare);
	}

	FOculusXRAnchors* FOculusXRAnchors::GetInstance()
	{
		return FOculusXRAnchorsModule::GetOculusAnchors();
	}

	bool FOculusXRAnchors::CreateSpatialAnchor(const FTransform& InTransform, AActor* TargetActor, const FOculusXRSpatialAnchorCreateDelegate& ResultCallback, EOculusXRAnchorResult::Type& OutResult)
	{
		if (!IsValid(TargetActor))
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("Invalid actor provided when attempting to create a spatial anchor."));
			OutResult = EOculusXRAnchorResult::Failure;
			ResultCallback.ExecuteIfBound(EOculusXRAnchorResult::Failure, nullptr);
			return false;
		}

		UWorld* World = TargetActor->GetWorld();
		if (!IsValid(World))
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("Unable to retrieve World Context while creating spatial anchor."));
			OutResult = EOculusXRAnchorResult::Failure;
			ResultCallback.ExecuteIfBound(EOculusXRAnchorResult::Failure, nullptr);
			return false;
		}

		APlayerController* PlayerController = World->GetFirstPlayerController();
		if (!IsValid(PlayerController))
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("Unable to retrieve Player Controller while creating spatial anchor"));
			OutResult = EOculusXRAnchorResult::Failure;
			ResultCallback.ExecuteIfBound(EOculusXRAnchorResult::Failure, nullptr);
			return false;
		}

		APlayerCameraManager* PlayerCameraManager = PlayerController->PlayerCameraManager;
		FTransform MainCameraTransform = FTransform::Identity;
		if (IsValid(PlayerCameraManager))
		{
			MainCameraTransform.SetLocation(PlayerCameraManager->GetCameraLocation());
			MainCameraTransform.SetRotation(FQuat(PlayerCameraManager->GetCameraRotation()));
		}

		UOculusXRAnchorComponent* Anchor = Cast<UOculusXRAnchorComponent>(TargetActor->GetComponentByClass(UOculusXRAnchorComponent::StaticClass()));
		if (IsValid(Anchor) && Anchor->HasValidHandle())
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("Actor targeted to create anchor already has an anchor component with a valid handle."));
			OutResult = EOculusXRAnchorResult::Failure;
			ResultCallback.ExecuteIfBound(EOculusXRAnchorResult::Failure, nullptr);
			return false;
		}

		uint64 RequestId = 0;
		OutResult = FOculusXRAnchorManager::CreateAnchor(InTransform, RequestId, MainCameraTransform);
		bool bAsyncStartSuccess = UOculusXRAnchorBPFunctionLibrary::IsAnchorResultSuccess(OutResult);

		OculusXRTelemetry::Events::FAnchorsCreateRequest Trace(static_cast<int>(GetTypeHash(RequestId)));
		if (bAsyncStartSuccess)
		{
			CreateAnchorBinding AnchorData;
			AnchorData.RequestId = RequestId;
			AnchorData.Actor = TargetActor;
			AnchorData.Binding = ResultCallback;

			FOculusXRAnchors* SDKInstance = GetInstance();
			SDKInstance->CreateSpatialAnchorBindings.Add(RequestId, AnchorData);
		}
		else
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("Failed to start async create spatial anchor."));
			ResultCallback.ExecuteIfBound(EOculusXRAnchorResult::Failure, nullptr);
			Trace.SetResult(OculusXRTelemetry::EAction::Cancel).End();
		}

		return bAsyncStartSuccess;
	}

	bool FOculusXRAnchors::EraseAnchor(UOculusXRAnchorComponent* Anchor, const FOculusXRAnchorEraseDelegate& ResultCallback, EOculusXRAnchorResult::Type& OutResult)
	{
		if (!IsValid(Anchor))
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("Invalid anchor provided when attempting to erase an anchor."));
			OutResult = EOculusXRAnchorResult::Failure;
			ResultCallback.ExecuteIfBound(EOculusXRAnchorResult::Failure, FOculusXRUUID());
			return false;
		}

		if (!Anchor->HasValidHandle())
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("Cannot erase anchor with invalid handle."));
			OutResult = EOculusXRAnchorResult::Failure;
			ResultCallback.ExecuteIfBound(EOculusXRAnchorResult::Failure, FOculusXRUUID());
			return false;
		}

		if (!Anchor->IsStoredAtLocation(EOculusXRSpaceStorageLocation::Local))
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("Only local anchors can be erased."));
			OutResult = EOculusXRAnchorResult::Failure;
			ResultCallback.ExecuteIfBound(EOculusXRAnchorResult::Failure, FOculusXRUUID());
			return false;
		}

		uint64 RequestId = 0;

		// Erase only supports local anchors
		EOculusXRAnchorResult::Type Result = FOculusXRAnchorManager::EraseAnchor(Anchor->GetHandle(), EOculusXRSpaceStorageLocation::Local, RequestId);
		bool bAsyncStartSuccess = UOculusXRAnchorBPFunctionLibrary::IsAnchorResultSuccess(Result);

		OculusXRTelemetry::Events::FAnchorsEraseRequest Trace(static_cast<int>(GetTypeHash(RequestId)));
		if (bAsyncStartSuccess)
		{
			EraseAnchorBinding EraseData;
			EraseData.RequestId = RequestId;
			EraseData.Binding = ResultCallback;
			EraseData.Anchor = Anchor;

			FOculusXRAnchors* SDKInstance = GetInstance();
			SDKInstance->EraseAnchorBindings.Add(RequestId, EraseData);
		}
		else
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("Failed to start async erase spatial anchor."));
			ResultCallback.ExecuteIfBound(EOculusXRAnchorResult::Failure, FOculusXRUUID());
			Trace.SetResult(OculusXRTelemetry::EAction::Cancel).End();
		}

		return bAsyncStartSuccess;
	}

	bool FOculusXRAnchors::DestroyAnchor(uint64 AnchorHandle, EOculusXRAnchorResult::Type& OutResult)
	{
		OutResult = FOculusXRAnchorManager::DestroySpace(AnchorHandle);

		return UOculusXRAnchorBPFunctionLibrary::IsAnchorResultSuccess(OutResult);
	}

	bool FOculusXRAnchors::SetAnchorComponentStatus(UOculusXRAnchorComponent* Anchor, EOculusXRSpaceComponentType SpaceComponentType, bool Enable, float Timeout, const FOculusXRAnchorSetComponentStatusDelegate& ResultCallback, EOculusXRAnchorResult::Type& OutResult)
	{
		if (!IsValid(Anchor))
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("Invalid anchor provided when attempting to set anchor component status."));
			OutResult = EOculusXRAnchorResult::Failure;
			ResultCallback.ExecuteIfBound(EOculusXRAnchorResult::Failure, FOculusXRUInt64(), EOculusXRSpaceComponentType::Undefined, false);
			return false;
		}

		if (!Anchor->HasValidHandle())
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("Anchor provided to set anchor component status has invalid handle."));
			OutResult = EOculusXRAnchorResult::Failure;
			ResultCallback.ExecuteIfBound(EOculusXRAnchorResult::Failure, FOculusXRUInt64(), EOculusXRSpaceComponentType::Undefined, false);
			return false;
		}

		uint64 RequestId = 0;
		OutResult = FOculusXRAnchorManager::SetSpaceComponentStatus(Anchor->GetHandle(), SpaceComponentType, Enable, Timeout, RequestId);
		bool bAsyncStartSuccess = UOculusXRAnchorBPFunctionLibrary::IsAnchorResultSuccess(OutResult);

		OculusXRTelemetry::Events::FAnchorsSetComponentStatusRequest Trace(static_cast<int>(GetTypeHash(RequestId)));
		if (bAsyncStartSuccess)
		{
			SetComponentStatusBinding SetComponentStatusData;
			SetComponentStatusData.RequestId = RequestId;
			SetComponentStatusData.Binding = ResultCallback;
			SetComponentStatusData.AnchorHandle = Anchor->GetHandle();

			FOculusXRAnchors* SDKInstance = GetInstance();
			SDKInstance->SetComponentStatusBindings.Add(RequestId, SetComponentStatusData);
		}
		else
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("Failed to start async call to set anchor component status."));
			ResultCallback.ExecuteIfBound(EOculusXRAnchorResult::Failure, FOculusXRUInt64(), EOculusXRSpaceComponentType::Undefined, false);
			Trace.SetResult(OculusXRTelemetry::EAction::Cancel).End();
		}

		return true;
	}

	bool FOculusXRAnchors::GetAnchorComponentStatus(UOculusXRAnchorComponent* Anchor, EOculusXRSpaceComponentType SpaceComponentType, bool& OutEnabled, bool& OutChangePending, EOculusXRAnchorResult::Type& OutResult)
	{
		if (!IsValid(Anchor))
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("Invalid anchor provided when attempting to get space component status."));
			OutResult = EOculusXRAnchorResult::Failure;
			return false;
		}

		if (!Anchor->HasValidHandle())
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("Anchor provided to get space component status has invalid handle."));
			OutResult = EOculusXRAnchorResult::Failure;
			return false;
		}

		return GetComponentStatus(Anchor->GetHandle(), SpaceComponentType, OutEnabled, OutChangePending, OutResult);
	}

	bool FOculusXRAnchors::GetAnchorSupportedComponents(UOculusXRAnchorComponent* Anchor, TArray<EOculusXRSpaceComponentType>& OutSupportedComponents, EOculusXRAnchorResult::Type& OutResult)
	{
		if (!IsValid(Anchor))
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("Invalid anchor provided when attempting to get space component status."));
			OutResult = EOculusXRAnchorResult::Failure;
			return false;
		}

		if (!Anchor->HasValidHandle())
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("Anchor provided to get space component status has invalid handle."));
			OutResult = EOculusXRAnchorResult::Failure;
			return false;
		}

		return GetSupportedComponents(Anchor->GetHandle(), OutSupportedComponents, OutResult);
	}

	bool FOculusXRAnchors::SetComponentStatus(uint64 Space, EOculusXRSpaceComponentType SpaceComponentType, bool Enable, float Timeout, const FOculusXRAnchorSetComponentStatusDelegate& ResultCallback, EOculusXRAnchorResult::Type& OutResult)
	{
		uint64 RequestId = 0;
		OutResult = FOculusXRAnchorManager::SetSpaceComponentStatus(Space, SpaceComponentType, Enable, Timeout, RequestId);
		bool bAsyncStartSuccess = UOculusXRAnchorBPFunctionLibrary::IsAnchorResultSuccess(OutResult);

		if (bAsyncStartSuccess)
		{
			SetComponentStatusBinding SetComponentStatusData;
			SetComponentStatusData.RequestId = RequestId;
			SetComponentStatusData.Binding = ResultCallback;
			SetComponentStatusData.AnchorHandle = Space;

			FOculusXRAnchors* SDKInstance = GetInstance();
			SDKInstance->SetComponentStatusBindings.Add(RequestId, SetComponentStatusData);
		}
		else
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("Failed to start async call to set anchor component status."));
			ResultCallback.ExecuteIfBound(EOculusXRAnchorResult::Failure, Space, SpaceComponentType, Enable);
		}

		return true;
	}

	bool FOculusXRAnchors::GetComponentStatus(uint64 AnchorHandle, EOculusXRSpaceComponentType SpaceComponentType, bool& OutEnabled, bool& OutChangePending, EOculusXRAnchorResult::Type& OutResult)
	{
		OutResult = FOculusXRAnchorManager::GetSpaceComponentStatus(AnchorHandle, SpaceComponentType, OutEnabled, OutChangePending);
		return UOculusXRAnchorBPFunctionLibrary::IsAnchorResultSuccess(OutResult);
	}

	bool FOculusXRAnchors::GetSupportedComponents(uint64 AnchorHandle, TArray<EOculusXRSpaceComponentType>& OutSupportedComponents, EOculusXRAnchorResult::Type& OutResult)
	{
		OutResult = FOculusXRAnchorManager::GetSupportedAnchorComponents(AnchorHandle, OutSupportedComponents);
		return UOculusXRAnchorBPFunctionLibrary::IsAnchorResultSuccess(OutResult);
	}

	bool FOculusXRAnchors::SaveAnchor(UOculusXRAnchorComponent* Anchor, EOculusXRSpaceStorageLocation StorageLocation, const FOculusXRAnchorSaveDelegate& ResultCallback, EOculusXRAnchorResult::Type& OutResult)
	{
		if (!IsValid(Anchor))
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("Invalid anchor provided when attempting to save anchor."));
			OutResult = EOculusXRAnchorResult::Failure;
			ResultCallback.ExecuteIfBound(EOculusXRAnchorResult::Failure, nullptr);
			return false;
		}

		if (!Anchor->HasValidHandle())
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("Anchor provided to save anchor has invalid handle."));
			OutResult = EOculusXRAnchorResult::Failure;
			ResultCallback.ExecuteIfBound(EOculusXRAnchorResult::Failure, nullptr);
			return false;
		}

		uint64 RequestId = 0;
		OutResult = FOculusXRAnchorManager::SaveAnchor(Anchor->GetHandle(), StorageLocation, EOculusXRSpaceStoragePersistenceMode::Indefinite, RequestId);
		bool bAsyncStartSuccess = UOculusXRAnchorBPFunctionLibrary::IsAnchorResultSuccess(OutResult);

		OculusXRTelemetry::Events::FAnchorsSaveRequest Trace(static_cast<int>(GetTypeHash(RequestId)));
		if (bAsyncStartSuccess)
		{
			SaveAnchorBinding SaveAnchorData;
			SaveAnchorData.RequestId = RequestId;
			SaveAnchorData.Binding = ResultCallback;
			SaveAnchorData.Location = StorageLocation;
			SaveAnchorData.Anchor = Anchor;

			FOculusXRAnchors* SDKInstance = GetInstance();
			SDKInstance->AnchorSaveBindings.Add(RequestId, SaveAnchorData);
		}
		else
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("Failed to start async call to save anchor."));
			ResultCallback.ExecuteIfBound(EOculusXRAnchorResult::Failure, nullptr);
			Trace.SetResult(OculusXRTelemetry::EAction::Cancel).End();
		}

		return bAsyncStartSuccess;
	}

	void AnchorComponentsToReferences(const TArray<UOculusXRAnchorComponent*>& Anchors, TArray<uint64>& Handles, TArray<TWeakObjectPtr<UOculusXRAnchorComponent>>& AnchorPtrs)
	{
		Handles.Empty();
		AnchorPtrs.Empty();

		for (auto& AnchorInstance : Anchors)
		{
			if (!IsValid(AnchorInstance))
			{
				UE_LOG(LogOculusXRAnchors, Warning, TEXT("Invalid anchor provided when attempting to process anchor list."));
				continue;
			}

			if (!AnchorInstance->HasValidHandle())
			{
				UE_LOG(LogOculusXRAnchors, Warning, TEXT("Anchor provided to anchor list has invalid handle."));
				continue;
			}

			Handles.Add(AnchorInstance->GetHandle().GetValue());
			AnchorPtrs.Add(AnchorInstance);
		}
	}

	bool FOculusXRAnchors::SaveAnchorList(const TArray<UOculusXRAnchorComponent*>& Anchors, EOculusXRSpaceStorageLocation StorageLocation, const FOculusXRAnchorSaveListDelegate& ResultCallback, EOculusXRAnchorResult::Type& OutResult)
	{
		TArray<uint64> Handles;
		TArray<TWeakObjectPtr<UOculusXRAnchorComponent>> SavedAnchors;

		AnchorComponentsToReferences(Anchors, Handles, SavedAnchors);

		uint64 RequestId = 0;
		OutResult = FOculusXRAnchorManager::SaveAnchorList(Handles, StorageLocation, RequestId);
		bool bAsyncStartSuccess = UOculusXRAnchorBPFunctionLibrary::IsAnchorResultSuccess(OutResult);

		if (bAsyncStartSuccess)
		{
			SaveAnchorListBinding SaveAnchorListData;
			SaveAnchorListData.RequestId = RequestId;
			SaveAnchorListData.Binding = ResultCallback;
			SaveAnchorListData.Location = StorageLocation;
			SaveAnchorListData.SavedAnchors = SavedAnchors;

			FOculusXRAnchors* SDKInstance = GetInstance();
			SDKInstance->AnchorSaveListBindings.Add(RequestId, SaveAnchorListData);
		}
		else
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("Failed to start async call to save anchor list."));
			ResultCallback.ExecuteIfBound(OutResult, TArray<UOculusXRAnchorComponent*>());
		}

		return bAsyncStartSuccess;
	}

	bool FOculusXRAnchors::QueryAnchors(const TArray<FOculusXRUUID>& AnchorUUIDs, EOculusXRSpaceStorageLocation Location, const FOculusXRAnchorQueryDelegate& ResultCallback, EOculusXRAnchorResult::Type& OutResult)
	{
		FOculusXRSpaceQueryInfo QueryInfo;
		QueryInfo.FilterType = EOculusXRSpaceQueryFilterType::FilterByIds;
		QueryInfo.IDFilter = AnchorUUIDs;
		QueryInfo.Location = Location;
		QueryInfo.MaxQuerySpaces = AnchorUUIDs.Num();

		return QueryAnchorsAdvanced(QueryInfo, ResultCallback, OutResult);
	}

	bool FOculusXRAnchors::QueryAnchorsAdvanced(const FOculusXRSpaceQueryInfo& QueryInfo, const FOculusXRAnchorQueryDelegate& ResultCallback, EOculusXRAnchorResult::Type& OutResult)
	{
		uint64 RequestId = 0;
		OutResult = FOculusXRAnchorManager::QuerySpaces(QueryInfo, RequestId);
		bool bAsyncStartSuccess = UOculusXRAnchorBPFunctionLibrary::IsAnchorResultSuccess(OutResult);

		OculusXRTelemetry::Events::FAnchorsQueryRequest Trace(static_cast<int>(GetTypeHash(RequestId)));
		if (bAsyncStartSuccess)
		{
			AnchorQueryBinding QueryResults;
			QueryResults.RequestId = RequestId;
			QueryResults.Binding = ResultCallback;
			QueryResults.Location = QueryInfo.Location;

			FOculusXRAnchors* SDKInstance = GetInstance();
			SDKInstance->AnchorQueryBindings.Add(RequestId, QueryResults);
		}
		else
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("Failed to start async call to query anchors."));
			ResultCallback.ExecuteIfBound(EOculusXRAnchorResult::Failure, TArray<FOculusXRSpaceQueryResult>());
			Trace.SetResult(OculusXRTelemetry::EAction::Cancel).End();
		}

		return bAsyncStartSuccess;
	}

	bool FOculusXRAnchors::ShareAnchors(const TArray<UOculusXRAnchorComponent*>& Anchors, const TArray<uint64>& OculusUserIDs, const FOculusXRAnchorShareDelegate& ResultCallback, EOculusXRAnchorResult::Type& OutResult)
	{
		TArray<uint64> Handles;
		TArray<TWeakObjectPtr<UOculusXRAnchorComponent>> SharedAnchors;

		AnchorComponentsToReferences(Anchors, Handles, SharedAnchors);

		uint64 RequestId = 0;
		OutResult = FOculusXRAnchorManager::ShareSpaces(Handles, OculusUserIDs, RequestId);
		bool bAsyncStartSuccess = UOculusXRAnchorBPFunctionLibrary::IsAnchorResultSuccess(OutResult);

		if (bAsyncStartSuccess)
		{
			ShareAnchorsBinding ShareAnchorsData;
			ShareAnchorsData.RequestId = RequestId;
			ShareAnchorsData.Binding = ResultCallback;
			ShareAnchorsData.SharedAnchors = SharedAnchors;
			ShareAnchorsData.OculusUserIds = OculusUserIDs;

			FOculusXRAnchors* SDKInstance = GetInstance();
			SDKInstance->ShareAnchorsBindings.Add(RequestId, ShareAnchorsData);
		}
		else
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("Failed to start async call to share anchor."));
			ResultCallback.ExecuteIfBound(EOculusXRAnchorResult::Failure, TArray<UOculusXRAnchorComponent*>(), TArray<uint64>());
		}

		return bAsyncStartSuccess;
	}


	bool FOculusXRAnchors::GetSpaceContainerUUIDs(uint64 Space, TArray<FOculusXRUUID>& OutUUIDs, EOculusXRAnchorResult::Type& OutResult)
	{
		OutResult = FOculusXRAnchorManager::GetSpaceContainerUUIDs(Space, OutUUIDs);
		return UOculusXRAnchorBPFunctionLibrary::IsAnchorResultSuccess(OutResult);
	}

	bool FOculusXRAnchors::GetSpaceScenePlane(uint64 Space, FVector& OutPos, FVector& OutSize, EOculusXRAnchorResult::Type& OutResult)
	{
		OutResult = FOculusXRAnchorManager::GetSpaceScenePlane(Space, OutPos, OutSize);
		return UOculusXRAnchorBPFunctionLibrary::IsAnchorResultSuccess(OutResult);
	}

	bool FOculusXRAnchors::GetSpaceSceneVolume(uint64 Space, FVector& OutPos, FVector& OutSize, EOculusXRAnchorResult::Type& OutResult)
	{
		OutResult = FOculusXRAnchorManager::GetSpaceSceneVolume(Space, OutPos, OutSize);
		return UOculusXRAnchorBPFunctionLibrary::IsAnchorResultSuccess(OutResult);
	}

	bool FOculusXRAnchors::GetSpaceSemanticClassification(uint64 Space, TArray<FString>& OutSemanticClassifications, EOculusXRAnchorResult::Type& OutResult)
	{
		OutResult = FOculusXRAnchorManager::GetSpaceSemanticClassification(Space, OutSemanticClassifications);
		return UOculusXRAnchorBPFunctionLibrary::IsAnchorResultSuccess(OutResult);
	}

	bool FOculusXRAnchors::GetSpaceBoundary2D(uint64 Space, TArray<FVector2f>& OutVertices, EOculusXRAnchorResult::Type& OutResult)
	{
		OutResult = FOculusXRAnchorManager::GetSpaceBoundary2D(Space, OutVertices);
		return UOculusXRAnchorBPFunctionLibrary::IsAnchorResultSuccess(OutResult);
	}


	void FOculusXRAnchors::HandleSpatialAnchorCreateComplete(FOculusXRUInt64 RequestId, int Result, FOculusXRUInt64 Space, FOculusXRUUID UUID)
	{
		OculusXRTelemetry::Events::FAnchorsCreateResponse(static_cast<int>(GetTypeHash(RequestId)))
			.SetResult(OVRP_SUCCESS(Result) ? OculusXRTelemetry::EAction::Success : OculusXRTelemetry::EAction::Fail);
		CreateAnchorBinding* AnchorDataPtr = CreateSpatialAnchorBindings.Find(RequestId.GetValue());
		if (AnchorDataPtr == nullptr)
		{
			UE_LOG(LogOculusXRAnchors, Error, TEXT("Couldn't find anchor data binding for create spatial anchor! Request: %llu"), RequestId.GetValue());
			return;
		}

		if (OVRP_FAILURE(Result))
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("Failed to create Spatial Anchor. Request: %llu  --  Result: %d"), RequestId.GetValue(), Result);
			AnchorDataPtr->Binding.ExecuteIfBound(static_cast<EOculusXRAnchorResult::Type>(Result), nullptr);
			CreateSpatialAnchorBindings.Remove(RequestId.GetValue());
			return;
		}

		if (!AnchorDataPtr->Actor.IsValid())
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("Actor has been invalidated while creating actor. Request: %llu"), RequestId.GetValue());

			// Clean up the orphaned space
			EOculusXRAnchorResult::Type AnchorResult;
			FOculusXRAnchors::DestroyAnchor(Space, AnchorResult);

			AnchorDataPtr->Binding.ExecuteIfBound(static_cast<EOculusXRAnchorResult::Type>(Result), nullptr);
			CreateSpatialAnchorBindings.Remove(RequestId.GetValue());
			return;
		}

		AActor* TargetActor = AnchorDataPtr->Actor.Get();

		UOculusXRSpatialAnchorComponent* SpatialAnchorComponent = TargetActor->FindComponentByClass<UOculusXRSpatialAnchorComponent>();
		if (SpatialAnchorComponent == nullptr)
		{
			SpatialAnchorComponent = Cast<UOculusXRSpatialAnchorComponent>(TargetActor->AddComponentByClass(UOculusXRSpatialAnchorComponent::StaticClass(), false, FTransform::Identity, false));
		}

		SpatialAnchorComponent->SetHandle(Space);
		SpatialAnchorComponent->SetUUID(UUID);

		uint64 tempOut;
		FOculusXRAnchorManager::SetSpaceComponentStatus(Space, EOculusXRSpaceComponentType::Locatable, true, 0.0f, tempOut);
		FOculusXRAnchorManager::SetSpaceComponentStatus(Space, EOculusXRSpaceComponentType::Sharable, true, 0.0f, tempOut);
		FOculusXRAnchorManager::SetSpaceComponentStatus(Space, EOculusXRSpaceComponentType::Storable, true, 0.0f, tempOut);

		AnchorDataPtr->Binding.ExecuteIfBound(static_cast<EOculusXRAnchorResult::Type>(Result), SpatialAnchorComponent);
		CreateSpatialAnchorBindings.Remove(RequestId.GetValue());
	}

	void FOculusXRAnchors::HandleAnchorEraseComplete(FOculusXRUInt64 RequestId, int Result, FOculusXRUUID UUID, EOculusXRSpaceStorageLocation Location)
	{
		OculusXRTelemetry::Events::FAnchorsEraseResponse(static_cast<int>(GetTypeHash(RequestId)))
			.SetResult(OVRP_SUCCESS(Result) ? OculusXRTelemetry::EAction::Success : OculusXRTelemetry::EAction::Fail);
		EraseAnchorBinding* EraseDataPtr = EraseAnchorBindings.Find(RequestId.GetValue());
		if (EraseDataPtr == nullptr)
		{
			UE_LOG(LogOculusXRAnchors, Error, TEXT("Couldn't find binding for space erase! Request: %llu"), RequestId.GetValue());
			return;
		}

		if (OVRP_FAILURE(Result))
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("Failed to erase Spatial Anchor. Request: %llu  --  Result: %d"), RequestId.GetValue(), Result);
			EraseDataPtr->Binding.ExecuteIfBound(static_cast<EOculusXRAnchorResult::Type>(Result), UUID);
			EraseAnchorBindings.Remove(RequestId.GetValue());
			return;
		}

		if (EraseDataPtr->Anchor.IsValid())
		{
			// Since you can only erase local anchors, just unset local anchor storage
			EraseDataPtr->Anchor->SetStoredLocation(EOculusXRSpaceStorageLocation::Local, false);
		}

		EraseDataPtr->Binding.ExecuteIfBound(static_cast<EOculusXRAnchorResult::Type>(Result), UUID);
		EraseAnchorBindings.Remove(RequestId.GetValue());
	}

	void FOculusXRAnchors::HandleSetComponentStatusComplete(FOculusXRUInt64 RequestId, int Result, FOculusXRUInt64 Space, FOculusXRUUID UUID, EOculusXRSpaceComponentType ComponentType, bool Enabled)
	{
		OculusXRTelemetry::Events::FAnchorsSetComponentStatusResponse(static_cast<int>(GetTypeHash(RequestId)))
			.SetResult(OVRP_SUCCESS(Result) ? OculusXRTelemetry::EAction::Success : OculusXRTelemetry::EAction::Fail);
		SetComponentStatusBinding* SetStatusBinding = SetComponentStatusBindings.Find(RequestId.GetValue());

		if (SetStatusBinding == nullptr)
		{
			UE_LOG(LogOculusXRAnchors, Verbose, TEXT("Couldn't find binding for set component status! Request: %llu"), RequestId.GetValue());
			return;
		}

		if (SetStatusBinding != nullptr)
		{
			SetStatusBinding->Binding.ExecuteIfBound(static_cast<EOculusXRAnchorResult::Type>(Result), SetStatusBinding->AnchorHandle, ComponentType, Enabled);
			SetComponentStatusBindings.Remove(RequestId.GetValue());
			return;
		}

		SetStatusBinding->Binding.ExecuteIfBound(static_cast<EOculusXRAnchorResult::Type>(Result), SetStatusBinding->AnchorHandle, ComponentType, Enabled);
		SetComponentStatusBindings.Remove(RequestId.GetValue());
	}

	void FOculusXRAnchors::HandleAnchorSaveComplete(FOculusXRUInt64 RequestId, FOculusXRUInt64 Space, bool Success, int Result, FOculusXRUUID UUID)
	{
		OculusXRTelemetry::Events::FAnchorsSaveResponse(static_cast<int>(GetTypeHash(RequestId)))
			.SetResult(OVRP_SUCCESS(Result) ? OculusXRTelemetry::EAction::Success : OculusXRTelemetry::EAction::Fail);
		SaveAnchorBinding* SaveAnchorData = AnchorSaveBindings.Find(RequestId.GetValue());
		if (SaveAnchorData == nullptr)
		{
			UE_LOG(LogOculusXRAnchors, Error, TEXT("Couldn't find binding for save anchor! Request: %llu"), RequestId.GetValue());
			return;
		}

		if (OVRP_FAILURE(Result))
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("Failed to save Spatial Anchor. Request: %llu  --  Result: %d  --  Space: %llu"), RequestId.GetValue(), Result, Space.GetValue());
			SaveAnchorData->Binding.ExecuteIfBound(static_cast<EOculusXRAnchorResult::Type>(Result), SaveAnchorData->Anchor.Get());
			AnchorSaveBindings.Remove(RequestId.GetValue());
			return;
		}

		if (SaveAnchorData->Anchor.IsValid())
		{
			SaveAnchorData->Anchor->SetStoredLocation(SaveAnchorData->Location, true);
		}

		SaveAnchorData->Binding.ExecuteIfBound(static_cast<EOculusXRAnchorResult::Type>(Result), SaveAnchorData->Anchor.Get());
		AnchorSaveBindings.Remove(RequestId.GetValue());
	}

	void FOculusXRAnchors::HandleAnchorSaveListComplete(FOculusXRUInt64 RequestId, int Result)
	{
		SaveAnchorListBinding* SaveListData = AnchorSaveListBindings.Find(RequestId.GetValue());
		if (SaveListData == nullptr)
		{
			UE_LOG(LogOculusXRAnchors, Error, TEXT("Couldn't find binding for save anchor list! Request: %llu"), RequestId.GetValue());
			return;
		}

		// Get all anchors
		TArray<UOculusXRAnchorComponent*> SavedAnchors;
		for (auto& WeakAnchor : SaveListData->SavedAnchors)
		{
			if (WeakAnchor.IsValid())
			{
				SavedAnchors.Add(WeakAnchor.Get());
			}
		}

		// Failed to save
		if (OVRP_FAILURE(Result))
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("Failed to save Spatial Anchors. Request: %llu  --  Result: %d"), RequestId.GetValue(), Result);
			SaveListData->Binding.ExecuteIfBound(static_cast<EOculusXRAnchorResult::Type>(Result), SavedAnchors);
			AnchorSaveListBindings.Remove(RequestId.GetValue());
			return;
		}

		// Set new storage location
		for (auto& SavedAnchor : SavedAnchors)
		{
			SavedAnchor->SetStoredLocation(SaveListData->Location, true);
		}

		SaveListData->Binding.ExecuteIfBound(static_cast<EOculusXRAnchorResult::Type>(Result), SavedAnchors);
		AnchorSaveListBindings.Remove(RequestId.GetValue());
	}

	void FOculusXRAnchors::HandleAnchorQueryResultsBegin(FOculusXRUInt64 RequestId)
	{
		// no op
	}

	void FOculusXRAnchors::HandleAnchorQueryResultElement(FOculusXRUInt64 RequestId, FOculusXRUInt64 Space, FOculusXRUUID UUID)
	{
		AnchorQueryBinding* ResultPtr = AnchorQueryBindings.Find(RequestId.GetValue());
		if (ResultPtr)
		{
			uint64 tempOut;
			TArray<EOculusXRSpaceComponentType> supportedTypes;
			FOculusXRAnchorManager::GetSupportedAnchorComponents(Space, supportedTypes);

			if (supportedTypes.Contains(EOculusXRSpaceComponentType::Locatable))
			{
				FOculusXRAnchorManager::SetSpaceComponentStatus(Space, EOculusXRSpaceComponentType::Locatable, true, 0.0f, tempOut);
			}

			if (supportedTypes.Contains(EOculusXRSpaceComponentType::Sharable))
			{
				FOculusXRAnchorManager::SetSpaceComponentStatus(Space, EOculusXRSpaceComponentType::Sharable, true, 0.0f, tempOut);
			}

			if (supportedTypes.Contains(EOculusXRSpaceComponentType::Storable))
			{
				FOculusXRAnchorManager::SetSpaceComponentStatus(Space, EOculusXRSpaceComponentType::Storable, true, 0.0f, tempOut);
			}

			ResultPtr->Results.Add(FOculusXRSpaceQueryResult(Space, UUID, ResultPtr->Location));
		}
	}

	void FOculusXRAnchors::HandleAnchorQueryComplete(FOculusXRUInt64 RequestId, int Result)
	{
		OculusXRTelemetry::Events::FAnchorsQueryResponse(static_cast<int>(GetTypeHash(RequestId)))
			.SetResult(OVRP_SUCCESS(Result) ? OculusXRTelemetry::EAction::Success : OculusXRTelemetry::EAction::Fail);
		AnchorQueryBinding* ResultPtr = AnchorQueryBindings.Find(RequestId.GetValue());
		if (ResultPtr)
		{
			ResultPtr->Binding.ExecuteIfBound(static_cast<EOculusXRAnchorResult::Type>(Result), ResultPtr->Results);
			AnchorQueryBindings.Remove(RequestId.GetValue());
		}
	}

	void FOculusXRAnchors::HandleAnchorSharingComplete(FOculusXRUInt64 RequestId, int Result)
	{
		ShareAnchorsBinding* ShareAnchorsData = ShareAnchorsBindings.Find(RequestId);
		if (ShareAnchorsData == nullptr)
		{
			UE_LOG(LogOculusXRAnchors, Error, TEXT("Couldn't find binding for share anchors! Request: %llu"), RequestId.GetValue());
			return;
		}

		TArray<UOculusXRAnchorComponent*> SharedAnchors;
		for (auto& WeakAnchor : ShareAnchorsData->SharedAnchors)
		{
			SharedAnchors.Add(WeakAnchor.Get());
		}

		ShareAnchorsData->Binding.ExecuteIfBound(static_cast<EOculusXRAnchorResult::Type>(Result), SharedAnchors, ShareAnchorsData->OculusUserIds);
		ShareAnchorsBindings.Remove(RequestId.GetValue());
	}


} // namespace OculusXRAnchors
