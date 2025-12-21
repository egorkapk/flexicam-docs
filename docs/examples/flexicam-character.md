# Flexicam character

This is example character that used to show how to setup and use FlexiCam system

---

## Components

- [`Camera Mode Manager Component`](../camera-mode-manager.md): allows to switch and query modes. [BP_ThirdPersonMode](third-person-mode.md) is set as `DefaultCameraModeClass`
- [Flexi Camera Component](../camera-component.md): physical representation of a camera

---

## Changing input by `Camera mode`

`FlexiCam character` uses [`Camera Mode's`](../camera-mode.md) Gameplay Tags to modify Player Input.

It made in `DoMove` function:

```cpp
void AFlexiCamCharacter::DoMove(float Right, float Forward)
{
    //... Some previous logic

		// See if we have to modify movement based on camera mode
		UFlexiCameraModeManagerComponent* CameraModeManager = GetFlexiCameraModeManagerComponent_Implementation();

		if (!CameraModeManager)
		{
			// add full movement 
			AddMovementInput(ForwardDirection, Forward);
			AddMovementInput(RightDirection, Right);
			return;
		}

		// check if CameraMode has tag to disable forward movement
		FGameplayTagContainer CheckContainer;
		CheckContainer.AddTag(TAG_SideScrollingMovement);

		if (CameraModeManager->HasAnyTagOnStack(CheckContainer))
		{
			AddMovementInput(RightDirection, Right);
		}
		else
		{
			// add full movement 
			AddMovementInput(ForwardDirection, Forward);
			AddMovementInput(RightDirection, Right);
		}
	}
}
```

!!!note
    You can see how to modify input in Blueprint in `BP_FlexiCamCharacter`