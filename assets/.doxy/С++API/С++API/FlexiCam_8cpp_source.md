

# File FlexiCam.cpp

[**File List**](files.md) **>** [**FlexiCam**](dir_034e3f86ebbf7b5c63765051f6987407.md) **>** [**Private**](dir_19dab4a982fac4009ff3e3b1ed404c56.md) **>** [**FlexiCam.cpp**](FlexiCam_8cpp.md)

[Go to the documentation of this file](FlexiCam_8cpp.md)


```C++
// Copyright (c) 2025 Egor Ermakov.

#include "FlexiCam.h"

#define LOCTEXT_NAMESPACE "FFlexiCamModule"

void FFlexiCamModule::StartupModule()
{
    // This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FFlexiCamModule::ShutdownModule()
{
    // This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
    // we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
    
IMPLEMENT_MODULE(FFlexiCamModule, FlexiCam)
```


