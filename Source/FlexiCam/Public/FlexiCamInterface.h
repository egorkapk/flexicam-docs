// Copyright (c) 2025 Egor Ermakov.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FlexiCamInterface.generated.h"

class UFlexiCameraModeManagerComponent;

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UFlexiCamInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class FLEXICAM_API IFlexiCamInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "FlexiCamInterface")
	UFlexiCameraModeManagerComponent* GetFlexiCameraModeManagerComponent() const;
};
