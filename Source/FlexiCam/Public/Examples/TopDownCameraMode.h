// Copyright (c) 2025 Egor Ermakov.

#pragma once

#include "CoreMinimal.h"
#include "CameraModes/FlexiCameraMode.h"
#include "Curves/CurveFloat.h"

#include "TopDownCameraMode.generated.h"

class UBoxComponent;

/**
 * Example camera mode that positions the camera above the desired volume looking straight down.
 */
UCLASS()
class FLEXICAM_API UTopDownCameraMode : public UFlexiCameraMode
{
	GENERATED_BODY()

public:
	UTopDownCameraMode();

public:
	virtual void OnActivation() override;

protected:
	virtual void UpdateView_Implementation(float DeltaTime) override;

private:
	UBoxComponent* GetTargetVolume() const;

protected:
	// Rotation of the camera pivot in this mode.
	UPROPERTY(EditDefaultsOnly, Category = "FlexiCam|Camera")
	FRotator DefaultPivotRotation;

	// Curve that maps from the size of the bounds to the distance the camera should be from the center.
	UPROPERTY(EditDefaultsOnly, Category = "FlexiCam|Camera")
	FRuntimeFloatCurve BoundsSizeToDistance;

private:
	FVector PivotLocation;
};
