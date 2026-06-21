#include "InputManager.h"

#include <iostream>

namespace Pure3X {

InputManager::InputManager()
    : m_initialized(false)
{
}

bool InputManager::Initialize()
{
    std::cout << "[Input] Inicializando Input Manager..." << std::endl;
    m_initialized = true;
    return true;
}

void InputManager::Update()
{
    if (!m_initialized)
        return;

    // Futuramente:
    // - DualShock 3
    // - DualShock 4
    // - DualSense
    // - Gamepads Bluetooth
    // - Teclado
    // - Mouse
    // - Touchscreen Android
}

void InputManager::Shutdown()
{
    std::cout << "[Input] Encerrando Input Manager..." << std::endl;
    m_initialized = false;
}

}
