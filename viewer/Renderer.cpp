#include "Renderer.h"
#include <iostream>

bool Renderer::Initialize() {
    std::cout << "[Renderer] Inicializado." << std::endl;
    return true;
}

void Renderer::Render() {
    std::cout << "[Renderer] Renderizando frame..." << std::endl;
}

void Renderer::Shutdown() {
    std::cout << "[Renderer] Encerrado." << std::endl;
}
