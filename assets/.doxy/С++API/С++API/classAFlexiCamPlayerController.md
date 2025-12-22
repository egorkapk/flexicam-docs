

# Class AFlexiCamPlayerController



[**ClassList**](annotated.md) **>** [**AFlexiCamPlayerController**](classAFlexiCamPlayerController.md)



[More...](#detailed-description)

* `#include <FlexiCamPlayerController.h>`



Inherits the following classes: APlayerController










































## Protected Attributes

| Type | Name |
| ---: | :--- |
|  TArray&lt; UInputMappingContext \* &gt; | [**DefaultMappingContexts**](#variable-defaultmappingcontexts)  <br> |
















## Protected Functions

| Type | Name |
| ---: | :--- |
| virtual void | [**SetupInputComponent**](#function-setupinputcomponent) () override<br> |




## Detailed Description


Basic PlayerController class for a third person game Manages input mappings 


    
## Protected Attributes Documentation




### variable DefaultMappingContexts 

```C++
TArray<UInputMappingContext*> AFlexiCamPlayerController::DefaultMappingContexts;
```



Input Mapping Contexts 


        

<hr>
## Protected Functions Documentation




### function SetupInputComponent 

```C++
virtual void AFlexiCamPlayerController::SetupInputComponent () override
```



Input mapping context setup 


        

<hr>

------------------------------
The documentation for this class was generated from the following file `Source/FlexiCam/Public/Examples/FlexiCamPlayerController.h`

