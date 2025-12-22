

# File FlexiCamCharacter.h

[**File List**](files.md) **>** [**Examples**](dir_d24cb03e715cfcb49bf958c561166156.md) **>** [**FlexiCamCharacter.h**](FlexiCamCharacter_8h.md)

[Go to the documentation of this file](FlexiCamCharacter_8h.md)


```C++
// Copyright (c) 2025 Egor Ermakov.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "FlexiCamInterface.h"

#include "FlexiCamCharacter.generated.h"

class USpringArmComponent;
class UFlexiCameraComponent;
class UFlexiCameraModeManagerComponent;
class UInputAction;
struct FInputActionValue;

UCLASS()
class FLEXICAM_API AFlexiCamCharacter : public ACharacter, public IFlexiCamInterface
{
    GENERATED_BODY()

public:
    // Sets default values for this character's properties
    AFlexiCamCharacter();

public:
    //~ Begin IFlexiCamInterface interface
    virtual UFlexiCameraModeManagerComponent* GetFlexiCameraModeManagerComponent_Implementation() const override;
    //~ End IFlexiCamInterface interface

public:

    UFUNCTION(BlueprintCallable, Category = "Input")
    virtual void DoMove(float Right, float Forward);

    UFUNCTION(BlueprintCallable, Category = "Input")
    virtual void DoLook(float Yaw, float Pitch);

    UFUNCTION(BlueprintCallable, Category = "Input")
    virtual void DoJumpStart();

    UFUNCTION(BlueprintCallable, Category = "Input")
    virtual void DoJumpEnd();

public:

    FORCEINLINE class USpringArmComponent* GetCameraBoom() const;

    FORCEINLINE class UCameraComponent* GetFollowCamera() const;

protected:

    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:

    void Move(const FInputActionValue& Value);

    void Look(const FInputActionValue& Value);

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
    USpringArmComponent* CameraBoom;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
    TObjectPtr<UFlexiCameraComponent> FollowCamera;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
    TObjectPtr<UFlexiCameraModeManagerComponent> FlexiCameraModeManagerComponent;


protected:

    UPROPERTY(EditAnywhere, Category = "Input")
    UInputAction* JumpAction;

    UPROPERTY(EditAnywhere, Category = "Input")
    UInputAction* MoveAction;

    UPROPERTY(EditAnywhere, Category = "Input")
    UInputAction* LookAction;

    UPROPERTY(EditAnywhere, Category = "Input")
    UInputAction* MouseLookAction;
};
```


