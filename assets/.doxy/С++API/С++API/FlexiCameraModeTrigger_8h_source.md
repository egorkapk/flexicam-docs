

# File FlexiCameraModeTrigger.h

[**File List**](files.md) **>** [**FlexiCam**](dir_034e3f86ebbf7b5c63765051f6987407.md) **>** [**Public**](dir_9e8acde77c3f9f76496e888d83552b45.md) **>** [**Miscellaneous**](dir_b057122e45aa8bd45ab36524bc638649.md) **>** [**FlexiCameraModeTrigger.h**](FlexiCameraModeTrigger_8h.md)

[Go to the documentation of this file](FlexiCameraModeTrigger_8h.md)


```C++
// Copyright (c) 2025 Egor Ermakov.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "FlexiCameraModeTrigger.generated.h"

class UBillboardComponent;
class UBoxComponent;
class UFlexiCameraModeManagerComponent;

UCLASS(Abstract, Blueprintable)
class FLEXICAM_API AFlexiCameraModeTrigger : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AFlexiCameraModeTrigger();

protected:
    UFUNCTION()
    void OnTriggerBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

    UFUNCTION()
    void OnTriggerEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
protected:

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FlexiCam|Components")
    TObjectPtr<UBoxComponent> TriggerVolume;

    // The camera mode class to activate
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FlexiCam|Camera")
    TSubclassOf<class UFlexiCameraMode> CameraModeClass;


private:
    UFlexiCameraModeManagerComponent* GetCameraModeManagerComponent(AActor* Actor) const;

#if WITH_EDITORONLY_DATA
private:
    UPROPERTY(Transient, VisibleDefaultsOnly, Category = "FlexiCam|Component|Editor")
    TObjectPtr<UBillboardComponent> EditorIcon;
#endif
};
```


