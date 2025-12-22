// Copyright (c) 2025 Egor Ermakov.


#include "Examples/TopDownCameraModeTrigger.h"

#include "Examples/TopDownCameraMode.h"

ATopDownCameraModeTrigger::ATopDownCameraModeTrigger()
{
	CameraModeClass = UTopDownCameraMode::StaticClass();
}

UBoxComponent* ATopDownCameraModeTrigger::GetTriggerVolume() const
{
	if (TriggerVolume)
	{
		return TriggerVolume;
	}
	return nullptr;
}
