# FlexiCam Camera Mode

This page describes **FlexiCam Camera Mode** — the base concept of the FlexiCam plugin. Camera Modes define *how the camera behaves*, *where it is placed*, and *how it blends* with other camera modes.

---

## What is a Camera Mode?

A **Camera Mode** is an object that calculates final camera view and transform of [FlexiCameraComponent.](camera-component.md)

Multiple modes can be active at the same time and smoothly blended together.

---

## FlexiCameraModeView

Every **CameraMode** contains `FlexiCameraModeView` structure that represents the camera output produced by a camera mode.

**Contains:**

- `Location` — camera world position.
- `Rotation` — camera rotation.
- `ControlRotation` — control rotation for the player.
- `FieldOfView` — camera FOV.

## Blending Between Camera Modes

Each camera mode supports smooth blending.

### Blend Settings

| Property | Description |
|--------|------------|
| `BlendTime` | How long the blend takes |
| `BlendFunction` | Curve used for blending |
| `BlendExponent` | Controls curve sharpness |

### Blend Functions

- **Linear** — constant interpolation
- **EaseIn** — smooth start, fast end
- **EaseOut** — fast start, smooth end
- **EaseInOut** — smooth start and end

---

## Important Functions

### `UpdateView(DeltaTime)`

Main function where camera logic lives.

Called **every frame** while the mode is active.

#### Blueprint

- `UpdateView(DeltaTime)`

#### C++

```cpp
virtual void UpdateView(DeltaTime) override;
```

---

### Activation & Deactivation

Camera modes receive lifecycle events.

#### Blueprint

- `On Activation`
- `On Deactivation`

#### C++

```cpp
virtual void OnActivation() override;
virtual void OnDeactivation() override;
```

Useful for:

- Resetting interpolation
- Playing camera effects
- Debug logging

---

## Gameplay Tags

Camera modes can expose **gameplay tags**.

```cpp
CameraTypeTags
```

These tags allow gameplay code to:

- Check which camera type is active
- Change abilities or input behavior

## Using Camera Mode

Inside `Update View`:

- Calculate pivot location
- Calculate camera rotation
- Assign values to `ModeView` structure.

### Examples

#### Blueprint

- [`ThirdPersonCameraMode`](examples/third-person-mode.md)
- [`OverShoulderCameraMode`](examples/over-shoulder-mode.md)

#### C++

- [`TopDownCameraMode`](examples/top-down-mode.md)
- [`FightingCameraMode`](examples/fighting-mode.md)

---
