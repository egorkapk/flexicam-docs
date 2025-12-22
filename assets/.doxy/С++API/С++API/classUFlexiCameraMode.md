

# Class UFlexiCameraMode



[**ClassList**](annotated.md) **>** [**UFlexiCameraMode**](classUFlexiCameraMode.md)



[More...](#detailed-description)

* `#include <FlexiCameraMode.h>`



Inherits the following classes: UObject


Inherited by the following classes: [UFightingCameraMode](classUFightingCameraMode.md),  [UTopDownCameraMode](classUTopDownCameraMode.md)
































## Public Functions

| Type | Name |
| ---: | :--- |
|  float | [**GetBlendTime**](#function-getblendtime) () const<br> |
|  float | [**GetBlendWeight**](#function-getblendweight) () const<br> |
|  const [**FFlexiCameraModeView**](structFFlexiCameraModeView.md) & | [**GetCameraModeView**](#function-getcameramodeview) () const<br> |
|  FGameplayTag | [**GetCameraTypeTag**](#function-getcameratypetag) () const<br> |
|  UFlexiCameraComponent \* | [**GetFlexiCameraComponent**](#function-getflexicameracomponent) () const<br> |
|  const FGameplayTagContainer & | [**GetTagContainer**](#function-gettagcontainer) () const<br> |
|  AActor \* | [**GetTargetActor**](#function-gettargetactor) () const<br> |
| virtual UWorld \* | [**GetWorld**](#function-getworld) () override const<br> |
| virtual void | [**OnActivation**](#function-onactivation) () <br> |
|  void | [**OnActivation\_Event**](#function-onactivation_event) () <br> |
| virtual void | [**OnDeactivation**](#function-ondeactivation) () <br> |
|  void | [**OnDeactivation\_Event**](#function-ondeactivation_event) () <br> |
|  void | [**SetBlendWeight**](#function-setblendweight) (float Weight) <br> |
|   | [**UFlexiCameraMode**](#function-uflexicameramode) () <br> |
|  void | [**UpdateCameraMode**](#function-updatecameramode) (float DeltaTime) <br> |








## Protected Attributes

| Type | Name |
| ---: | :--- |
|  float | [**BlendAlpha**](#variable-blendalpha)  <br> |
|  float | [**BlendExponent**](#variable-blendexponent)  <br> |
|  ECameraModeBlendFunction | [**BlendFunction**](#variable-blendfunction)  <br> |
|  float | [**BlendTime**](#variable-blendtime)  <br> |
|  float | [**BlendWeight**](#variable-blendweight)  <br> |
|  FGameplayTagContainer | [**CameraTypeTags**](#variable-cameratypetags)  <br> |
|  float | [**FieldOfView**](#variable-fieldofview)  <br> |
|  [**FFlexiCameraModeView**](structFFlexiCameraModeView.md) | [**ModeView**](#variable-modeview)  <br> |
|  float | [**ViewPitchMax**](#variable-viewpitchmax)  <br> |
|  float | [**ViewPitchMin**](#variable-viewpitchmin)  <br> |
|  uint32 | [**bResetInterpolation**](#variable-bresetinterpolation)  <br> |
















## Protected Functions

| Type | Name |
| ---: | :--- |
| virtual FVector | [**GetPivotLocation**](#function-getpivotlocation) () const<br> |
| virtual FRotator | [**GetPivotRotation**](#function-getpivotrotation) () const<br> |
| virtual void | [**UpdateBlending**](#function-updateblending) (float DeltaTime) <br> |
|  void | [**UpdateView**](#function-updateview) (float DeltaTime) <br> |
| virtual void | [**UpdateView\_Implementation**](#function-updateview_implementation) (float DeltaTime) <br> |




## Detailed Description


Base class for all FlexiCam camera modes 


    
## Public Functions Documentation




### function GetBlendTime 

```C++
float UFlexiCameraMode::GetBlendTime () const
```




<hr>



### function GetBlendWeight 

```C++
float UFlexiCameraMode::GetBlendWeight () const
```




<hr>



### function GetCameraModeView 

```C++
const FFlexiCameraModeView & UFlexiCameraMode::GetCameraModeView () const
```




<hr>



### function GetCameraTypeTag 

```C++
FGameplayTag UFlexiCameraMode::GetCameraTypeTag () const
```




<hr>



### function GetFlexiCameraComponent 

```C++
UFlexiCameraComponent * UFlexiCameraMode::GetFlexiCameraComponent () const
```




<hr>



### function GetTagContainer 

```C++
const FGameplayTagContainer & UFlexiCameraMode::GetTagContainer () const
```




<hr>



### function GetTargetActor 

```C++
AActor * UFlexiCameraMode::GetTargetActor () const
```




<hr>



### function GetWorld 

```C++
virtual UWorld * UFlexiCameraMode::GetWorld () override const
```




<hr>



### function OnActivation 

```C++
virtual void UFlexiCameraMode::OnActivation () 
```




<hr>



### function OnActivation\_Event 

```C++
void UFlexiCameraMode::OnActivation_Event () 
```




<hr>



### function OnDeactivation 

```C++
virtual void UFlexiCameraMode::OnDeactivation () 
```




<hr>



### function OnDeactivation\_Event 

```C++
void UFlexiCameraMode::OnDeactivation_Event () 
```




<hr>



### function SetBlendWeight 

```C++
void UFlexiCameraMode::SetBlendWeight (
    float Weight
) 
```




<hr>



### function UFlexiCameraMode 

```C++
UFlexiCameraMode::UFlexiCameraMode () 
```




<hr>



### function UpdateCameraMode 

```C++
void UFlexiCameraMode::UpdateCameraMode (
    float DeltaTime
) 
```




<hr>
## Protected Attributes Documentation




### variable BlendAlpha 

```C++
float UFlexiCameraMode::BlendAlpha;
```




<hr>



### variable BlendExponent 

```C++
float UFlexiCameraMode::BlendExponent;
```




<hr>



### variable BlendFunction 

```C++
ECameraModeBlendFunction UFlexiCameraMode::BlendFunction;
```




<hr>



### variable BlendTime 

```C++
float UFlexiCameraMode::BlendTime;
```




<hr>



### variable BlendWeight 

```C++
float UFlexiCameraMode::BlendWeight;
```




<hr>



### variable CameraTypeTags 

```C++
FGameplayTagContainer UFlexiCameraMode::CameraTypeTags;
```




<hr>



### variable FieldOfView 

```C++
float UFlexiCameraMode::FieldOfView;
```




<hr>



### variable ModeView 

```C++
FFlexiCameraModeView UFlexiCameraMode::ModeView;
```




<hr>



### variable ViewPitchMax 

```C++
float UFlexiCameraMode::ViewPitchMax;
```




<hr>



### variable ViewPitchMin 

```C++
float UFlexiCameraMode::ViewPitchMin;
```




<hr>



### variable bResetInterpolation 

```C++
uint32 UFlexiCameraMode::bResetInterpolation;
```



If true, skips all interpolation and puts camera in ideal location. Automatically set to false next frame. 


        

<hr>
## Protected Functions Documentation




### function GetPivotLocation 

```C++
virtual FVector UFlexiCameraMode::GetPivotLocation () const
```




<hr>



### function GetPivotRotation 

```C++
virtual FRotator UFlexiCameraMode::GetPivotRotation () const
```




<hr>



### function UpdateBlending 

```C++
virtual void UFlexiCameraMode::UpdateBlending (
    float DeltaTime
) 
```




<hr>



### function UpdateView 

```C++
void UFlexiCameraMode::UpdateView (
    float DeltaTime
) 
```




<hr>



### function UpdateView\_Implementation 

```C++
virtual void UFlexiCameraMode::UpdateView_Implementation (
    float DeltaTime
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `Source/FlexiCam/Public/CameraModes/FlexiCameraMode.h`

