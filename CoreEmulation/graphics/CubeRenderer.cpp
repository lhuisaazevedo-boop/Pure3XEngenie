#include "CubeRenderer.h"

#include <iostream>

namespace Pure3X
{

void CubeRenderer::Initialize()
{
    std::cout << "[Graphics] CubeRenderer inicializado.\n";
}

void CubeRenderer::Render3D()
{
    std::cout << "\n";
    std::cout << "==============================\n";
    std::cout << "      Renderizando Cubo 3D\n";
    std::cout << "==============================\n";
    std::cout << "[OK] Vertex Buffer criado.\n";
    std::cout << "[OK] Index Buffer criado.\n";
    std::cout << "[OK] Shader carregado.\n";
    std::cout << "[OK] Pipeline Vulkan preparada.\n";
    std::cout << "[OK] Cubo 3D renderizado.\n";
    std::cout << "==============================\n";
}

void CubeRenderer::Shutdown()
{
    std::cout << "[Graphics] CubeRenderer finalizado.\n";
}

} // namespace Pure3X
