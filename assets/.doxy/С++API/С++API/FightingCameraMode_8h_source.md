

# File FightingCameraMode.h

[**File List**](files.md) **>** [**Examples**](dir_d24cb03e715cfcb49bf958c561166156.md) **>** [**FightingCameraMode.h**](FightingCameraMode_8h.md)

[Go to the documentation of this file](FightingCameraMode_8h.md)


```C++
// Copyright (c) 2025 Egor Ermakov.

#pragma once

#include "CoreMinimal.h"
#include "CameraModes/FlexiCameraMode.h"
#include "Curves/CurveFloat.h"

#include "FightingCameraMode.generated.h"

UCLASS()
class FLEXICAM_API UFightingCameraMode : public UFlexiCameraMode
{
    GENERATED_BODY()

public:
    UFightingCameraMode();

protected:
    virtual void UpdateView_Implementation(float DeltaTime) override;

private:
    FVector GetMidPoint() const;
    const float GetFightersMaxDistance() const;

protected:
    // Rotation of the camera pivot in this mode.
    UPROPERTY(EditDefaultsOnly, Category = "FlexiCam|Camera")
    FRotator DefaultPivotRotation;

    // Curve that maps from the Max Distance between fighters to the distance the camera should be from the center.
    UPROPERTY(EditDefaultsOnly, Category = "FlexiCam|Camera")
    FRuntimeFloatCurve BoundsSizeToDistance;

    // Speed at which the camera interpolates to its target location.
    UPROPERTY(EditDefaultsOnly, Category = "FlexiCam|Camera")
    float InterpolationSpeed;

private:
    FVector CurrentCameraLocation;
    bool bIsFirstUpdate;
};
```


