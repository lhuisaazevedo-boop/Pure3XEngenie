#include "Input.h"

#include <iostream>

bool Input::Initialize() {
    std::cout << "[Input] Inicializado." << std::endl;
    return true;
}

void Input::Update() {
    // Futuramente:
    // X11 Keyboard
    // Mouse
    // Xbox Controller
    // DualShock 3
    // DualShock 4
    // DualSense
}

bool Input::IsKeyPressed(int key) {
    (void)key;
    return false;
}

void Input::Shutdown() {
    std::cout << "[Input] Encerrado." << std::endl;
}
