// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "ModuleManager.h"

class FOpenMeshModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;


private:
};

#define OPENMESH_UNREALENGINE