# Flexi Camera Mode Manager Component

`FlexiCameraModeManagerComponent` is responsible for managing the active [`Camera Mode`](camera-mode.md) logic. It determines which mode class should be pushed to the camera stack.

## Configuration Properties

- `DefaultCameraModeClass` (EditDefaultsOnly)

    The fallback camera mode class used when no specific mode is set

- `TargetActorOverride` (EditInstanceOnly)

    Allows the manager to control a [`FlexiCameraComponent`](camera-component.md) on a specific target actor. If null, it defaults to the manager's owner.

## Core functions

### `SetCameraMode` 

Sets the specific camera mode class to be active

#### Blueprint

- `SetCameraMode(NewCameraModeClass)`

#### C++

```cpp
     void SetCameraMode(TSubclassOf<UFlexiCameraMode> NewCameraModeClass);
```  

---

### `ResetToDefaultCameraMode`

Resets the active camera mode back to the class specified in DefaultCameraModeClass

### Blueprint

### C++

```cpp
     void ResetToDefaultCameraMode();
```

---

### `GetCurrentCameraModeBlendInfo`

Gets the tags and blend weight of the current camera mode

#### Blueprint 

- `GetCurrentCameraModeBlendInfo()`

#### C++

```cpp
    void GetCurrentCameraModeBlendInfo(float& OutWeightOfTopLayer, FGameplayTagContainer& OutTagsOfTopLayer) const;
```

---

### `CurrentCameraModeHasAnyTag`

Returns true if the currently active camera mode has any of the provided tags

#### Blueprint

- `CurrentCameraModeHasAnyTag(ContainerToCheck)`

#### C++

```cpp 
    bool CurrentCameraModeHasAnyTag(const FGameplayTagContainer& ContainerToCheck);
```

---

### `HasAnyTagOnStack`

Returns true if any camera mode in the stack has any of the provided tags

#### Blueprint

- `HasAnyTagOnStack(TagsToCheck)`

#### C++

```cpp
    bool HasAnyTagOnStack(const FGameplayTagContainer& TagsToCheck);
```