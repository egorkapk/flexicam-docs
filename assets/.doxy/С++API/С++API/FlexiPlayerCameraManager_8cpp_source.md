

# File FlexiPlayerCameraManager.cpp

[**File List**](files.md) **>** [**FlexiCam**](dir_034e3f86ebbf7b5c63765051f6987407.md) **>** [**Private**](dir_19dab4a982fac4009ff3e3b1ed404c56.md) **>** [**FlexiPlayerCameraManager.cpp**](FlexiPlayerCameraManager_8cpp.md)

[Go to the documentation of this file](FlexiPlayerCameraManager_8cpp.md)


```C++
// Copyright (c) 2025 Egor Ermakov.


#include "FlexiPlayerCameraManager.h"

AFlexiPlayerCameraManager::AFlexiPlayerCameraManager(const FObjectInitializer& ObjectInitializer)
{
    DefaultFOV = FLEXI_CAMERA_DEFAULT_FOV;
    ViewPitchMin = FLEXI_CAMERA_DEFAULT_PITCH_MIN;
    ViewPitchMax = FLEXI_CAMERA_DEFAULT_PITCH_MAX;
}
```


