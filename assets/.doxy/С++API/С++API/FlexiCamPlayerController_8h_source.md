

# File FlexiCamPlayerController.h

[**File List**](files.md) **>** [**Examples**](dir_d24cb03e715cfcb49bf958c561166156.md) **>** [**FlexiCamPlayerController.h**](FlexiCamPlayerController_8h.md)

[Go to the documentation of this file](FlexiCamPlayerController_8h.md)


```C++
// Copyright (c) 2025 Egor Ermakov.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "FlexiCamPlayerController.generated.h"

class UInputMappingContext;

UCLASS(Abstract)
class FLEXICAM_API AFlexiCamPlayerController : public APlayerController
{
    GENERATED_BODY()
    
protected:
    virtual void SetupInputComponent() override;

protected:
    UPROPERTY(EditAnywhere, Category = "Input|Input Mappings")
    TArray<UInputMappingContext*> DefaultMappingContexts;
};
```


