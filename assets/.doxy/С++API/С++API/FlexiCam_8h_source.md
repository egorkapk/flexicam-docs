

# File FlexiCam.h

[**File List**](files.md) **>** [**FlexiCam**](dir_034e3f86ebbf7b5c63765051f6987407.md) **>** [**Public**](dir_9e8acde77c3f9f76496e888d83552b45.md) **>** [**FlexiCam.h**](FlexiCam_8h.md)

[Go to the documentation of this file](FlexiCam_8h.md)


```C++
// Copyright (c) 2025 Egor Ermakov.

#pragma once

#include "Modules/ModuleManager.h"

class FFlexiCamModule : public IModuleInterface
{
public:

    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};
```


