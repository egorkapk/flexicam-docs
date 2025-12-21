# UTopDownCameraMode

This mode positions the camera above a target area using trigger volumes to define the camera pivot point.

## Key Features

- Sets the camera pivot based on the bounds of a BoxComponent volume (arena or zone).
- Activates and repositions the camera when the target actor overlaps a trigger volume.
- Maintains a fixed camera location and rotation for a classic top-down perspective.

## Properties

- `DefaultPivotRotation (FRotator)`: Fixed rotation angle for the camera pivot.
- `BoundsSizeToDistance (FRuntimeFloatCurve)`: Curve mapping bounds size to camera distance.

## Methods

- `OnActivation()`: Calculates pivot location based on the target volume's bounds when mode activates.

```cpp
    virtual void UTopDownCameraMode::OnActivation() override;
```

- `UpdateView_Implementation(float DeltaTime)`: Updates the camera's location, rotation, and FOV each frame.

```cpp
    virtual void UpdateView_Implementation(float DeltaTime) override;
```

- `GetTargetVolume()`: Finds the BoxComponent trigger volume overlapped by the target actor to define camera bounds.

```cpp
    UBoxComponent* UTopDownCameraMode::GetTargetVolume() const
```

---

## Usage

1. Place `ATopDownCameraModeTrigger` actor in the level to define camera zones.
2. The camera activates and positions itself above the volume when the player overlaps the trigger.
3. Configure `DefaultPivotRotation` and `BoundsSizeToDistance` curve to adjust camera angle and zoom behavior.

---
