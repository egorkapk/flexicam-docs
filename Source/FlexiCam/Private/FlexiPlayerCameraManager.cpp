// Copyright (c) 2025 Egor Ermakov.


#include "FlexiPlayerCameraManager.h"

AFlexiPlayerCameraManager::AFlexiPlayerCameraManager(const FObjectInitializer& ObjectInitializer)
{
	DefaultFOV = FLEXI_CAMERA_DEFAULT_FOV;
	ViewPitchMin = FLEXI_CAMERA_DEFAULT_PITCH_MIN;
	ViewPitchMax = FLEXI_CAMERA_DEFAULT_PITCH_MAX;
}
