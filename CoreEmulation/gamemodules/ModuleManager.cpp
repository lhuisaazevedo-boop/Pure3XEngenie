#include "ModuleManager.h"

#include <iostream>

namespace Pure3XEngenie
{

ModuleManager::ModuleManager()
{
}

void ModuleManager::RegisterModule(const std::string& name)
{
    m_Modules.emplace_back(name);
}

void ModuleManager::LoadModules()
{
    std::cout << "\n[ModuleManager] Carregando módulos...\n";

    for (auto& module : m_Modules)
        module.Load();
}

void ModuleManager::UnloadModules()
{
    std::cout << "\n[ModuleManager] Descarregando módulos...\n";

    for (auto& module : m_Modules)
        module.Unload();
}

void ModuleManager::ListModules() const
{
    std::cout << "\n=== Game Modules ===\n";

    for (const auto& module : m_Modules)
        std::cout << "- " << module.GetName() << '\n';

    std::cout << "====================\n";
}

} // namespace Pure3XEngenie
