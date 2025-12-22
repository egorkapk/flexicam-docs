

# File FlexiCamPlayerController.cpp

[**File List**](files.md) **>** [**Examples**](dir_6b27a9e88764eabb2f71b914689a66ea.md) **>** [**FlexiCamPlayerController.cpp**](FlexiCamPlayerController_8cpp.md)

[Go to the documentation of this file](FlexiCamPlayerController_8cpp.md)


```C++
// Copyright (c) 2025 Egor Ermakov.


#include "Examples/FlexiCamPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "InputMappingContext.h"

void AFlexiCamPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();
    // only add IMCs for local player controllers
    if (IsLocalPlayerController())
    {
        // Add Input Mapping Contexts
        if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
        {
            for (UInputMappingContext* CurrentContext : DefaultMappingContexts)
            {
                Subsystem->AddMappingContext(CurrentContext, 0);
            }
        }
    }
}
```


