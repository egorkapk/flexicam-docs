# Camera Mode Trigger

An actor that triggers switching of FlexiCam camera modes when target actor enters or exits its volume.

---

## Key Features

- Uses a `UBoxComponent` as a trigger volume to detect overlapping actors

- Automatically sets the camera mode on overlapping actors that implement the [`IFlexiCamInterface`](flexicam-interface.md)

- Resets camera mode to default when actors leave the trigger volume

---

## Components

- `TriggerVolume (UBoxComponent)`: The box collision volume that detects overlaps and triggers camera mode changes
- `EditorIcon (UBillboardComponent, editor only)`: Visual representation in editor to mark trigger position

---

## Properties

- `CameraModeClass (TSubclassOf<UFlexiCameraMode>)`: The camera mode class to activate when an actor enters the trigger

---

## Methods

- `GetCameraModeManagerComponent(AActor* Actor)`: Helper that gets the `UFlexiCameraModeManagerComponent` from an actor implementing [`IFlexiCamInterface`](flexicam-interface.md)

```cpp
    UFlexiCameraModeManagerComponent* GetCameraModeManagerComponent(AActor* Actor) const;
```

## Usage

1. Place `AFlexiCameraModeTrigger` actors in the level with box collision defining the area
2. Set the `CameraModeClass` to the desired FlexiCam mode to activate inside the trigger
3. Ensure that player or relevant actors implement [`IFlexiCamInterface`](flexicam-interface.md)
4. When such an actor overlaps the trigger, the camera mode switches; when it leaves, it resets to default
