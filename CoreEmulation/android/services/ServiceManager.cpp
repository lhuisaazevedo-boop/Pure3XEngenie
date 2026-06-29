#include "ServiceManager.h"

#include <iostream>

namespace Pure3X
{

bool ServiceManager::ready = false;

bool ServiceManager::Initialize()
{
    std::cout << "[ServiceManager] Inicializando...\n";

    ready = true;

    std::cout << "[ServiceManager] Sistema pronto.\n";

    return true;
}

void ServiceManager::Shutdown()
{
    std::cout << "[ServiceManager] Encerrando...\n";

    ready = false;
}

bool ServiceManager::IsReady()
{
    return ready;
}

void ServiceManager::StartService(const std::string& serviceName)
{
    if (!ready)
        return;

    std::cout << "[ServiceManager] Iniciando: "
              << serviceName << "\n";
}

void ServiceManager::StopService(const std::string& serviceName)
{
    if (!ready)
        return;

    std::cout << "[ServiceManager] Encerrando: "
              << serviceName << "\n";
}

} // namespace Pure3X
