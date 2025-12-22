

# File FlexiCameraComponent.h

[**File List**](files.md) **>** [**FlexiCam**](dir_034e3f86ebbf7b5c63765051f6987407.md) **>** [**Public**](dir_9e8acde77c3f9f76496e888d83552b45.md) **>** [**FlexiCameraComponent.h**](FlexiCameraComponent_8h.md)

[Go to the documentation of this file](FlexiCameraComponent_8h.md)


```C++
// Copyright (c) 2025 Egor Ermakov.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "FlexiCameraComponent.generated.h"

class UFlexiCameraMode;
class UFlexiCameraModeStack;
struct FMinimalViewInfo;
struct FGameplayTag;
struct FGameplayTagContainer;


DECLARE_DELEGATE_RetVal(TSubclassOf<UFlexiCameraMode>, FFlexiCameraModeDelegate)


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class FLEXICAM_API UFlexiCameraComponent : public UCameraComponent
{
    GENERATED_BODY()
    
public:

    UFlexiCameraComponent(const FObjectInitializer& ObjectInitializer);

    // Delegate used to query for the best camera mode.
    FFlexiCameraModeDelegate DetermineCameraModeDelegate;

    // Returns the target actor that the camera is looking at (assigned to by default)
    virtual AActor* GetTargetActor() const;

    // Returns the camera component if one exists on the specified actor.
    UFUNCTION(BlueprintPure, Category = "FlexiCam|Camera")
    static UFlexiCameraComponent* FindCameraComponent(const AActor* Actor);

    // Add an offset to the field of view.  The offset is only for one frame, it gets cleared once it is applied.
    void AddFieldOfViewOffset(float FovOffset);

    // Gets the tag associated with the top layer and the blend weight of it
    void GetBlendInfo(float& OutWeightOfTopLayer, FGameplayTagContainer& OutTagsOfTopLayer) const;
    bool HasAnyTagOnStack(const FGameplayTagContainer& TagsToCheck);

protected:

    virtual void OnRegister() override;
    virtual void GetCameraView(float DeltaTime, FMinimalViewInfo& DesiredView) override;

    virtual void UpdateCameraModes();

protected:

    // Stack used to blend the camera modes.
    UPROPERTY()
    TObjectPtr<UFlexiCameraModeStack> CameraModeStack;

    // Offset applied to the field of view.  The offset is only for one frame, it gets cleared once it is applied.
    float FieldOfViewOffset;
};
```


