#include "Application.h"

#include <iostream>

bool Application::Initialize() {
    std::cout << "[Application] Inicializando..." << std::endl;

    if (!window.Initialize(1280, 720, "Pure3XViewer")) {
        std::cout << "[Application] Erro ao inicializar Window." << std::endl;
        return false;
    }

    if (!renderLoop.Initialize()) {
        std::cout << "[Application] Erro ao inicializar RenderLoop." << std::endl;
        return false;
    }

    std::cout << "[Application] Inicializada." << std::endl;

    return true;
}

void Application::Run() {
    std::cout << "[Application] Executando Viewer." << std::endl;

    bool running = true;

    while (running) {

        renderLoop.Run();

        // Futuramente:
        // running = window.ProcessEvents();
    }
}

void Application::Shutdown() {

    renderLoop.Shutdown();

    window.Shutdown();

    std::cout << "[Application] Encerrada." << std::endl;
}
