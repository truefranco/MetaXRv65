// Copyright (c) Meta Platforms, Inc. and affiliates.

#pragma once

#include "OculusXRSceneSubsystem.h"
#include "OculusXRSceneTypes.h"
#include "OculusXRScene.h"
#include "OculusXRSceneDelegates.h"
#include "OculusXRAnchorBPFunctionLibrary.h"
#include "OculusXRHMD.h"
#include "OculusXRHMDRuntimeSettings.h"

UOculusXRSceneSubsystem::UOculusXRSceneSubsystem()
{
}

bool UOculusXRSceneSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	return false;
}

void UOculusXRSceneSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
}

void UOculusXRSceneSubsystem::Deinitialize()
{
}

ETickableTickType UOculusXRSceneSubsystem::GetTickableTickType() const
{
	return IsTemplate() ? ETickableTickType::Never : FTickableGameObject::GetTickableTickType();
}

bool UOculusXRSceneSubsystem::IsAllowedToTick() const
{
	return false;
}

void UOculusXRSceneSubsystem::Tick(float DeltaTime)
{
}

