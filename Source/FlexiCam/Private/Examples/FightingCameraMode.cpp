// Copyright (c) 2025 Egor Ermakov.


#include "Examples/FightingCameraMode.h"

#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "Engine/World.h"

UFightingCameraMode::UFightingCameraMode()
{
	DefaultPivotRotation = FRotator::ZeroRotator;
	CurrentCameraLocation = FVector::ZeroVector;
	bIsFirstUpdate = true;
	InterpolationSpeed = 5.0f;
}

void UFightingCameraMode::UpdateView_Implementation(float DeltaTime)
{
	const float Distance = BoundsSizeToDistance.GetRichCurveConst()->Eval(GetFightersMaxDistance());
	FVector TargetLocation = GetMidPoint() - DefaultPivotRotation.Vector() * Distance;

	// Initialize current location on first update
	if (bIsFirstUpdate)
	{
		CurrentCameraLocation = TargetLocation;
		bIsFirstUpdate = false;
	}
	// Smoothly interpolate to target location
	CurrentCameraLocation = FMath::VInterpTo(CurrentCameraLocation, TargetLocation, DeltaTime,InterpolationSpeed);

	ModeView.Location = CurrentCameraLocation;
	ModeView.Rotation = DefaultPivotRotation;
	ModeView.ControlRotation = ModeView.Rotation;
	ModeView.FieldOfView = FieldOfView;
}

FVector UFightingCameraMode::GetMidPoint() const
{
	UWorld* World = GetWorld();
	if (!World)
	{
		return FVector::ZeroVector;
	}

	TArray<AActor*> FightingActors;
	UGameplayStatics::GetAllActorsOfClass(World, ACharacter::StaticClass(), FightingActors);
	if (FightingActors.Num() <= 0)
	{
		return FVector::ZeroVector;
	}

	// Calculate midpoint
	FVector LocationSum = FVector::ZeroVector;

	for ( int32 It = 0; It < FightingActors.Num(); It++)
	{
		LocationSum += FightingActors[It]->GetActorLocation();
	}
	FVector MidPoint = LocationSum / FightingActors.Num();
	return MidPoint;
}

const float UFightingCameraMode::GetFightersMaxDistance() const
{
	UWorld* World = GetWorld();
	if (!World)
	{
		return 0.0f;
	}

	TArray<AActor*> FightingActors;
	UGameplayStatics::GetAllActorsOfClass(World, ACharacter::StaticClass(), FightingActors);
	if (FightingActors.Num() <= 0)
	{
		return 0.0f;
	}

	// Calculate max distance between two fighters
	float MaxDistance = 0.0f;

	for (int32 i = 0; i < FightingActors.Num(); i++)
	{
		for (int32 j = i + 1; j < FightingActors.Num(); j++)
		{
			float Dist = FVector::Distance(FightingActors[i]->GetActorLocation(), FightingActors[j]->GetActorLocation());
			MaxDistance = FMath::Max(MaxDistance, Dist);
		}
	}

	return MaxDistance;
}
