#include "DebugManager.h"

#include <iostream>

namespace Pure3X
{

bool DebugManager::ready = false;

bool DebugManager::Initialize()
{
    std::cout << "[DebugManager] Inicializando...\n";

    ready = true;

    std::cout << "[DebugManager] Sistema pronto.\n";

    return true;
}

void DebugManager::Shutdown()
{
    std::cout << "[DebugManager] Encerrando...\n";

    ready = false;
}

bool DebugManager::IsReady()
{
    return ready;
}

void DebugManager::Log(const std::string& message)
{
    if (!ready)
        return;

    std::cout << "[INFO] " << message << '\n';
}

void DebugManager::Warning(const std::string& message)
{
    if (!ready)
        return;

    std::cout << "[WARNING] " << message << '\n';
}

void DebugManager::Error(const std::string& message)
{
    if (!ready)
        return;

    std::cerr << "[ERROR] " << message << '\n';
}

} // namespace Pure3X
