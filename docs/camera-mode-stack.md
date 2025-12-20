# Flexi Camera Mode Stack

`FlexiCameraModeStack` is the internal engine of the FlexiCam system. It manages the lifecycle of [`Camera modes`](camera-mode.md) and performs the blending required to create smooth transitions between different camera behaviors.

## Core Concept: The Layered Stack

The stack follows a Top-Down Priority logic. It stores [`Camera modes`](camera-mode.md) in an array, where:

- Index 0 (The Top): The current target mode. This is the mode the camera is actively trying to transition toward

- Higher Indices (The Bottom): Older modes that are currently "fading out" as the new mode takes over

### Creation and Management

`Stack` itself is created and evaluated by [Flexi Camera Component](camera-component.md).
`Camera Mode` switching and querying of active `Camera Mode` information are handled by the [`Flexi Camera Mode Manager Component`](camera-mode-manager.md), providing a centralized way to control camera behavior and access the current camera state.

### Insertion

New modes are always inserted at Index 0.

### Seamless Transitions

If the mode being pushed is already in the stack (e.g., re-activating "Aiming" before it fully faded out), the stack calculates its current visual contribution and starts the new transition from that exact point to prevent visual "snapping"

### Bottom-to-Top Blending

[`Camera modes`](camera-mode.md) are blended from bottom to top, taking into account their contribution to the final view based on the selected `Blend function` and `Blend Time`

### Pruning (Optimization)

 If a mode at a higher priority (lower index) reaches a weight of 1.0 (100%), it completely obscures everything below it. The stack removes all modes at higher indices to save performance.

!!!note

    To save performance and don't create modes every time their instances stored in `CameraModeInstances` array and persist in memory for the entire lifetime of the stack.
    If the number of instanced modes becomes excessive, they should be removed from the array to maintain optimal performance
