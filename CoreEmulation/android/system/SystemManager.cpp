#include "SystemManager.h"

#include <iostream>

namespace Pure3X
{

bool SystemManager::ready = false;

std::string SystemManager::platform = "Android";
std::string SystemManager::architecture = "ARM64";
std::string SystemManager::abi = "arm64-v8a";

bool SystemManager::Initialize()
{
    std::cout << "[SystemManager] Inicializando...\n";

    ready = true;

    std::cout << "[SystemManager] Plataforma    : " << platform << "\n";
    std::cout << "[SystemManager] Arquitetura : " << architecture << "\n";
    std::cout << "[SystemManager] ABI         : " << abi << "\n";

    return true;
}

void SystemManager::Shutdown()
{
    std::cout << "[SystemManager] Encerrando...\n";
    ready = false;
}

bool SystemManager::IsReady()
{
    return ready;
}

std::string SystemManager::GetPlatform()
{
    return platform;
}

std::string SystemManager::GetArchitecture()
{
    return architecture;
}

std::string SystemManager::GetABI()
{
    return abi;
}

} // namespace Pure3X
