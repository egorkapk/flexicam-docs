

# File FlexiCamInterface.h

[**File List**](files.md) **>** [**FlexiCam**](dir_034e3f86ebbf7b5c63765051f6987407.md) **>** [**Public**](dir_9e8acde77c3f9f76496e888d83552b45.md) **>** [**FlexiCamInterface.h**](FlexiCamInterface_8h.md)

[Go to the documentation of this file](FlexiCamInterface_8h.md)


```C++
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

class FLEXICAM_API IFlexiCamInterface
{
    GENERATED_BODY()

    // Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "FlexiCamInterface")
    UFlexiCameraModeManagerComponent* GetFlexiCameraModeManagerComponent() const;
};
```


