

# Struct FFlexiCameraModeView



[**ClassList**](annotated.md) **>** [**FFlexiCameraModeView**](structFFlexiCameraModeView.md)



[More...](#detailed-description)

* `#include <FlexiCameraMode.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  FRotator | [**ControlRotation**](#variable-controlrotation)  <br> |
|  float | [**FieldOfView**](#variable-fieldofview)  <br> |
|  FVector | [**Location**](#variable-location)  <br> |
|  FRotator | [**Rotation**](#variable-rotation)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**Blend**](#function-blend) (const [**FFlexiCameraModeView**](structFFlexiCameraModeView.md) & Other, float OtherWeight) <br> |
|   | [**FFlexiCameraModeView**](#function-fflexicameramodeview) () <br> |




























## Detailed Description


FCameraModeView


View data produced by the camera mode that is used to blend camera modes. 


    
## Public Attributes Documentation




### variable ControlRotation 

```C++
FRotator FFlexiCameraModeView::ControlRotation;
```




<hr>



### variable FieldOfView 

```C++
float FFlexiCameraModeView::FieldOfView;
```




<hr>



### variable Location 

```C++
FVector FFlexiCameraModeView::Location;
```




<hr>



### variable Rotation 

```C++
FRotator FFlexiCameraModeView::Rotation;
```




<hr>
## Public Functions Documentation




### function Blend 

```C++
void FFlexiCameraModeView::Blend (
    const FFlexiCameraModeView & Other,
    float OtherWeight
) 
```




<hr>



### function FFlexiCameraModeView 

```C++
FFlexiCameraModeView::FFlexiCameraModeView () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `Source/FlexiCam/Public/CameraModes/FlexiCameraMode.h`

