

# Class ATopDownCameraModeTrigger



[**ClassList**](annotated.md) **>** [**ATopDownCameraModeTrigger**](classATopDownCameraModeTrigger.md)



[More...](#detailed-description)

* `#include <TopDownCameraModeTrigger.h>`



Inherits the following classes: [AFlexiCameraModeTrigger](classAFlexiCameraModeTrigger.md)






















































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**ATopDownCameraModeTrigger**](#function-atopdowncameramodetrigger) () <br> |
|  UBoxComponent \* | [**GetTriggerVolume**](#function-gettriggervolume) () const<br> |


## Public Functions inherited from AFlexiCameraModeTrigger

See [AFlexiCameraModeTrigger](classAFlexiCameraModeTrigger.md)

| Type | Name |
| ---: | :--- |
|   | [**AFlexiCameraModeTrigger**](classAFlexiCameraModeTrigger.md#function-aflexicameramodetrigger) () <br> |
















## Protected Attributes inherited from AFlexiCameraModeTrigger

See [AFlexiCameraModeTrigger](classAFlexiCameraModeTrigger.md)

| Type | Name |
| ---: | :--- |
|  TSubclassOf&lt; class [**UFlexiCameraMode**](classUFlexiCameraMode.md) &gt; | [**CameraModeClass**](classAFlexiCameraModeTrigger.md#variable-cameramodeclass)  <br> |
|  TObjectPtr&lt; UBoxComponent &gt; | [**TriggerVolume**](classAFlexiCameraModeTrigger.md#variable-triggervolume)  <br> |
































## Protected Functions inherited from AFlexiCameraModeTrigger

See [AFlexiCameraModeTrigger](classAFlexiCameraModeTrigger.md)

| Type | Name |
| ---: | :--- |
|  void | [**OnTriggerBeginOverlap**](classAFlexiCameraModeTrigger.md#function-ontriggerbeginoverlap) (class UPrimitiveComponent \* OverlappedComp, class AActor \* OtherActor, class UPrimitiveComponent \* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult) <br> |
|  void | [**OnTriggerEndOverlap**](classAFlexiCameraModeTrigger.md#function-ontriggerendoverlap) (class UPrimitiveComponent \* OverlappedComp, class AActor \* OtherActor, class UPrimitiveComponent \* OtherComp, int32 OtherBodyIndex) <br> |






## Detailed Description


Example camera mode trigger for a top-down camera mode. 


    
## Public Functions Documentation




### function ATopDownCameraModeTrigger 

```C++
ATopDownCameraModeTrigger::ATopDownCameraModeTrigger () 
```




<hr>



### function GetTriggerVolume 

```C++
UBoxComponent * ATopDownCameraModeTrigger::GetTriggerVolume () const
```




<hr>

------------------------------
The documentation for this class was generated from the following file `Source/FlexiCam/Public/Examples/TopDownCameraModeTrigger.h`

