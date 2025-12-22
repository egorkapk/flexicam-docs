// Copyright (c) 2025 Egor Ermakov.

#pragma once

#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "FlexiPlayerCameraManager.generated.h"

#define FLEXI_CAMERA_DEFAULT_FOV			(80.0f)
#define FLEXI_CAMERA_DEFAULT_PITCH_MIN	(-89.0f)
#define FLEXI_CAMERA_DEFAULT_PITCH_MAX	(89.0f)

/**
 * The base player camera manager class used by FlexiCam plugin.
 */
UCLASS()
class FLEXICAM_API AFlexiPlayerCameraManager : public APlayerCameraManager
{
	GENERATED_BODY()
	
public:
	AFlexiPlayerCameraManager(const FObjectInitializer& ObjectInitializer);
};
