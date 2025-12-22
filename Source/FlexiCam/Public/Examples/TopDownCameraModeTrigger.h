// Copyright (c) 2025 Egor Ermakov.

#pragma once

#include "CoreMinimal.h"
#include "Miscellaneous/FlexiCameraModeTrigger.h"
#include "TopDownCameraModeTrigger.generated.h"

class UBoxComponent;

/**
 * Example camera mode trigger for a top-down camera mode.
 */
UCLASS()
class FLEXICAM_API ATopDownCameraModeTrigger : public AFlexiCameraModeTrigger
{
	GENERATED_BODY()
	
public:
	ATopDownCameraModeTrigger();

public:

	// Returns the trigger volume component for this camera mode trigger.
	UBoxComponent* GetTriggerVolume() const;
};
