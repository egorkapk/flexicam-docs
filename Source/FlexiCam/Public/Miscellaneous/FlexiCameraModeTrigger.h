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
