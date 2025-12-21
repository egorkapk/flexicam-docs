# IFlexiCamInterface

This interface standardizes how actors expose their FlexiCam camera mode manager component, enabling camera mode triggers and systems to query and control the camera modes in a consistent way without tight coupling.

---

## Functions

`GetFlexiCameraModeManagerComponent`: Provides access to the actor's associated[`FlexiCameraModeManagerComponent`](camera-mode-manager.md). Must be implemented by the actor class or Blueprint

```cpp
    UFlexiCameraModeManagerComponent* GetFlexiCameraModeManagerComponent() const;
```

---

## Usage

To use this interface:

1. Implement `IFlexiCamInterface` in your actor or pawn classes.
2. Provide the actual `UFlexiCameraModeManagerComponent` instance in `GetFlexiCameraModeManagerComponent`.
3. Other systems (e.g., camera mode triggers) query this function to manipulate camera modes dynamically during gameplay.

---
