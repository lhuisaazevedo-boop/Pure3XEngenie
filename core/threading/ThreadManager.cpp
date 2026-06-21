#include "ThreadManager.h"

#include <iostream>

namespace Pure3X {

ThreadManager::ThreadManager()
    : m_initialized(false)
{
}

bool ThreadManager::Initialize()
{
    std::cout << "[Thread] Inicializando Thread Manager..." << std::endl;
    m_initialized = true;
    return true;
}

void ThreadManager::Update()
{
    if (!m_initialized)
        return;

    // Futuramente:
    // - Gerenciar threads PPU.
    // - Gerenciar threads SPU.
    // - Sincronização.
    // - Escalonamento.
}

void ThreadManager::Shutdown()
{
    std::cout << "[Thread] Encerrando Thread Manager..." << std::endl;
    m_initialized = false;
}

} // namespace Pure3X
