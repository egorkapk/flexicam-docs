# FlexyCam system overview

`FlexiCam` is a modular, stack-based camera system for Unreal Engine 5 designed to decouple camera behavior from actor logic. It allows developers to build complex camera systems by combining independent, reusable modes that blend seamlessly based on gameplay context

The system operates on a Top-Down Priority logic, where multiple camera states can coexist in a stack, blending their properties to produce a single final output

---

## [Flexi Camera Mode](camera-mode.md)

The fundamental building block of the system. It is an object-based logic container that defines "how" a camera behaves at any given moment

- Encapsulation: Each mode independently calculates its own Location, Rotation, ControlRotation, and FieldOfView

- Lifecycle: Features built-in activation/deactivation events, making it ideal for triggering camera-specific effects or resetting interpolations when a state changes

- Data-Driven: Supports Gameplay Tags, allowing external systems to query the current camera state to adjust player input or abilities

---

## [Flexi Camera Mode Manager Component](camera-mode-manager.md)

The authoritative interface for the developer. This component acts as the "brain" that dictates which mode should be active

- State Control: Provides Blueprint and C++ functions to change modes

- Context Awareness: Allows for easy querying of the stack to check if specific tags are active, facilitating communication between the camera and gameplay systems

---

## [Flexi Camera Component](camera-component.md)

The physical representation of the camera in the world

- Final Evaluation: It owns [Flexi Camera Mode Stack](camera-mode-stack.md) and retrieves the final calculated transform every frame to update the view

---

## [Flexi Camera Mode Stack](camera-mode-stack.md)

The internal "engine" of the plugin that manages the transition lifecycle

- Layered Blending: It processes modes from bottom to top. When a new mode is pushed , the stack calculates a smooth transition from the previous `Camera Mode` to the new one
