#include "FPSCounter.h"

#include <iostream>

bool FPSCounter::Initialize() {
    fps = 60;

    std::cout << "[FPSCounter] Inicializado." << std::endl;

    return true;
}

void FPSCounter::Update() {
    // Futuramente calculará o FPS real.
}

int FPSCounter::GetFPS() const {
    return fps;
}

void FPSCounter::Shutdown() {
    std::cout << "[FPSCounter] Encerrado." << std::endl;
}
