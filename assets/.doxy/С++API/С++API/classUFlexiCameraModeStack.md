

# Class UFlexiCameraModeStack



[**ClassList**](annotated.md) **>** [**UFlexiCameraModeStack**](classUFlexiCameraModeStack.md)



[More...](#detailed-description)

* `#include <FlexiCameraMode.h>`



Inherits the following classes: UObject


































## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**ActivateStack**](#function-activatestack) () <br> |
|  void | [**DeactivateStack**](#function-deactivatestack) () <br> |
|  bool | [**EvaluateStack**](#function-evaluatestack) (float DeltaTime, [**FFlexiCameraModeView**](structFFlexiCameraModeView.md) & OutCameraModeView) <br> |
|  void | [**GetBlendInfo**](#function-getblendinfo) (float & OutWeightOfTopLayer, FGameplayTagContainer & OutTagsOfTopLayer) const<br> |
|  bool | [**HasAnyTagOnStack**](#function-hasanytagonstack) (const FGameplayTagContainer & TagsToCheck) <br> |
|  bool | [**IsStackActivate**](#function-isstackactivate) () const<br> |
|  void | [**PushCameraMode**](#function-pushcameramode) (TSubclassOf&lt; [**UFlexiCameraMode**](classUFlexiCameraMode.md) &gt; CameraModeClass) <br> |
|   | [**UFlexiCameraModeStack**](#function-uflexicameramodestack) () <br> |








## Protected Attributes

| Type | Name |
| ---: | :--- |
|  TArray&lt; TObjectPtr&lt; [**UFlexiCameraMode**](classUFlexiCameraMode.md) &gt; &gt; | [**CameraModeInstances**](#variable-cameramodeinstances)  <br> |
|  TArray&lt; TObjectPtr&lt; [**UFlexiCameraMode**](classUFlexiCameraMode.md) &gt; &gt; | [**CameraModeStack**](#variable-cameramodestack)  <br> |
|  bool | [**bIsActive**](#variable-bisactive)  <br> |
















## Protected Functions

| Type | Name |
| ---: | :--- |
|  void | [**BlendStack**](#function-blendstack) ([**FFlexiCameraModeView**](structFFlexiCameraModeView.md) & OutCameraModeView) const<br> |
|  [**UFlexiCameraMode**](classUFlexiCameraMode.md) \* | [**GetCameraModeInstance**](#function-getcameramodeinstance) (TSubclassOf&lt; [**UFlexiCameraMode**](classUFlexiCameraMode.md) &gt; CameraModeClass) <br> |
|  void | [**UpdateStack**](#function-updatestack) (float DeltaTime) <br> |




## Detailed Description


[**UFlexiCameraModeStack**](classUFlexiCameraModeStack.md)


Stack used for blending camera modes. 


    
## Public Functions Documentation




### function ActivateStack 

```C++
void UFlexiCameraModeStack::ActivateStack () 
```




<hr>



### function DeactivateStack 

```C++
void UFlexiCameraModeStack::DeactivateStack () 
```




<hr>



### function EvaluateStack 

```C++
bool UFlexiCameraModeStack::EvaluateStack (
    float DeltaTime,
    FFlexiCameraModeView & OutCameraModeView
) 
```




<hr>



### function GetBlendInfo 

```C++
void UFlexiCameraModeStack::GetBlendInfo (
    float & OutWeightOfTopLayer,
    FGameplayTagContainer & OutTagsOfTopLayer
) const
```




<hr>



### function HasAnyTagOnStack 

```C++
bool UFlexiCameraModeStack::HasAnyTagOnStack (
    const FGameplayTagContainer & TagsToCheck
) 
```




<hr>



### function IsStackActivate 

```C++
bool UFlexiCameraModeStack::IsStackActivate () const
```




<hr>



### function PushCameraMode 

```C++
void UFlexiCameraModeStack::PushCameraMode (
    TSubclassOf< UFlexiCameraMode > CameraModeClass
) 
```




<hr>



### function UFlexiCameraModeStack 

```C++
UFlexiCameraModeStack::UFlexiCameraModeStack () 
```




<hr>
## Protected Attributes Documentation




### variable CameraModeInstances 

```C++
TArray<TObjectPtr<UFlexiCameraMode> > UFlexiCameraModeStack::CameraModeInstances;
```




<hr>



### variable CameraModeStack 

```C++
TArray<TObjectPtr<UFlexiCameraMode> > UFlexiCameraModeStack::CameraModeStack;
```




<hr>



### variable bIsActive 

```C++
bool UFlexiCameraModeStack::bIsActive;
```




<hr>
## Protected Functions Documentation




### function BlendStack 

```C++
void UFlexiCameraModeStack::BlendStack (
    FFlexiCameraModeView & OutCameraModeView
) const
```




<hr>



### function GetCameraModeInstance 

```C++
UFlexiCameraMode * UFlexiCameraModeStack::GetCameraModeInstance (
    TSubclassOf< UFlexiCameraMode > CameraModeClass
) 
```




<hr>



### function UpdateStack 

```C++
void UFlexiCameraModeStack::UpdateStack (
    float DeltaTime
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `Source/FlexiCam/Public/CameraModes/FlexiCameraMode.h`

