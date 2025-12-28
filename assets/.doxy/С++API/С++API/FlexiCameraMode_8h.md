

# File FlexiCameraMode.h



[**FileList**](files.md) **>** [**CameraModes**](dir_84b5c73bab400aad4609d36a8159f44b.md) **>** [**FlexiCameraMode.h**](FlexiCameraMode_8h.md)

[Go to the source code of this file](FlexiCameraMode_8h_source.md)



* `#include "CoreMinimal.h"`
* `#include "UObject/Object.h"`
* `#include "GameplayTagContainer.h"`
* `#include "FlexiCameraMode.generated.h"`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**FFlexiCameraModeView**](structFFlexiCameraModeView.md) <br> |
| class | [**UFlexiCameraMode**](classUFlexiCameraMode.md) <br> |
| class | [**UFlexiCameraModeStack**](classUFlexiCameraModeStack.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| enum uint8 | [**ECameraModeBlendFunction**](#enum-ecameramodeblendfunction)  <br> |
















































## Public Types Documentation




### enum ECameraModeBlendFunction 

```C++
enum ECameraModeBlendFunction {
    Linear,
    EaseIn,
    EaseOut,
    EaseInOut,
    UMETA =(Hidden)
};
```



ECameraModeBlendFunction


Blend function used for transitioning between camera modes. 


        

<hr>

------------------------------
The documentation for this class was generated from the following file `Source/FlexiCam/Public/CameraModes/FlexiCameraMode.h`

