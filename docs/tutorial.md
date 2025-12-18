# FlexiCam Blueprints Tutorial

Step-by-step example of how to create your own `Character` setup and [`Camera Mode`](camera-mode.md)

## Prerequisites

- A character Blueprint with basic movement (the Third Person Template character, etc.)

## Third Person Camera Mode

This section shows how to set up basic [`Third Person Camera Mode`](examples/third-person-mode.md)

1. Add `SpringArmComponent` to your Blueprint

    ![alt text](<resources/Add Spring arm.png>)

2. Add [`FlexiCameraComponent`](camera-component.md)

    ![alt text](<resources/Add Camera Component.png>)

3. Make the [`FlexiCameraComponent`](camera-component.md) a child of the `SpringArmComponent`

    ![alt text](<resources/Set Camera Component.png>)

4. Add [`FlexiCameraModeManagerComponent`](camera-mode-manager.md) to your Blueprint

    ![alt text](<resources/Add Camera Manager.png>)

5. Set `Default Camera Mode Class` in [`FlexiCameraModeManagerComponent`](camera-mode-manager.md) to [`BP_ThirdPersonMode`](examples/third-person-mode.md)

    ![alt text](<resources/Set Default Mode.png>)

    !!! warning
        If you don’t perform this step, the View Transform will be zero.
You now have a basic Third Person camera set up.

## Creating custom [`Camera Mode`](camera-mode.md)

1. Open `Content Browser`, press `Right Mouse Button` and select `Blueprint Class` menu

    ![alt text](<resources/Create Blueprint.png>)

2. Press `All CLASSES` and search for [`FlexiCameraMode`](camera-mode.md)

    ![alt text](<resources/Create Camera Mode.png>)

    Create Blueprint and name in CM_SideScroller.
    Open this Blueprint.

3. In the `Functions` menu of your Blueprint select `Override` option and choose `Update View` function

    ![alt text](<resources/Add update view.png>)

4. Press `Right Mouse Button` inside of Event Graph and search for `Get Pivot Location` function
    !!! tip
        This function returns location of `Actor` that have [`FlexiCameraComponent`](camera-component.md) and this mode applied.

5. Add two variables to the Blueprint as shown in the image.

    ![alt text](<resources/Create variables.png>)

    Drag and drop them into Event Graph (with Get option).

6. Drag pin from `Default Rotation` variable and search for `Rotate Vector` function

    ![alt text](<resources/Rotate vector.png>)

Connect `Camera offset` variable to it

    ![alt text](<resources/Rotate vector result.png>)

7. Drag `Return Value` pin of `Get Pivot Location` function  and search for `"+"` sign

    ![alt text](<resources/Add vector.png>)

    Connect `Rotate Vector` result to add function

    ![alt text](<resources/Add vector reuslt.png>)

8. Now search for [`ModeView`](camera-mode.md#flexicameramodeview) struct. Choose `Set` option

    ![alt text](<resources/Set ModeView.png>)

    Drag out `Mode View` pin and select `Make FlexiCameraModeView`
    
    ![alt text](<resources/Make Struct.png>)

9. Connect pins as shown in the image below

    ![alt text](<resources/Full result.png>)

10. Select `Camera offset` variable and set default value to `-500.0 | 0.0 | 0.0`

    ![alt text](<resources/Set offset default.png>)

Now we have a fully functional Side Scroller mode. Let’s see how to activate it.