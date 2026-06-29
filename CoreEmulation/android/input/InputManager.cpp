#include "../../input/InputManager.h"

#include <iostream>

namespace Pure3X
{

bool InputManager::m_initialized = false;

bool InputManager::Initialize()
{
    std::cout << "[Input] Inicializando...\n";

    m_initialized = true;

    std::cout << "[OK] Input Manager inicializado.\n";
    return true;
}

void InputManager::Update()
{
    if (!m_initialized)
        return;

    // Entrada Android será implementada futuramente.
}

void InputManager::Shutdown()
{
    if (!m_initialized)
        return;

    std::cout << "[Input] Encerrando...\n";

    m_initialized = false;

    std::cout << "[OK] Input Manager finalizado.\n";
}

} // namespace Pure3X
