// Copyright (c) Meta Platforms, Inc. and affiliates.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OculusXRColocationFunctionLibrary.generated.h"

UCLASS()
class OCULUSXRCOLOCATION_API UOculusXRColocationFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(Category = "OculusXR|Colocation")
	static void StopColocationSessionDiscovery();
};
