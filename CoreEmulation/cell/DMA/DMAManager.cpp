#include "DMAManager.h"

#include <cstring>
#include <iostream>

namespace Pure3X
{

bool DMAManager::ready = false;

bool DMAManager::Initialize()
{
    std::cout << "[DMAManager] Inicializando...\n";

    ready = true;

    return true;
}

void DMAManager::Shutdown()
{
    std::cout << "[DMAManager] Encerrando...\n";

    ready = false;
}

bool DMAManager::IsReady()
{
    return ready;
}

bool DMAManager::Transfer(void* source, void* destination, std::size_t size)
{
    if (!ready || source == nullptr || destination == nullptr)
        return false;

    std::memcpy(destination, source, size);

    std::cout << "[DMAManager] Transferidos "
              << size
              << " bytes.\n";

    return true;
}

} // namespace Pure3X
