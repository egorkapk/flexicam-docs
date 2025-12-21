# Third Person Camera Mode

A Third Person style camera mode.
This mode mimics standard `ThirdPirson Template` camera

---

## Key Features

- Attaches a `CameraComponent` to a `SpringArmComponent` for smooth, lagged movement.
- Spring arm maintains a fixed distance and angle behind and above the player.
- Prevents camera clipping by adjusting arm length on collisions.
- Camera rotation follows player input for looking around.

---

## Usage

!!!warning
    This mode requires [Flexi Camera Component](../camera-component.md) attached to `SpringArmComponent`

1. Add `SpringArmComponent` to Character
2. Apply this mode to the target
3. Camera will automatically follow the player

---