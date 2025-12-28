

# Class AFlexiCameraModeTrigger



[**ClassList**](annotated.md) **>** [**AFlexiCameraModeTrigger**](classAFlexiCameraModeTrigger.md)








Inherits the following classes: AActor


Inherited by the following classes: [ATopDownCameraModeTrigger](classATopDownCameraModeTrigger.md)
































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**AFlexiCameraModeTrigger**](#function-aflexicameramodetrigger) () <br> |








## Protected Attributes

| Type | Name |
| ---: | :--- |
|  TSubclassOf&lt; class [**UFlexiCameraMode**](classUFlexiCameraMode.md) &gt; | [**CameraModeClass**](#variable-cameramodeclass)  <br> |
|  TObjectPtr&lt; UBoxComponent &gt; | [**TriggerVolume**](#variable-triggervolume)  <br> |
















## Protected Functions

| Type | Name |
| ---: | :--- |
|  void | [**OnTriggerBeginOverlap**](#function-ontriggerbeginoverlap) (class UPrimitiveComponent \* OverlappedComp, class AActor \* OtherActor, class UPrimitiveComponent \* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult) <br> |
|  void | [**OnTriggerEndOverlap**](#function-ontriggerendoverlap) (class UPrimitiveComponent \* OverlappedComp, class AActor \* OtherActor, class UPrimitiveComponent \* OtherComp, int32 OtherBodyIndex) <br> |




## Public Functions Documentation




### function AFlexiCameraModeTrigger 

```C++
AFlexiCameraModeTrigger::AFlexiCameraModeTrigger () 
```




<hr>
## Protected Attributes Documentation




### variable CameraModeClass 

```C++
TSubclassOf<class UFlexiCameraMode> AFlexiCameraModeTrigger::CameraModeClass;
```




<hr>



### variable TriggerVolume 

```C++
TObjectPtr<UBoxComponent> AFlexiCameraModeTrigger::TriggerVolume;
```




<hr>
## Protected Functions Documentation




### function OnTriggerBeginOverlap 

```C++
void AFlexiCameraModeTrigger::OnTriggerBeginOverlap (
    class UPrimitiveComponent * OverlappedComp,
    class AActor * OtherActor,
    class UPrimitiveComponent * OtherComp,
    int32 OtherBodyIndex,
    bool bFromSweep,
    const FHitResult & SweepResult
) 
```




<hr>



### function OnTriggerEndOverlap 

```C++
void AFlexiCameraModeTrigger::OnTriggerEndOverlap (
    class UPrimitiveComponent * OverlappedComp,
    class AActor * OtherActor,
    class UPrimitiveComponent * OtherComp,
    int32 OtherBodyIndex
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `Source/FlexiCam/Public/Miscellaneous/FlexiCameraModeTrigger.h`

