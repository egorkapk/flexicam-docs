

# Class UTopDownCameraMode



[**ClassList**](annotated.md) **>** [**UTopDownCameraMode**](classUTopDownCameraMode.md)



[More...](#detailed-description)

* `#include <TopDownCameraMode.h>`



Inherits the following classes: [UFlexiCameraMode](classUFlexiCameraMode.md)






















































## Public Functions

| Type | Name |
| ---: | :--- |
| virtual void | [**OnActivation**](#function-onactivation) () override<br> |
|   | [**UTopDownCameraMode**](#function-utopdowncameramode) () <br> |


## Public Functions inherited from UFlexiCameraMode

See [UFlexiCameraMode](classUFlexiCameraMode.md)

| Type | Name |
| ---: | :--- |
|  float | [**GetBlendTime**](classUFlexiCameraMode.md#function-getblendtime) () const<br> |
|  float | [**GetBlendWeight**](classUFlexiCameraMode.md#function-getblendweight) () const<br> |
|  const [**FFlexiCameraModeView**](structFFlexiCameraModeView.md) & | [**GetCameraModeView**](classUFlexiCameraMode.md#function-getcameramodeview) () const<br> |
|  FGameplayTag | [**GetCameraTypeTag**](classUFlexiCameraMode.md#function-getcameratypetag) () const<br> |
|  UFlexiCameraComponent \* | [**GetFlexiCameraComponent**](classUFlexiCameraMode.md#function-getflexicameracomponent) () const<br> |
|  const FGameplayTagContainer & | [**GetTagContainer**](classUFlexiCameraMode.md#function-gettagcontainer) () const<br> |
|  AActor \* | [**GetTargetActor**](classUFlexiCameraMode.md#function-gettargetactor) () const<br> |
| virtual UWorld \* | [**GetWorld**](classUFlexiCameraMode.md#function-getworld) () override const<br> |
| virtual void | [**OnActivation**](classUFlexiCameraMode.md#function-onactivation) () <br> |
|  void | [**OnActivation\_Event**](classUFlexiCameraMode.md#function-onactivation_event) () <br> |
| virtual void | [**OnDeactivation**](classUFlexiCameraMode.md#function-ondeactivation) () <br> |
|  void | [**OnDeactivation\_Event**](classUFlexiCameraMode.md#function-ondeactivation_event) () <br> |
|  void | [**SetBlendWeight**](classUFlexiCameraMode.md#function-setblendweight) (float Weight) <br> |
|   | [**UFlexiCameraMode**](classUFlexiCameraMode.md#function-uflexicameramode) () <br> |
|  void | [**UpdateCameraMode**](classUFlexiCameraMode.md#function-updatecameramode) (float DeltaTime) <br> |














## Protected Attributes

| Type | Name |
| ---: | :--- |
|  FRuntimeFloatCurve | [**BoundsSizeToDistance**](#variable-boundssizetodistance)  <br> |
|  FRotator | [**DefaultPivotRotation**](#variable-defaultpivotrotation)  <br> |


## Protected Attributes inherited from UFlexiCameraMode

See [UFlexiCameraMode](classUFlexiCameraMode.md)

| Type | Name |
| ---: | :--- |
|  float | [**BlendAlpha**](classUFlexiCameraMode.md#variable-blendalpha)  <br> |
|  float | [**BlendExponent**](classUFlexiCameraMode.md#variable-blendexponent)  <br> |
|  ECameraModeBlendFunction | [**BlendFunction**](classUFlexiCameraMode.md#variable-blendfunction)  <br> |
|  float | [**BlendTime**](classUFlexiCameraMode.md#variable-blendtime)  <br> |
|  float | [**BlendWeight**](classUFlexiCameraMode.md#variable-blendweight)  <br> |
|  FGameplayTagContainer | [**CameraTypeTags**](classUFlexiCameraMode.md#variable-cameratypetags)  <br> |
|  float | [**FieldOfView**](classUFlexiCameraMode.md#variable-fieldofview)  <br> |
|  [**FFlexiCameraModeView**](structFFlexiCameraModeView.md) | [**ModeView**](classUFlexiCameraMode.md#variable-modeview)  <br> |
|  float | [**ViewPitchMax**](classUFlexiCameraMode.md#variable-viewpitchmax)  <br> |
|  float | [**ViewPitchMin**](classUFlexiCameraMode.md#variable-viewpitchmin)  <br> |
|  uint32 | [**bResetInterpolation**](classUFlexiCameraMode.md#variable-bresetinterpolation)  <br> |






























## Protected Functions

| Type | Name |
| ---: | :--- |
| virtual void | [**UpdateView\_Implementation**](#function-updateview_implementation) (float DeltaTime) override<br> |


## Protected Functions inherited from UFlexiCameraMode

See [UFlexiCameraMode](classUFlexiCameraMode.md)

| Type | Name |
| ---: | :--- |
| virtual FVector | [**GetPivotLocation**](classUFlexiCameraMode.md#function-getpivotlocation) () const<br> |
| virtual FRotator | [**GetPivotRotation**](classUFlexiCameraMode.md#function-getpivotrotation) () const<br> |
| virtual void | [**UpdateBlending**](classUFlexiCameraMode.md#function-updateblending) (float DeltaTime) <br> |
|  void | [**UpdateView**](classUFlexiCameraMode.md#function-updateview) (float DeltaTime) <br> |
| virtual void | [**UpdateView\_Implementation**](classUFlexiCameraMode.md#function-updateview_implementation) (float DeltaTime) <br> |






## Detailed Description


Example camera mode that positions the camera above the desired volume looking straight down. 


    
## Public Functions Documentation




### function OnActivation 

```C++
virtual void UTopDownCameraMode::OnActivation () override
```



Implements [*UFlexiCameraMode::OnActivation*](classUFlexiCameraMode.md#function-onactivation)


<hr>



### function UTopDownCameraMode 

```C++
UTopDownCameraMode::UTopDownCameraMode () 
```




<hr>
## Protected Attributes Documentation




### variable BoundsSizeToDistance 

```C++
FRuntimeFloatCurve UTopDownCameraMode::BoundsSizeToDistance;
```




<hr>



### variable DefaultPivotRotation 

```C++
FRotator UTopDownCameraMode::DefaultPivotRotation;
```




<hr>
## Protected Functions Documentation




### function UpdateView\_Implementation 

```C++
virtual void UTopDownCameraMode::UpdateView_Implementation (
    float DeltaTime
) override
```



Implements [*UFlexiCameraMode::UpdateView\_Implementation*](classUFlexiCameraMode.md#function-updateview_implementation)


<hr>

------------------------------
The documentation for this class was generated from the following file `Source/FlexiCam/Public/Examples/TopDownCameraMode.h`

