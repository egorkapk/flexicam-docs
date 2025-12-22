// Copyright (c) 2025 Egor Ermakov.

#pragma once

#include "Modules/ModuleManager.h"

class FFlexiCamModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
