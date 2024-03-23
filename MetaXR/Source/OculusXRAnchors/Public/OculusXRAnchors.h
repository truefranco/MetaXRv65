// Copyright (c) Meta Platforms, Inc. and affiliates.

#pragma once

#include "CoreMinimal.h"
#include "OculusXRAnchorComponent.h"
#include "OculusXRAnchorTypes.h"

DECLARE_DELEGATE_TwoParams(FOculusXRSpatialAnchorCreateDelegate, EOculusXRAnchorResult::Type /*Result*/, UOculusXRAnchorComponent* /*Anchor*/);
DECLARE_DELEGATE_TwoParams(FOculusXRAnchorEraseDelegate, EOculusXRAnchorResult::Type /*Result*/, FOculusXRUUID /*AnchorUUID*/);
DECLARE_DELEGATE_FourParams(FOculusXRAnchorSetComponentStatusDelegate, EOculusXRAnchorResult::Type /*Result*/, uint64 /*AnchorHandle*/, EOculusXRSpaceComponentType /*ComponentType*/, bool /*Enabled*/);
DECLARE_DELEGATE_TwoParams(FOculusXRAnchorSaveDelegate, EOculusXRAnchorResult::Type /*Result*/, UOculusXRAnchorComponent* /*Anchor*/);
DECLARE_DELEGATE_TwoParams(FOculusXRAnchorSaveListDelegate, EOculusXRAnchorResult::Type /*Result*/, const TArray<UOculusXRAnchorComponent*>& /*SavedAnchors*/);
DECLARE_DELEGATE_TwoParams(FOculusXRAnchorQueryDelegate, EOculusXRAnchorResult::Type /*Result*/, const TArray<FOculusXRSpaceQueryResult>& /*Results*/);
DECLARE_DELEGATE_ThreeParams(FOculusXRAnchorShareDelegate, EOculusXRAnchorResult::Type /*Result*/, const TArray<UOculusXRAnchorComponent*>& /*Anchors*/, const TArray<uint64>& /*Users*/);

namespace OculusXRAnchors
{

	struct OCULUSXRANCHORS_API FOculusXRAnchors
	{
		void Initialize();
		void Teardown();

		static FOculusXRAnchors* GetInstance();

		static bool CreateSpatialAnchor(const FTransform& InTransform, AActor* TargetActor, const FOculusXRSpatialAnchorCreateDelegate& ResultCallback, EOculusXRAnchorResult::Type& OutResult);
		static bool EraseAnchor(UOculusXRAnchorComponent* Anchor, const FOculusXRAnchorEraseDelegate& ResultCallback, EOculusXRAnchorResult::Type& OutResult);
		static bool DestroyAnchor(uint64 AnchorHandle, EOculusXRAnchorResult::Type& OutResult);

		static bool SetAnchorComponentStatus(UOculusXRAnchorComponent* Anchor, EOculusXRSpaceComponentType SpaceComponentType, bool Enable, float Timeout, const FOculusXRAnchorSetComponentStatusDelegate& ResultCallback, EOculusXRAnchorResult::Type& OutResult);
		static bool GetAnchorComponentStatus(UOculusXRAnchorComponent* Anchor, EOculusXRSpaceComponentType SpaceComponentType, bool& OutEnabled, bool& OutChangePending, EOculusXRAnchorResult::Type& OutResult);
		static bool GetAnchorSupportedComponents(UOculusXRAnchorComponent* Anchor, TArray<EOculusXRSpaceComponentType>& OutSupportedComponents, EOculusXRAnchorResult::Type& OutResult);

		static bool SetComponentStatus(uint64 Space, EOculusXRSpaceComponentType SpaceComponentType, bool Enable, float Timeout, const FOculusXRAnchorSetComponentStatusDelegate& ResultCallback, EOculusXRAnchorResult::Type& OutResult);
		static bool GetComponentStatus(uint64 AnchorHandle, EOculusXRSpaceComponentType SpaceComponentType, bool& OutEnabled, bool& OutChangePending, EOculusXRAnchorResult::Type& OutResult);
		static bool GetSupportedComponents(uint64 AnchorHandle, TArray<EOculusXRSpaceComponentType>& OutSupportedComponents, EOculusXRAnchorResult::Type& OutResult);

		static bool SaveAnchor(UOculusXRAnchorComponent* Anchor, EOculusXRSpaceStorageLocation StorageLocation, const FOculusXRAnchorSaveDelegate& ResultCallback, EOculusXRAnchorResult::Type& OutResult);
		static bool SaveAnchorList(const TArray<UOculusXRAnchorComponent*>& Anchors, EOculusXRSpaceStorageLocation StorageLocation, const FOculusXRAnchorSaveListDelegate& ResultCallback, EOculusXRAnchorResult::Type& OutResult);

		static bool QueryAnchors(const TArray<FOculusXRUUID>& AnchorUUIDs, EOculusXRSpaceStorageLocation Location, const FOculusXRAnchorQueryDelegate& ResultCallback, EOculusXRAnchorResult::Type& OutResult);
		static bool QueryAnchorsAdvanced(const FOculusXRSpaceQueryInfo& QueryInfo, const FOculusXRAnchorQueryDelegate& ResultCallback, EOculusXRAnchorResult::Type& OutResult);

		static bool ShareAnchors(const TArray<UOculusXRAnchorComponent*>& Anchors, const TArray<uint64>& OculusUserIDs, const FOculusXRAnchorShareDelegate& ResultCallback, EOculusXRAnchorResult::Type& OutResult);

		static bool GetSpaceContainerUUIDs(uint64 Space, TArray<FOculusXRUUID>& OutUUIDs, EOculusXRAnchorResult::Type& OutResult);
		static bool GetSpaceScenePlane(uint64 Space, FVector& OutPos, FVector& OutSize, EOculusXRAnchorResult::Type& OutResult);
		static bool GetSpaceSceneVolume(uint64 Space, FVector& OutPos, FVector& OutSize, EOculusXRAnchorResult::Type& OutResult);
		static bool GetSpaceSemanticClassification(uint64 Space, TArray<FString>& OutSemanticClassifications, EOculusXRAnchorResult::Type& OutResult);
		static bool GetSpaceBoundary2D(uint64 Space, TArray<FVector2f>& OutVertices, EOculusXRAnchorResult::Type& OutResult);



	private:
		void HandleSpatialAnchorCreateComplete(FOculusXRUInt64 RequestId, int Result, FOculusXRUInt64 Space, FOculusXRUUID UUID);
		void HandleAnchorEraseComplete(FOculusXRUInt64 RequestId, int Result, FOculusXRUUID UUID, EOculusXRSpaceStorageLocation Location);

		void HandleSetComponentStatusComplete(FOculusXRUInt64 RequestId, int Result, FOculusXRUInt64 Space, FOculusXRUUID UUID, EOculusXRSpaceComponentType ComponentType, bool Enabled);

		void HandleAnchorSaveComplete(FOculusXRUInt64 RequestId, FOculusXRUInt64 Space, bool Success, int Result, FOculusXRUUID UUID);
		void HandleAnchorSaveListComplete(FOculusXRUInt64 RequestId, int Result);

		void HandleAnchorQueryResultsBegin(FOculusXRUInt64 RequestId);
		void HandleAnchorQueryResultElement(FOculusXRUInt64 RequestId, FOculusXRUInt64 Space, FOculusXRUUID UUID);
		void HandleAnchorQueryComplete(FOculusXRUInt64 RequestId, int Result);

		void HandleAnchorSharingComplete(FOculusXRUInt64 RequestId, int Result);


		struct EraseAnchorBinding
		{
			FOculusXRUInt64 RequestId;
			FOculusXRAnchorEraseDelegate Binding;
			TWeakObjectPtr<UOculusXRAnchorComponent> Anchor;
		};

		struct SetComponentStatusBinding
		{
			FOculusXRUInt64 RequestId;
			FOculusXRAnchorSetComponentStatusDelegate Binding;
			uint64 AnchorHandle;
		};

		struct CreateAnchorBinding
		{
			FOculusXRUInt64 RequestId;
			FOculusXRSpatialAnchorCreateDelegate Binding;
			TWeakObjectPtr<AActor> Actor;
		};

		struct SaveAnchorBinding
		{
			FOculusXRUInt64 RequestId;
			FOculusXRAnchorSaveDelegate Binding;
			EOculusXRSpaceStorageLocation Location;
			TWeakObjectPtr<UOculusXRAnchorComponent> Anchor;
		};

		struct SaveAnchorListBinding
		{
			FOculusXRUInt64 RequestId;
			FOculusXRAnchorSaveListDelegate Binding;
			EOculusXRSpaceStorageLocation Location;
			TArray<TWeakObjectPtr<UOculusXRAnchorComponent>> SavedAnchors;
		};

		struct AnchorQueryBinding
		{
			FOculusXRUInt64 RequestId;
			FOculusXRAnchorQueryDelegate Binding;
			EOculusXRSpaceStorageLocation Location;
			TArray<FOculusXRSpaceQueryResult> Results;
		};

		struct ShareAnchorsBinding
		{
			FOculusXRUInt64 RequestId;
			FOculusXRAnchorShareDelegate Binding;
			TArray<TWeakObjectPtr<UOculusXRAnchorComponent>> SharedAnchors;
			TArray<uint64> OculusUserIds;
		};


		// Delegate bindings
		TMap<uint64, CreateAnchorBinding> CreateSpatialAnchorBindings;
		TMap<uint64, EraseAnchorBinding> EraseAnchorBindings;
		TMap<uint64, SetComponentStatusBinding> SetComponentStatusBindings;
		TMap<uint64, SaveAnchorBinding> AnchorSaveBindings;
		TMap<uint64, SaveAnchorListBinding> AnchorSaveListBindings;
		TMap<uint64, AnchorQueryBinding> AnchorQueryBindings;
		TMap<uint64, ShareAnchorsBinding> ShareAnchorsBindings;

		// Delegate handles
		FDelegateHandle DelegateHandleAnchorCreate;
		FDelegateHandle DelegateHandleAnchorErase;
		FDelegateHandle DelegateHandleSetComponentStatus;
		FDelegateHandle DelegateHandleAnchorSave;
		FDelegateHandle DelegateHandleAnchorSaveList;
		FDelegateHandle DelegateHandleQueryResultsBegin;
		FDelegateHandle DelegateHandleQueryResultElement;
		FDelegateHandle DelegateHandleQueryComplete;
		FDelegateHandle DelegateHandleAnchorShare;
	};

} // namespace OculusXRAnchors
