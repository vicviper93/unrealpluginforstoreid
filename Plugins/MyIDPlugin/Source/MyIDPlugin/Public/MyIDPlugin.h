#pragma once

#include "Modules/ModuleInterface.h"

class MYIDPLUGIN_API FMyIDPluginModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};