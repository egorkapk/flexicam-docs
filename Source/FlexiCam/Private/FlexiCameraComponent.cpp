// Copyright (c) 2025 Egor Ermakov.


#include "FlexiCameraComponent.h"

#include "CameraModes/FlexiCameraMode.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"

UFlexiCameraComponent::UFlexiCameraComponent(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	CameraModeStack = nullptr;
	FieldOfViewOffset = 0.0f;
}

void UFlexiCameraComponent::OnRegister()
{
	Super::OnRegister();

	if (!CameraModeStack)
	{
		CameraModeStack = NewObject<UFlexiCameraModeStack>(this);
		check(CameraModeStack);
	}
}

AActor* UFlexiCameraComponent::GetTargetActor() const
{
	return GetOwner();
}

UFlexiCameraComponent* UFlexiCameraComponent::FindCameraComponent(const AActor* Actor)
{
	return (Actor ? Actor->FindComponentByClass<UFlexiCameraComponent>() : nullptr);
}

void UFlexiCameraComponent::AddFieldOfViewOffset(float FovOffset)
{
	FieldOfViewOffset += FovOffset;
}

void UFlexiCameraComponent::GetBlendInfo(float& OutWeightOfTopLayer, FGameplayTagContainer& OutTagsOfTopLayer) const
{
	check(CameraModeStack);
	CameraModeStack->GetBlendInfo(OutWeightOfTopLayer, OutTagsOfTopLayer);
}

bool UFlexiCameraComponent::HasAnyTagOnStack(const FGameplayTagContainer& TagsToCheck)
{
	check(CameraModeStack);
	return CameraModeStack->HasAnyTagOnStack(TagsToCheck);
}

void UFlexiCameraComponent::GetCameraView(float DeltaTime, FMinimalViewInfo& DesiredView)
{
	check(CameraModeStack);

	UpdateCameraModes();

	FFlexiCameraModeView CameraModeView;
	CameraModeStack->EvaluateStack(DeltaTime, CameraModeView);

	// Keep player controller in sync with the latest view.
	if (APawn* TargetPawn = Cast<APawn>(GetTargetActor()))
	{
		if (APlayerController* PC = TargetPawn->GetController<APlayerController>())
		{
			PC->SetControlRotation(CameraModeView.ControlRotation);
		}
	}

	// Apply any offset that was added to the field of view.
	CameraModeView.FieldOfView += FieldOfViewOffset;
	FieldOfViewOffset = 0.0f;

	// Keep camera component in sync with the latest view.
	SetWorldLocationAndRotation(CameraModeView.Location, CameraModeView.Rotation);
	FieldOfView = CameraModeView.FieldOfView;

	// Fill in desired view.
	DesiredView.Location = CameraModeView.Location;
	DesiredView.Rotation = CameraModeView.Rotation;
	DesiredView.FOV = CameraModeView.FieldOfView;
	DesiredView.OrthoWidth = OrthoWidth;
	DesiredView.OrthoNearClipPlane = OrthoNearClipPlane;
	DesiredView.OrthoFarClipPlane = OrthoFarClipPlane;
	DesiredView.AspectRatio = AspectRatio;
	DesiredView.bConstrainAspectRatio = bConstrainAspectRatio;
	DesiredView.bUseFieldOfViewForLOD = bUseFieldOfViewForLOD;
	DesiredView.ProjectionMode = ProjectionMode;

	// See if the CameraActor wants to override the PostProcess settings used.
	DesiredView.PostProcessBlendWeight = PostProcessBlendWeight;
	if (PostProcessBlendWeight > 0.0f)
	{
		DesiredView.PostProcessSettings = PostProcessSettings;
	}
}

void UFlexiCameraComponent::UpdateCameraModes()
{
	check(CameraModeStack);

	if (CameraModeStack->IsStackActivate())
	{
		if (DetermineCameraModeDelegate.IsBound())
		{
			// Binded in FlexiCameraModeManagerComponent->BeginPlay()
			if (const TSubclassOf<UFlexiCameraMode> CameraMode = DetermineCameraModeDelegate.Execute())
			{
				CameraModeStack->PushCameraMode(CameraMode);
			}
		}
	}
}
