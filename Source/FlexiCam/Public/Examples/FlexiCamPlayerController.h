// Copyright (c) 2025 Egor Ermakov.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "FlexiCamPlayerController.generated.h"

class UInputMappingContext;

/**
 * Basic PlayerController class for a third person game
 * Manages input mappings
 */
UCLASS(Abstract)
class FLEXICAM_API AFlexiCamPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	/** Input mapping context setup */
	virtual void SetupInputComponent() override;

protected:
	/** Input Mapping Contexts */
	UPROPERTY(EditAnywhere, Category = "Input|Input Mappings")
	TArray<UInputMappingContext*> DefaultMappingContexts;
};
