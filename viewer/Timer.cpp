#include "Timer.h"

#include <iostream>

bool Timer::Initialize() {
    std::cout << "[Timer] Inicializado." << std::endl;
    return true;
}

void Timer::Update() {
    deltaTime = 1.0f / 60.0f;
}

float Timer::GetDeltaTime() const {
    return deltaTime;
}

void Timer::Shutdown() {
    std::cout << "[Timer] Encerrado." << std::endl;
}
