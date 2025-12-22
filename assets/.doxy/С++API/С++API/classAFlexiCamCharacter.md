

# Class AFlexiCamCharacter



[**ClassList**](annotated.md) **>** [**AFlexiCamCharacter**](classAFlexiCamCharacter.md)



[More...](#detailed-description)

* `#include <FlexiCamCharacter.h>`



Inherits the following classes: ACharacter,  [IFlexiCamInterface](classIFlexiCamInterface.md)






















































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**AFlexiCamCharacter**](#function-aflexicamcharacter) () <br> |
| virtual void | [**DoJumpEnd**](#function-dojumpend) () <br> |
| virtual void | [**DoJumpStart**](#function-dojumpstart) () <br> |
| virtual void | [**DoLook**](#function-dolook) (float Yaw, float Pitch) <br> |
| virtual void | [**DoMove**](#function-domove) (float Right, float Forward) <br> |
|  FORCEINLINE class USpringArmComponent \* | [**GetCameraBoom**](#function-getcameraboom) () const<br> |
| virtual UFlexiCameraModeManagerComponent \* | [**GetFlexiCameraModeManagerComponent\_Implementation**](#function-getflexicameramodemanagercomponent_implementation) () override const<br> |
|  FORCEINLINE class UCameraComponent \* | [**GetFollowCamera**](#function-getfollowcamera) () const<br> |


## Public Functions inherited from IFlexiCamInterface

See [IFlexiCamInterface](classIFlexiCamInterface.md)

| Type | Name |
| ---: | :--- |
|  UFlexiCameraModeManagerComponent \* | [**GetFlexiCameraModeManagerComponent**](classIFlexiCamInterface.md#function-getflexicameramodemanagercomponent) () const<br> |














## Protected Attributes

| Type | Name |
| ---: | :--- |
|  USpringArmComponent \* | [**CameraBoom**](#variable-cameraboom)  <br> |
|  TObjectPtr&lt; UFlexiCameraModeManagerComponent &gt; | [**FlexiCameraModeManagerComponent**](#variable-flexicameramodemanagercomponent)  <br> |
|  TObjectPtr&lt; UFlexiCameraComponent &gt; | [**FollowCamera**](#variable-followcamera)  <br> |
|  UInputAction \* | [**JumpAction**](#variable-jumpaction)  <br> |
|  UInputAction \* | [**LookAction**](#variable-lookaction)  <br> |
|  UInputAction \* | [**MouseLookAction**](#variable-mouselookaction)  <br> |
|  UInputAction \* | [**MoveAction**](#variable-moveaction)  <br> |
































## Protected Functions

| Type | Name |
| ---: | :--- |
|  void | [**Look**](#function-look) (const FInputActionValue & Value) <br> |
|  void | [**Move**](#function-move) (const FInputActionValue & Value) <br> |
| virtual void | [**SetupPlayerInputComponent**](#function-setupplayerinputcomponent) (class UInputComponent \* PlayerInputComponent) override<br> |








## Detailed Description


A simple player-controllable third person character Implements a controllable orbiting camera 


    
## Public Functions Documentation




### function AFlexiCamCharacter 

```C++
AFlexiCamCharacter::AFlexiCamCharacter () 
```




<hr>



### function DoJumpEnd 

```C++
virtual void AFlexiCamCharacter::DoJumpEnd () 
```



Handles jump pressed inputs from either controls or UI interfaces 


        

<hr>



### function DoJumpStart 

```C++
virtual void AFlexiCamCharacter::DoJumpStart () 
```



Handles jump pressed inputs from either controls or UI interfaces 


        

<hr>



### function DoLook 

```C++
virtual void AFlexiCamCharacter::DoLook (
    float Yaw,
    float Pitch
) 
```



Handles look inputs from either controls or UI interfaces 


        

<hr>



### function DoMove 

```C++
virtual void AFlexiCamCharacter::DoMove (
    float Right,
    float Forward
) 
```



Handles move inputs from either controls or UI interfaces 


        

<hr>



### function GetCameraBoom 

```C++
FORCEINLINE class USpringArmComponent * AFlexiCamCharacter::GetCameraBoom () const
```



Returns CameraBoom subobject 


        

<hr>



### function GetFlexiCameraModeManagerComponent\_Implementation 

```C++
virtual UFlexiCameraModeManagerComponent * AFlexiCamCharacter::GetFlexiCameraModeManagerComponent_Implementation () override const
```




<hr>



### function GetFollowCamera 

```C++
FORCEINLINE class UCameraComponent * AFlexiCamCharacter::GetFollowCamera () const
```



Returns FollowCamera subobject 


        

<hr>
## Protected Attributes Documentation




### variable CameraBoom 

```C++
USpringArmComponent* AFlexiCamCharacter::CameraBoom;
```



Camera boom positioning the camera behind the character 


        

<hr>



### variable FlexiCameraModeManagerComponent 

```C++
TObjectPtr<UFlexiCameraModeManagerComponent> AFlexiCamCharacter::FlexiCameraModeManagerComponent;
```




<hr>



### variable FollowCamera 

```C++
TObjectPtr<UFlexiCameraComponent> AFlexiCamCharacter::FollowCamera;
```



Follow camera 


        

<hr>



### variable JumpAction 

```C++
UInputAction* AFlexiCamCharacter::JumpAction;
```



Jump Input Action 


        

<hr>



### variable LookAction 

```C++
UInputAction* AFlexiCamCharacter::LookAction;
```



Look Input Action 


        

<hr>



### variable MouseLookAction 

```C++
UInputAction* AFlexiCamCharacter::MouseLookAction;
```



Mouse Look Input Action 


        

<hr>



### variable MoveAction 

```C++
UInputAction* AFlexiCamCharacter::MoveAction;
```



Move Input Action 


        

<hr>
## Protected Functions Documentation




### function Look 

```C++
void AFlexiCamCharacter::Look (
    const FInputActionValue & Value
) 
```



Called for looking input 


        

<hr>



### function Move 

```C++
void AFlexiCamCharacter::Move (
    const FInputActionValue & Value
) 
```



Called for movement input 


        

<hr>



### function SetupPlayerInputComponent 

```C++
virtual void AFlexiCamCharacter::SetupPlayerInputComponent (
    class UInputComponent * PlayerInputComponent
) override
```



Initialize input action bindings 


        

<hr>

------------------------------
The documentation for this class was generated from the following file `Source/FlexiCam/Public/Examples/FlexiCamCharacter.h`

