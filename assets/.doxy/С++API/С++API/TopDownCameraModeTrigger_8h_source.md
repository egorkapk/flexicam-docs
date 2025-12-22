

# File TopDownCameraModeTrigger.h

[**File List**](files.md) **>** [**Examples**](dir_d24cb03e715cfcb49bf958c561166156.md) **>** [**TopDownCameraModeTrigger.h**](TopDownCameraModeTrigger_8h.md)

[Go to the documentation of this file](TopDownCameraModeTrigger_8h.md)


```C++
// Copyright (c) 2025 Egor Ermakov.

#pragma once

#include "CoreMinimal.h"
#include "Miscellaneous/FlexiCameraModeTrigger.h"
#include "TopDownCameraModeTrigger.generated.h"

class UBoxComponent;

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
```


