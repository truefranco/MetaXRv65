// Copyright (c) Meta Platforms, Inc. and affiliates.

#include "OculusXRAnchorManager.h"

#include <vector>

#include "OculusXRHMD.h"
#include "OculusXRAnchorsModule.h"
#include "OculusXRAnchorDelegates.h"
#include "OculusXRAnchorBPFunctionLibrary.h"
#include "OculusXRAnchorTypesPrivate.h"

namespace OculusXRAnchors
{
	OculusXRHMD::FOculusXRHMD* GetHMD(bool& OutSuccessful)
	{
		OculusXRHMD::FOculusXRHMD* OutHMD = OculusXRHMD::FOculusXRHMD::GetOculusXRHMD();
		if (!OutHMD)
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("Unable to retrieve OculusXRHMD"));
			OutSuccessful = false;
		}

		OutSuccessful = true;

		return OutHMD;
	}

	ovrpUuid ConvertFOculusXRUUIDtoOvrpUuid(const FOculusXRUUID& UUID)
	{
		ovrpUuid Result;
		FMemory::Memcpy(Result.data, UUID.UUIDBytes);

		return Result;
	}

	ovrpSpaceQueryInfo2 ConvertToOVRPSpaceQueryInfo(const FOculusXRSpaceQueryInfo& UEQueryInfo)
	{
		static const int32 MaxIdsInFilter = 1024;
		static const int32 MaxComponentTypesInFilter = 16;

		ovrpSpaceQueryInfo2 Result;

		Result.queryType = ovrpSpaceQueryType_Action;
		Result.actionType = ovrpSpaceQueryActionType_Load;

		Result.maxQuerySpaces = UEQueryInfo.MaxQuerySpaces;
		Result.timeout = static_cast<double>(UEQueryInfo.Timeout); // Prevent compiler warnings, though there is a possible loss of data here.

		switch (UEQueryInfo.Location)
		{
			case EOculusXRSpaceStorageLocation::Invalid:
				Result.location = ovrpSpaceStorageLocation_Invalid;
				break;
			case EOculusXRSpaceStorageLocation::Local:
				Result.location = ovrpSpaceStorageLocation_Local;
				break;
			case EOculusXRSpaceStorageLocation::Cloud:
				Result.location = ovrpSpaceStorageLocation_Cloud;
				break;
		}

		switch (UEQueryInfo.FilterType)
		{
			case EOculusXRSpaceQueryFilterType::None:
				Result.filterType = ovrpSpaceQueryFilterType_None;
				break;
			case EOculusXRSpaceQueryFilterType::FilterByIds:
				Result.filterType = ovrpSpaceQueryFilterType_Ids;
				break;
			case EOculusXRSpaceQueryFilterType::FilterByComponentType:
				Result.filterType = ovrpSpaceQueryFilterType_Components;
				break;
			case EOculusXRSpaceQueryFilterType::FilterByGroup:
				Result.filterType = ovrpSpaceQueryFilterType_GroupUuid;
				break;
		}

		Result.IdInfo.numIds = FMath::Min(MaxIdsInFilter, UEQueryInfo.IDFilter.Num());
		for (int i = 0; i < Result.IdInfo.numIds; ++i)
		{
			ovrpUuid OvrUuid = ConvertFOculusXRUUIDtoOvrpUuid(UEQueryInfo.IDFilter[i]);
			Result.IdInfo.ids[i] = OvrUuid;
		}

		Result.componentsInfo.numComponents = FMath::Min(MaxComponentTypesInFilter, UEQueryInfo.ComponentFilter.Num());
		for (int i = 0; i < Result.componentsInfo.numComponents; ++i)
		{
			Result.componentsInfo.components[i] = ConvertToOvrpComponentType(UEQueryInfo.ComponentFilter[i]);
		}

		Result.groupUuidInfo.groupUuid = ConvertFOculusXRUUIDtoOvrpUuid(UEQueryInfo.GroupUUIDFilter);

		return Result;
	}

	EOculusXRAnchorResult::Type FOculusXRAnchorManager::CreateAnchor(const FTransform& InTransform, uint64& OutRequestId, const FTransform& CameraTransform)
	{
		bool bValidHMD;
		OculusXRHMD::FOculusXRHMD* HMD = GetHMD(bValidHMD);
		if (!bValidHMD)
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("FOculusAnchorManager::CreateAnchor failed to retrieve HMD."));
			return EOculusXRAnchorResult::Failure;
		}

		ovrpTrackingOrigin TrackingOriginType;
		ovrpPosef Posef;
		double Time = 0;

		const FTransform TrackingToWorld = HMD->GetLastTrackingToWorld();

		// convert to tracking space
		const FQuat TrackingSpaceOrientation = TrackingToWorld.Inverse().TransformRotation(InTransform.Rotator().Quaternion());
		const FVector TrackingSpacePosition = TrackingToWorld.Inverse().TransformPosition(InTransform.GetLocation());

		const OculusXRHMD::FPose TrackingSpacePose(TrackingSpaceOrientation, TrackingSpacePosition);

#if WITH_EDITOR
		// Link only head space position update
		FVector OutHeadPosition;
		FQuat OutHeadOrientation;
		const bool bGetPose = HMD->GetCurrentPose(HMD->HMDDeviceId, OutHeadOrientation, OutHeadPosition);
		if (!bGetPose)
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("FOculusAnchorManager::CreateAnchor failed to get current headset pose."));
			return EOculusXRAnchorResult::Failure;
		}

		OculusXRHMD::FPose HeadPose(OutHeadOrientation, OutHeadPosition);

		OculusXRHMD::FPose MainCameraPose(CameraTransform.GetRotation(), CameraTransform.GetLocation());
		OculusXRHMD::FPose PoseInHeadSpace = MainCameraPose.Inverse() * TrackingSpacePose;

		// To world space pose
		OculusXRHMD::FPose WorldPose = HeadPose * PoseInHeadSpace;

		const bool bConverted = HMD->ConvertPose(WorldPose, Posef);
#else
		const bool bConverted = HMD->ConvertPose(TrackingSpacePose, Posef);
#endif

		if (!bConverted)
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("FOculusAnchorManager::CreateAnchor failed to convert pose."));
			return EOculusXRAnchorResult::Failure;
		}

		FOculusXRHMDModule::GetPluginWrapper().GetTrackingOriginType2(&TrackingOriginType);
		FOculusXRHMDModule::GetPluginWrapper().GetTimeInSeconds(&Time);

		const ovrpSpatialAnchorCreateInfo SpatialAnchorCreateInfo = {
			TrackingOriginType,
			Posef,
			Time
		};

		const ovrpResult Result = FOculusXRHMDModule::GetPluginWrapper().CreateSpatialAnchor(&SpatialAnchorCreateInfo, &OutRequestId);
		UE_LOG(LogOculusXRAnchors, Verbose, TEXT("CreateAnchor Request ID: %llu"), OutRequestId);

		if (OVRP_FAILURE(Result))
		{
			UE_LOG(LogOculusXRAnchors, Error, TEXT("FOculusAnchorManager::CreateAnchor failed. Result: %d"), Result);
		}

		return static_cast<EOculusXRAnchorResult::Type>(Result);
	}

	EOculusXRAnchorResult::Type FOculusXRAnchorManager::DestroySpace(uint64 Space)
	{
		const ovrpResult Result = FOculusXRHMDModule::GetPluginWrapper().DestroySpace(static_cast<ovrpSpace*>(&Space));

		UE_LOG(LogOculusXRAnchors, Verbose, TEXT("DestroySpace  Space ID: %llu"), Space);

		return static_cast<EOculusXRAnchorResult::Type>(Result);
	}

	EOculusXRAnchorResult::Type FOculusXRAnchorManager::SetSpaceComponentStatus(uint64 Space, EOculusXRSpaceComponentType SpaceComponentType, bool Enable, float Timeout, uint64& OutRequestId)
	{
		ovrpSpaceComponentType ovrpType = ConvertToOvrpComponentType(SpaceComponentType);
		ovrpUInt64 OvrpOutRequestId = 0;

		const ovrpUInt64 OVRPSpace = Space;

		// validate existing status
		ovrpBool isEnabled = false;
		ovrpBool changePending = false;
		const ovrpResult getComponentStatusResult = FOculusXRHMDModule::GetPluginWrapper().GetSpaceComponentStatus(&OVRPSpace, ovrpType, &isEnabled, &changePending);

		bool isStatusChangingOrSame = (static_cast<bool>(isEnabled) == Enable && !changePending) || (static_cast<bool>(isEnabled) != Enable && changePending);
		if (OVRP_SUCCESS(getComponentStatusResult) && isStatusChangingOrSame)
		{
			return EOculusXRAnchorResult::Success;
		}

		// set status
		const ovrpResult Result = FOculusXRHMDModule::GetPluginWrapper().SetSpaceComponentStatus(
			&OVRPSpace,
			ovrpType,
			Enable,
			Timeout,
			&OvrpOutRequestId);

		memcpy(&OutRequestId, &OvrpOutRequestId, sizeof(uint64));

		UE_LOG(LogOculusXRAnchors, Verbose, TEXT("SetSpaceComponentStatus  Request ID: %llu"), OutRequestId);

		return static_cast<EOculusXRAnchorResult::Type>(Result);
	}

	EOculusXRAnchorResult::Type FOculusXRAnchorManager::GetSpaceComponentStatus(uint64 Space, EOculusXRSpaceComponentType SpaceComponentType, bool& OutEnabled, bool& OutChangePending)
	{
		const ovrpUInt64 OVRPSpace = Space;
		ovrpBool OutOvrpEnabled = ovrpBool_False;
		ovrpBool OutOvrpChangePending = ovrpBool_False;

		ovrpSpaceComponentType ovrpType = ConvertToOvrpComponentType(SpaceComponentType);

		const ovrpResult Result = FOculusXRHMDModule::GetPluginWrapper().GetSpaceComponentStatus(
			&OVRPSpace,
			ovrpType,
			&OutOvrpEnabled,
			&OutOvrpChangePending);

		OutEnabled = (OutOvrpEnabled == ovrpBool_True);
		OutChangePending = (OutOvrpChangePending == ovrpBool_True);

		return static_cast<EOculusXRAnchorResult::Type>(Result);
	}

	EOculusXRAnchorResult::Type FOculusXRAnchorManager::GetSupportedAnchorComponents(uint64 Handle, TArray<EOculusXRSpaceComponentType>& OutSupportedTypes)
	{
		if (!FOculusXRHMDModule::GetPluginWrapper().GetInitialized())
		{
			return EOculusXRAnchorResult::Failure;
		}

		ovrpSpace ovrSpace = Handle;
		TArray<ovrpSpaceComponentType> ovrComponentTypes;
		ovrpUInt32 input = 0;
		ovrpUInt32 output = 0;

		ovrpResult enumerateResult = FOculusXRHMDModule::GetPluginWrapper().EnumerateSpaceSupportedComponents(&ovrSpace, input, &output, nullptr);
		if (!OVRP_SUCCESS(enumerateResult))
		{
			return static_cast<EOculusXRAnchorResult::Type>(enumerateResult);
		}

		input = output;
		ovrComponentTypes.SetNumZeroed(output);

		enumerateResult = FOculusXRHMDModule::GetPluginWrapper().EnumerateSpaceSupportedComponents(&ovrSpace, input, &output, ovrComponentTypes.GetData());
		if (!OVRP_SUCCESS(enumerateResult))
		{
			return static_cast<EOculusXRAnchorResult::Type>(enumerateResult);
		}

		OutSupportedTypes.SetNumZeroed(ovrComponentTypes.Num());
		for (int i = 0; i < ovrComponentTypes.Num(); ++i)
		{
			OutSupportedTypes[i] = ConvertToUEComponentType(ovrComponentTypes[i]);
		}

		return static_cast<EOculusXRAnchorResult::Type>(enumerateResult);
	}

	EOculusXRAnchorResult::Type FOculusXRAnchorManager::SaveAnchor(uint64 Space,
		EOculusXRSpaceStorageLocation StorageLocation,
		EOculusXRSpaceStoragePersistenceMode StoragePersistenceMode, uint64& OutRequestId)
	{
		ovrpSpaceStorageLocation OvrpStorageLocation = ovrpSpaceStorageLocation_Local;
		switch (StorageLocation)
		{
			case EOculusXRSpaceStorageLocation::Invalid:
				OvrpStorageLocation = ovrpSpaceStorageLocation_Invalid;
				break;
			case EOculusXRSpaceStorageLocation::Local:
				OvrpStorageLocation = ovrpSpaceStorageLocation_Local;
				break;
			case EOculusXRSpaceStorageLocation::Cloud:
				OvrpStorageLocation = ovrpSpaceStorageLocation_Cloud;
				break;
			default:
				break;
		}

		ovrpSpaceStoragePersistenceMode OvrpStoragePersistenceMode = ovrpSpaceStoragePersistenceMode_Invalid;
		switch (StoragePersistenceMode)
		{
			case EOculusXRSpaceStoragePersistenceMode::Invalid:
				OvrpStoragePersistenceMode = ovrpSpaceStoragePersistenceMode_Invalid;
				break;
			case EOculusXRSpaceStoragePersistenceMode::Indefinite:
				OvrpStoragePersistenceMode = ovrpSpaceStoragePersistenceMode_Indefinite;
				break;
			default:
				break;
		}

		ovrpUInt64 OvrpOutRequestId = 0;
		const ovrpResult Result = FOculusXRHMDModule::GetPluginWrapper().SaveSpace(&Space, OvrpStorageLocation, OvrpStoragePersistenceMode, &OvrpOutRequestId);

		UE_LOG(LogOculusXRAnchors, Verbose, TEXT("Saving space with: SpaceID: %llu  --  Location: %d  --  Persistence: %d  --  OutID: %llu"), Space, OvrpStorageLocation, OvrpStoragePersistenceMode, OvrpOutRequestId);

		memcpy(&OutRequestId, &OvrpOutRequestId, sizeof(uint64));

		if (OVRP_FAILURE(Result))
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("FOculusXRHMD::SaveAnchor failed with: SpaceID: %llu  --  Location: %d  --  Persistence: %d"), Space, OvrpStorageLocation, OvrpStoragePersistenceMode);
		}

		return static_cast<EOculusXRAnchorResult::Type>(Result);
	}

	EOculusXRAnchorResult::Type FOculusXRAnchorManager::SaveAnchorList(const TArray<uint64>& Spaces, EOculusXRSpaceStorageLocation StorageLocation, uint64& OutRequestId)
	{
		ovrpSpaceStorageLocation OvrpStorageLocation = ovrpSpaceStorageLocation_Local;
		switch (StorageLocation)
		{
			case EOculusXRSpaceStorageLocation::Invalid:
				OvrpStorageLocation = ovrpSpaceStorageLocation_Invalid;
				break;
			case EOculusXRSpaceStorageLocation::Local:
				OvrpStorageLocation = ovrpSpaceStorageLocation_Local;
				break;
			case EOculusXRSpaceStorageLocation::Cloud:
				OvrpStorageLocation = ovrpSpaceStorageLocation_Cloud;
				break;
			default:
				break;
		}

		ovrpUInt64 OvrpOutRequestId = 0;
		const ovrpResult Result = FOculusXRHMDModule::GetPluginWrapper().SaveSpaceList(Spaces.GetData(), Spaces.Num(), OvrpStorageLocation, &OvrpOutRequestId);

		UE_LOG(LogOculusXRAnchors, Verbose, TEXT("Saving space list: Location: %d --  OutID: %llu"), OvrpStorageLocation, OvrpOutRequestId);
		for (auto& it : Spaces)
		{
			UE_LOG(LogOculusXRAnchors, Verbose, TEXT("\tSpaceID: %llu"), it);
		}

		memcpy(&OutRequestId, &OvrpOutRequestId, sizeof(uint64));

		if (OVRP_FAILURE(Result))
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("SaveSpaceList failed -- Result: %d"), Result);
		}

		return static_cast<EOculusXRAnchorResult::Type>(Result);
	}

	EOculusXRAnchorResult::Type FOculusXRAnchorManager::EraseAnchor(uint64 AnchorHandle,
		EOculusXRSpaceStorageLocation StorageLocation, uint64& OutRequestId)
	{
		ovrpSpaceStorageLocation ovrpStorageLocation = ovrpSpaceStorageLocation_Local;
		switch (StorageLocation)
		{
			case EOculusXRSpaceStorageLocation::Invalid:
				ovrpStorageLocation = ovrpSpaceStorageLocation_Invalid;
				break;
			case EOculusXRSpaceStorageLocation::Local:
				ovrpStorageLocation = ovrpSpaceStorageLocation_Local;
				break;
			default:;
		}

		ovrpUInt64 OvrpOutRequestId = 0;
		const ovrpResult Result = FOculusXRHMDModule::GetPluginWrapper().EraseSpace(&AnchorHandle, ovrpStorageLocation, &OvrpOutRequestId);
		memcpy(&OutRequestId, &OvrpOutRequestId, sizeof(uint64));

		UE_LOG(LogOculusXRAnchors, Log, TEXT("Erasing anchor -- Handle: %llu  --  Location: %d  --  OutID: %llu"), AnchorHandle, ovrpStorageLocation, OvrpOutRequestId);

		return static_cast<EOculusXRAnchorResult::Type>(Result);
	}

	EOculusXRAnchorResult::Type FOculusXRAnchorManager::QuerySpaces(const FOculusXRSpaceQueryInfo& QueryInfo, uint64& OutRequestId)
	{
		ovrpUInt64 OvrpOutRequestId = 0;
		ovrpResult QuerySpacesResult = ovrpFailure;

		ovrpSpaceQueryInfo2 ovrQueryInfo = ConvertToOVRPSpaceQueryInfo(QueryInfo);
		QuerySpacesResult = FOculusXRHMDModule::GetPluginWrapper().QuerySpaces2(&ovrQueryInfo, &OvrpOutRequestId);

		memcpy(&OutRequestId, &OvrpOutRequestId, sizeof(uint64));

		UE_LOG(LogOculusXRAnchors, Verbose, TEXT("Query Spaces\n ovrpSpaceQueryInfo:\n\tQueryType: %d\n\tMaxQuerySpaces: %d\n\tTimeout: %f\n\tLocation: %d\n\tActionType: %d\n\tFilterType: %d\n\n\tRequest ID: %llu"),
			ovrQueryInfo.queryType, ovrQueryInfo.maxQuerySpaces, (float)ovrQueryInfo.timeout, ovrQueryInfo.location, ovrQueryInfo.actionType, ovrQueryInfo.filterType, OutRequestId);

		if (QueryInfo.FilterType == EOculusXRSpaceQueryFilterType::FilterByIds)
		{
			UE_LOG(LogOculusXRAnchors, Verbose, TEXT("Query contains %d UUIDs"), QueryInfo.IDFilter.Num());
			for (auto& it : QueryInfo.IDFilter)
			{
				UE_LOG(LogOculusXRAnchors, Verbose, TEXT("UUID: %s"), *it.ToString());
			}
		}
		else if (QueryInfo.FilterType == EOculusXRSpaceQueryFilterType::FilterByComponentType)
		{
			UE_LOG(LogOculusXRAnchors, Verbose, TEXT("Query contains %d Component Types"), QueryInfo.ComponentFilter.Num());
			for (auto& it : QueryInfo.ComponentFilter)
			{
				UE_LOG(LogOculusXRAnchors, Verbose, TEXT("ComponentType: %s"), *UEnum::GetValueAsString(it));
			}
		}
		else if (QueryInfo.FilterType == EOculusXRSpaceQueryFilterType::FilterByGroup)
		{
			UE_LOG(LogOculusXRAnchors, Verbose, TEXT("Query contains group filter  -  UUID: %s"), *QueryInfo.GroupUUIDFilter.ToString());
		}

		return static_cast<EOculusXRAnchorResult::Type>(QuerySpacesResult);
	}

	EOculusXRAnchorResult::Type FOculusXRAnchorManager::ShareSpaces(const TArray<uint64>& Spaces, const TArray<uint64>& UserIds, uint64& OutRequestId)
	{
		TArray<const char*> stringStorage;
		TArray<ovrpUser> OvrpUsers;
		for (const auto& UserId : UserIds)
		{
			ovrpUser OvrUser;
			ovrpResult Result = FOculusXRHMDModule::GetPluginWrapper().CreateSpaceUser(&UserId, &OvrUser);
			if (OVRP_FAILURE(Result))
			{
				UE_LOG(LogOculusXRAnchors, Warning, TEXT("Failed to create space user from ID  -  %llu"), UserId);
				continue;
			}

			OvrpUsers.Add(OvrUser);
		}

		ovrpUInt64 OvrpOutRequestId = 0;
		const ovrpResult ShareSpacesResult = FOculusXRHMDModule::GetPluginWrapper().ShareSpaces(Spaces.GetData(), Spaces.Num(), OvrpUsers.GetData(), OvrpUsers.Num(), &OvrpOutRequestId);

		UE_LOG(LogOculusXRAnchors, Verbose, TEXT("Sharing space list  --  OutID: %llu"), OvrpOutRequestId);
		for (auto& User : OvrpUsers)
		{
			UE_LOG(LogOculusXRAnchors, Verbose, TEXT("\tOvrpUser: %llu"), User);
			ovrpResult Result = FOculusXRHMDModule::GetPluginWrapper().DestroySpaceUser(&User);
			if (OVRP_FAILURE(Result))
			{
				UE_LOG(LogOculusXRAnchors, Verbose, TEXT("Failed to destroy space user: %llu"), User);
				continue;
			}
		}

		for (auto& it : Spaces)
		{
			UE_LOG(LogOculusXRAnchors, Verbose, TEXT("\tSpaceID: %llu"), it);
		}

		memcpy(&OutRequestId, &OvrpOutRequestId, sizeof(uint64));

		return static_cast<EOculusXRAnchorResult::Type>(ShareSpacesResult);
	}

	EOculusXRAnchorResult::Type FOculusXRAnchorManager::GetSpaceContainerUUIDs(uint64 Space, TArray<FOculusXRUUID>& OutUUIDs)
	{
		TArray<ovrpUuid> ovrUuidArray;

		// Get the number of elements in the container
		ovrpSpaceContainer ovrSpaceContainer;
		ovrSpaceContainer.uuidCapacityInput = 0;
		ovrSpaceContainer.uuidCountOutput = 0;
		ovrSpaceContainer.uuids = nullptr;
		ovrpResult result = FOculusXRHMDModule::GetPluginWrapper().GetSpaceContainer(&Space, &ovrSpaceContainer);
		if (OVRP_FAILURE(result))
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("Failed to get space container %d"), result);
			return static_cast<EOculusXRAnchorResult::Type>(result);
		}

		// Retrieve the actual array of UUIDs
		ovrUuidArray.SetNum(ovrSpaceContainer.uuidCountOutput);
		ovrSpaceContainer.uuidCapacityInput = ovrSpaceContainer.uuidCountOutput;
		ovrSpaceContainer.uuids = ovrUuidArray.GetData();

		result = FOculusXRHMDModule::GetPluginWrapper().GetSpaceContainer(&Space, &ovrSpaceContainer);
		if (OVRP_FAILURE(result))
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("Failed to get space container %d"), result);
			return static_cast<EOculusXRAnchorResult::Type>(result);
		}

		// Write out the remaining UUIDs
		OutUUIDs.Reserve(ovrUuidArray.Num());
		for (auto& it : ovrUuidArray)
		{
			OutUUIDs.Add(FOculusXRUUID(it.data));
		}

		return EOculusXRAnchorResult::Success;
	}

	EOculusXRAnchorResult::Type FOculusXRAnchorManager::GetSpaceContainer(uint64 Space, TArray<FOculusXRUUID>& OutContainerUuids)
	{
		OutContainerUuids.Empty();

		ovrpSpaceContainer container;

		ovrpResult Result = FOculusXRHMDModule::GetPluginWrapper().GetSpaceContainer(&Space, &container);

		if (OVRP_SUCCESS(Result))
		{
			TArray<ovrpUuid> uuids;
			size_t size = container.uuidCountOutput;
			uuids.InsertZeroed(0, size);
			container.uuidCapacityInput = size;
			container.uuids = uuids.GetData();
			Result = FOculusXRHMDModule::GetPluginWrapper().GetSpaceContainer(&Space, &container);
			if (OVRP_SUCCESS(Result))
			{
				OutContainerUuids.InsertZeroed(0, size);
				for (size_t i = 0; i < size; i++)
				{
					OutContainerUuids[i] = FOculusXRUUID(uuids[i].data);
				}
			}
		}

		return static_cast<EOculusXRAnchorResult::Type>(Result);
	}

	EOculusXRAnchorResult::Type FOculusXRAnchorManager::DiscoverSpaces(const FOculusXRSpaceDiscoveryInfo& DiscoveryInfo, uint64& OutRequestId)
	{
		uint32 FiltersCount = (uint32)DiscoveryInfo.Filters.Num();
		ovrpSpaceDiscoveryInfo OvrDiscoveryInfo{ FiltersCount };

		UE_LOG(LogOculusXRAnchors, Display, TEXT("Staring discovery with %d filter(s)"), FiltersCount);

		TArray<const ovrpSpaceDiscoveryFilterHeader*> filters;
		filters.SetNumZeroed(FiltersCount);

		for (uint32 i = 0; i < FiltersCount; ++i)
		{
			ensure(DiscoveryInfo.Filters[i] != nullptr);
			filters[i] = DiscoveryInfo.Filters[i]->GenerateOVRPFilter();
		}

		OvrDiscoveryInfo.Filters = filters.GetData();
		const ovrpResult Result = FOculusXRHMDModule::GetPluginWrapper().DiscoverSpaces(&OvrDiscoveryInfo, &OutRequestId);

		if (!OVRP_SUCCESS(Result))
		{
			UE_LOG(LogOculusXRAnchors, Error, TEXT("FOculusXRAnchorManager - Discovery failed -- Result: %d"), Result);
		}

		return static_cast<EOculusXRAnchorResult::Type>(Result);
	}

	EOculusXRAnchorResult::Type FOculusXRAnchorManager::SaveSpaces(const TArray<uint64>& Spaces, uint64& OutRequestId)
	{
		if (Spaces.Num() == 0)
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("FOculusXRAnchorManager - SaveSpaces empty Spaces array"));
			return EOculusXRAnchorResult::Failure_InvalidParameter;
		}

		const ovrpResult Result = FOculusXRHMDModule::GetPluginWrapper().SaveSpaces(Spaces.Num(), Spaces.GetData(), &OutRequestId);

		if (!OVRP_SUCCESS(Result))
		{
			UE_LOG(LogOculusXRAnchors, Error, TEXT("FOculusXRAnchorManager - SaveSpaces failed -- Result: %d"), Result);
		}

		return static_cast<EOculusXRAnchorResult::Type>(Result);
	}

	EOculusXRAnchorResult::Type FOculusXRAnchorManager::EraseSpaces(const TArray<FOculusXRUInt64>& Handles, const TArray<FOculusXRUUID>& UUIDs, uint64& OutRequestId)
	{
		if (Handles.IsEmpty() && UUIDs.IsEmpty())
		{
			UE_LOG(LogOculusXRAnchors, Warning, TEXT("FOculusXRAnchorManager::EraseSpaces - You cannot have an empty handle and uuid array. At least one array must have elements."));
			return EOculusXRAnchorResult::Failure_InvalidParameter;
		}

		TArray<ovrpSpace> ovrpHandles;
		for (auto& handle : Handles)
		{
			ovrpHandles.Add(handle.GetValue());
		}

		TArray<ovrpUuid> ovrpUUIDs;
		for (auto& id : UUIDs)
		{
			ovrpUUIDs.Add(ConvertFOculusXRUUIDtoOvrpUuid(id));
		}

		const ovrpResult Result = FOculusXRHMDModule::GetPluginWrapper().EraseSpaces(ovrpHandles.Num(), ovrpHandles.GetData(), ovrpUUIDs.Num(), ovrpUUIDs.GetData(), &OutRequestId);

		if (!OVRP_SUCCESS(Result))
		{
			UE_LOG(LogOculusXRAnchors, Error, TEXT("FOculusXRAnchorManager - EraseSpaces failed -- Result: %d"), Result);
		}

		return static_cast<EOculusXRAnchorResult::Type>(Result);
	}
} // namespace OculusXRAnchors
