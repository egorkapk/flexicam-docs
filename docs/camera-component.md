# Flexi Camera Component

`Flexi Camera Component` acts as the physical camera within the world. It relies on a [`Camera Mode Stack`](camera-mode-stack.md) to blend and calculate the final view.

## Core principles

`Flexi Camera Component` owns and evaluates [`Camera Mode Stack`](camera-mode-stack.md) to get the final view from [Camera Modes](camera-mode.md) and to pass it to `PlayerCameraManager`.

!!! warning

    `Flexi Camera Component` is not intended for direct interaction; it is designed to work in conjunction with the [`Flexi Camera Manager Component`](camera-mode-manager.md).