#pragma once

#include "GameModule.h"
#include <vector>
#include <string>

namespace Pure3XEngenie
{

class ModuleManager
{
public:
    ModuleManager();

    void RegisterModule(const std::string& name);
    void LoadModules();
    void UnloadModules();
    void ListModules() const;

private:
    std::vector<GameModule> m_Modules;
};

} // namespace Pure3XEngenie
