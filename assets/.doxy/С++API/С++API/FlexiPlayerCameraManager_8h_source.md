

# File FlexiPlayerCameraManager.h

[**File List**](files.md) **>** [**FlexiCam**](dir_034e3f86ebbf7b5c63765051f6987407.md) **>** [**Public**](dir_9e8acde77c3f9f76496e888d83552b45.md) **>** [**FlexiPlayerCameraManager.h**](FlexiPlayerCameraManager_8h.md)

[Go to the documentation of this file](FlexiPlayerCameraManager_8h.md)


```C++
// Copyright (c) 2025 Egor Ermakov.

#pragma once

#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "FlexiPlayerCameraManager.generated.h"

#define FLEXI_CAMERA_DEFAULT_FOV            (80.0f)
#define FLEXI_CAMERA_DEFAULT_PITCH_MIN  (-89.0f)
#define FLEXI_CAMERA_DEFAULT_PITCH_MAX  (89.0f)

UCLASS()
class FLEXICAM_API AFlexiPlayerCameraManager : public APlayerCameraManager
{
    GENERATED_BODY()
    
public:
    AFlexiPlayerCameraManager(const FObjectInitializer& ObjectInitializer);
};
```


