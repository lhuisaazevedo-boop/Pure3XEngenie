#include "ModuleManager.h"

namespace Pure3X
{

ModuleManager::ModuleManager()
{
}

void ModuleManager::RegisterModule(std::shared_ptr<Module> module)
{
    m_modules.push_back(module);
}

bool ModuleManager::InitializeModules()
{
    bool success = true;

    for (auto& module : m_modules)
    {
        if (!module->Initialize())
            success = false;
    }

    return success;
}

void ModuleManager::ShutdownModules()
{
    for (auto& module : m_modules)
    {
        module->Shutdown();
    }
}

std::shared_ptr<Module> ModuleManager::GetModule(const std::string& name)
{
    for (auto& module : m_modules)
    {
        if (module->GetName() == name)
            return module;
    }

    return nullptr;
}

} // namespace Pure3X
