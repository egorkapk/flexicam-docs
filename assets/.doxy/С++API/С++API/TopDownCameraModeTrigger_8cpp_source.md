

# File TopDownCameraModeTrigger.cpp

[**File List**](files.md) **>** [**Examples**](dir_6b27a9e88764eabb2f71b914689a66ea.md) **>** [**TopDownCameraModeTrigger.cpp**](TopDownCameraModeTrigger_8cpp.md)

[Go to the documentation of this file](TopDownCameraModeTrigger_8cpp.md)


```C++
// Copyright (c) 2025 Egor Ermakov.


#include "Examples/TopDownCameraModeTrigger.h"

#include "Examples/TopDownCameraMode.h"

ATopDownCameraModeTrigger::ATopDownCameraModeTrigger()
{
    CameraModeClass = UTopDownCameraMode::StaticClass();
}

UBoxComponent* ATopDownCameraModeTrigger::GetTriggerVolume() const
{
    if (TriggerVolume)
    {
        return TriggerVolume;
    }
    return nullptr;
}
```


