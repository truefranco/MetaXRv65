// Copyright (c) Meta Platforms, Inc. and affiliates.

#include "OculusXRColocationSubsystem.h"
#include "OculusXRColocationModule.h"
#include <Engine/GameInstance.h>
#include "Engine/Engine.h"

UOculusXRColocationSubsystem::UOculusXRColocationSubsystem() {}

UOculusXRColocationSubsystem* UOculusXRColocationSubsystem::Get()
{
	if (GWorld != nullptr)
	{
#if WITH_EDITOR
		if (GIsEditor)
		{
			for (const FWorldContext& Context : GEngine->GetWorldContexts())
			{
				if (Context.WorldType == EWorldType::PIE)
				{
					return Context.World()->GetGameInstance()->GetSubsystem<UOculusXRColocationSubsystem>();
				}
			}
		}
#endif // WITH_EDITOR

		return GWorld->GetGameInstance()->GetSubsystem<UOculusXRColocationSubsystem>();
	}

	return nullptr;
}

void UOculusXRColocationSubsystem::AssignLocalColocationSessionData(const FOculusXRUUID& Uuid, const TArray<uint8>& Data)
{
	check(!bHasLocalSession);
	LocalSession.Uuid = Uuid;
	LocalSession.Metadata = Data;
	bHasLocalSession = true;
}

void UOculusXRColocationSubsystem::ClearLocalColocationSession()
{
	bHasLocalSession = false;
	LocalSession.Uuid = FOculusXRUUID();
	LocalSession.Metadata.Empty();
}

bool UOculusXRColocationSubsystem::HasLocalColocationSession() const
{
	return bHasLocalSession;
}

const FOculusXRColocationSession& UOculusXRColocationSubsystem::GetLocalSession() const
{
	check(bHasLocalSession);
	return LocalSession;
}

void UOculusXRColocationSubsystem::SetDiscoveryRequest(TSharedPtr<OculusXRColocation::FDiscoverSessionsRequest> Request)
{
	check(!DiscoverSessionsRequest.IsValid());
	DiscoverSessionsRequest = Request;
}

void UOculusXRColocationSubsystem::ClearDiscoveryRequest()
{
	DiscoverSessionsRequest = nullptr;
}

TSharedPtr<OculusXRColocation::FDiscoverSessionsRequest> UOculusXRColocationSubsystem::GetDiscoveryRequest() const
{
	return DiscoverSessionsRequest;
}
