#include "ConfigManager.h"
#include <iostream>

namespace Pure3X {

void ConfigManager::Load()
{
    std::cout << "[CONFIG] Configuracoes carregadas.\n";
}

void ConfigManager::Save()
{
    std::cout << "[CONFIG] Configuracoes salvas.\n";
}

void ConfigManager::Show()
{
    std::cout << "\n========== CONFIG ==========\n";
    std::cout << "Debug     : ON\n";
    std::cout << "Logger    : INFO\n";
    std::cout << "Network   : ENABLED\n";
    std::cout << "============================\n";
}

}
