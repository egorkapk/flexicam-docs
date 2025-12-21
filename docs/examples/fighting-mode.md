# UFightingCameraMode

A fighting-game style camera mode.  
This mode keeps all fighters in view by dynamically positioning and zooming the camera

---

## Key Features

- Calculates the midpoint between all fighters to focus the camera
- Adjusts camera distance based on the maximum distance between fighters using a configurable curve
- Smoothly interpolates camera movement for fluid transitions
- Uses a fixed pivot rotation to control camera angle

---

## Properties

- `DefaultPivotRotation (FRotator)`: Camera pivot rotation angle.
- `BoundsSizeToDistance (FRuntimeFloatCurve)`: Maps max distance between fighters to camera distance.
- `InterpolationSpeed (float)`: Speed of camera interpolation. Used for transitions when number of fighters changes

---

## Methods

- `UpdateView_Implementation`: Updates camera location and rotation every frame

```cpp
    virtual void UpdateView_Implementation(float DeltaTime) override;
```

- `GetMidPoint`: Returns midpoint location between all fighters

```cpp
    FVector GetMidPoint() const;
```

- `GetFightersMaxDistance()`: Returns maximum distance between fighters

```cpp
    const float GetFightersMaxDistance() const;
```

---

## Usage

1. Create Blueprint for this class
2. Configure `BoundsSizeToDistance` curve and `InterpolationSpeed` in the editor
3. Apply this mode to the target
4. Camera will automatically track fighters smoothly during gameplay

---
