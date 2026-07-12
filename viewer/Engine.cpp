#include "Engine.h"

#include <iostream>

bool Engine::Initialize() {
    std::cout << "[Engine] Inicializada." << std::endl;
    return true;
}

void Engine::Update() {
    std::cout << "[Engine] Atualizando." << std::endl;

    // Futuramente:
    // Timer.Update();
    // Scene.Update();
}

void Engine::Render() {
    std::cout << "[Engine] Renderizando." << std::endl;

    // Futuramente:
    // RendererGL.BeginFrame();
    // Scene.Render();
    // RendererGL.EndFrame();
}

void Engine::Shutdown() {
    std::cout << "[Engine] Encerrada." << std::endl;
}
