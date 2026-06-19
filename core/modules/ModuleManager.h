#pragma once

#include <memory>
#include <string>
#include <vector>

#include "Module.h"

namespace Pure3X
{

class ModuleManager
{
public:
    ModuleManager();

    void RegisterModule(std::shared_ptr<Module> module);

    bool InitializeModules();
    void ShutdownModules();

    std::shared_ptr<Module> GetModule(const std::string& name);

private:
    std::vector<std::shared_ptr<Module>> m_modules;
};

} // namespace Pure3X
