// Copyright (c) 2025 Egor Ermakov.


#include "FlexiCameraModeManagerComponent.h"

#include "FlexiCameraComponent.h"
#include "CameraModes/FlexiCameraMode.h"

// Sets default values for this component's properties
UFlexiCameraModeManagerComponent::UFlexiCameraModeManagerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	DefaultCameraModeClass = nullptr;
	CurrentCameraModeClass = nullptr;
}

// Called when the game starts
void UFlexiCameraModeManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	if (UFlexiCameraComponent* CameraComponent = GetFlexiCameraComponent())
	{
		CameraComponent->DetermineCameraModeDelegate.BindUObject(this, &ThisClass::DetermineCameraMode);
	}
}

void UFlexiCameraModeManagerComponent::SetCameraMode(TSubclassOf<UFlexiCameraMode> NewCameraModeClass)
{
	if (NewCameraModeClass)
	{
		CurrentCameraModeClass = NewCameraModeClass;
	}
}

void UFlexiCameraModeManagerComponent::ResetToDefaultCameraMode()
{
	CurrentCameraModeClass = nullptr;
}

void UFlexiCameraModeManagerComponent::GetCurrentCameraModeBlendInfo(float& OutWeightOfTopLayer, FGameplayTagContainer& OutTagsOfTopLayer) const
{
	if (UFlexiCameraComponent* CameraComponent = GetFlexiCameraComponent())
	{
		CameraComponent->GetBlendInfo(OutWeightOfTopLayer, OutTagsOfTopLayer);
		return;
	}
	OutWeightOfTopLayer = 1.0f;
	OutTagsOfTopLayer = FGameplayTagContainer();
	return;
}

bool UFlexiCameraModeManagerComponent::CurrentCameraModeHasAnyTag(const FGameplayTagContainer& ContainerToCheck)
{
	FGameplayTagContainer CurrentTags;
	float Weight;
	GetCurrentCameraModeBlendInfo(Weight, CurrentTags);
	return CurrentTags.HasAny(ContainerToCheck);
}

bool UFlexiCameraModeManagerComponent::HasAnyTagOnStack(const FGameplayTagContainer& TagsToCheck)
{
	if (UFlexiCameraComponent* CameraComponent = GetFlexiCameraComponent())
	{
		return CameraComponent->HasAnyTagOnStack(TagsToCheck);
	}
	return false;
}

TSubclassOf<UFlexiCameraMode> UFlexiCameraModeManagerComponent::DetermineCameraMode() const
{
	if (CurrentCameraModeClass)
	{
		return CurrentCameraModeClass;
	}
	return DefaultCameraModeClass;
}

UFlexiCameraComponent* UFlexiCameraModeManagerComponent::GetFlexiCameraComponent() const
{
	if (TargetActorOverride)
	{
		return UFlexiCameraComponent::FindCameraComponent(TargetActorOverride);
	}
	return UFlexiCameraComponent::FindCameraComponent(GetOwner());
}
