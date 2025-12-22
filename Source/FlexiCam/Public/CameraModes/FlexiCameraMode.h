// Copyright (c) 2025 Egor Ermakov.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"

#include "FlexiCameraMode.generated.h"


class AActor;
class UFlexiCameraComponent;

/**
 * ECameraModeBlendFunction
 *
 *	Blend function used for transitioning between camera modes.
 */
UENUM(BlueprintType)
enum class ECameraModeBlendFunction : uint8
{
	// Does a simple linear interpolation.
	Linear,

	// Immediately accelerates, but smoothly decelerates into the target.  Ease amount controlled by the exponent.
	EaseIn,

	// Smoothly accelerates, but does not decelerate into the target.  Ease amount controlled by the exponent.
	EaseOut,

	// Smoothly accelerates and decelerates.  Ease amount controlled by the exponent.
	EaseInOut,

	COUNT	UMETA(Hidden)
};

/**
 * FCameraModeView
 *
 *	View data produced by the camera mode that is used to blend camera modes.
 */

USTRUCT(BlueprintType)
struct FFlexiCameraModeView
{
	GENERATED_BODY()

public:

	FFlexiCameraModeView();

	void Blend(const FFlexiCameraModeView& Other, float OtherWeight);

public:
	UPROPERTY(BlueprintReadWrite, Category = "FlexiCamera|CameraModeView")
	FVector Location;
	UPROPERTY(BlueprintReadWrite, Category = "FlexiCamera|CameraModeView")
	FRotator Rotation;
	UPROPERTY(BlueprintReadWrite, Category = "FlexiCamera|CameraModeView")
	FRotator ControlRotation;
	UPROPERTY(BlueprintReadWrite, Category = "FlexiCamera|CameraModeView")
	float FieldOfView;
};


/**
 * Base class for all FlexiCam camera modes
 */
UCLASS(Abstract, Blueprintable, Category = "FlexiCamera")
class FLEXICAM_API UFlexiCameraMode : public UObject
{
	GENERATED_BODY()

public:

	UFlexiCameraMode();
	UFUNCTION(BlueprintPure, Category = "FlexiCamera|CameraMode")
	UFlexiCameraComponent* GetFlexiCameraComponent() const;
	UFUNCTION(BlueprintPure, Category = "FlexiCamera|CameraMode")
	virtual UWorld* GetWorld() const override;
	UFUNCTION(BlueprintPure, Category = "FlexiCamera|CameraMode")
	AActor* GetTargetActor() const;
	void UpdateCameraMode(float DeltaTime);
	void SetBlendWeight(float Weight);

public:
	// Called when this camera mode is activated on the camera mode stack.
	virtual void OnActivation();
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "On Activation"))
	void OnActivation_Event();

	// Called when this camera mode is deactivated on the camera mode stack.
	virtual void OnDeactivation();
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "On Deactivation"))
	void OnDeactivation_Event();

	const FFlexiCameraModeView& GetCameraModeView() const;
	float GetBlendTime() const;
	float GetBlendWeight() const;
	FGameplayTag GetCameraTypeTag() const;
	const FGameplayTagContainer& GetTagContainer() const;

protected:
	UFUNCTION(BlueprintCallable, Category = "FlexiCamera|CameraMode")
	virtual FVector GetPivotLocation() const;
	UFUNCTION(BlueprintCallable, Category = "FlexiCamera|CameraMode")
	virtual FRotator GetPivotRotation() const;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "FlexiCamera|CameraMode")
	void UpdateView(float DeltaTime);
	virtual void UpdateView_Implementation(float DeltaTime);

	virtual void UpdateBlending(float DeltaTime);

protected:
	// A tags that can be queried by gameplay code that cares when a kind of camera mode is active
	// without having to ask about a specific mode.
	UPROPERTY(EditDefaultsOnly, Category = "Blending")
	FGameplayTagContainer CameraTypeTags;

	// View output produced by the camera mode.
	UPROPERTY(BlueprintReadWrite, Category = "FlexiCamera|CameraMode")
	FFlexiCameraModeView ModeView;

	// The horizontal field of view (in degrees).
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "View", Meta = (UIMin = "5.0", UIMax = "170", ClampMin = "5.0", ClampMax = "170.0"))
	float FieldOfView;

	// Minimum view pitch (in degrees).
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "View", Meta = (UIMin = "-89.9", UIMax = "89.9", ClampMin = "-89.9", ClampMax = "89.9"))
	float ViewPitchMin;

	// Maximum view pitch (in degrees).
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "View", Meta = (UIMin = "-89.9", UIMax = "89.9", ClampMin = "-89.9", ClampMax = "89.9"))
	float ViewPitchMax;

	// How long it takes to blend in this mode.
	UPROPERTY(EditDefaultsOnly, Category = "Blending")
	float BlendTime;

	// Function used for blending.
	UPROPERTY(EditDefaultsOnly, Category = "Blending")
	ECameraModeBlendFunction BlendFunction;

	// Exponent used by blend functions to control the shape of the curve.
	UPROPERTY(EditDefaultsOnly, Category = "Blending")
	float BlendExponent;

	// Linear blend alpha used to determine the blend weight.
	float BlendAlpha;

	// Blend weight calculated using the blend alpha and function.
	float BlendWeight;

protected:
	/** If true, skips all interpolation and puts camera in ideal location.  Automatically set to false next frame. */
	UPROPERTY(transient)
	uint32 bResetInterpolation : 1;
};


/**
 * UFlexiCameraModeStack
 *
 *	Stack used for blending camera modes.
 */
UCLASS()
class UFlexiCameraModeStack : public UObject
{
	GENERATED_BODY()

public:

	UFlexiCameraModeStack();

	void ActivateStack();
	void DeactivateStack();

	bool IsStackActivate() const;

	void PushCameraMode(TSubclassOf<UFlexiCameraMode> CameraModeClass);

	bool EvaluateStack(float DeltaTime, FFlexiCameraModeView& OutCameraModeView);

	// Gets the tag associated with the top layer and the blend weight of it
	void GetBlendInfo(float& OutWeightOfTopLayer, FGameplayTagContainer& OutTagsOfTopLayer) const;
	bool HasAnyTagOnStack(const FGameplayTagContainer& TagsToCheck);

protected:

	UFlexiCameraMode* GetCameraModeInstance(TSubclassOf<UFlexiCameraMode> CameraModeClass);

	void UpdateStack(float DeltaTime);
	void BlendStack(FFlexiCameraModeView& OutCameraModeView) const;

protected:

	bool bIsActive;

	UPROPERTY()
	TArray<TObjectPtr<UFlexiCameraMode>> CameraModeInstances;

	UPROPERTY()
	TArray<TObjectPtr<UFlexiCameraMode>> CameraModeStack;
};
