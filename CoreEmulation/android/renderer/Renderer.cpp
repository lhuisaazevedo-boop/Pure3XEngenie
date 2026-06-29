#include <iostream>

#include "Renderer.h"
#include "../../graphics/CubeRenderer.h"

namespace Pure3X
{

void Renderer::ShowInfo()
{
    std::cout << "\n========== Renderer ==========\n";
    std::cout << "Status   : Ready\n";
    std::cout << "Backend  : Preparing\n";
    std::cout << "Graphics : Android Renderer\n";
    std::cout << "Vulkan   : Future Support\n";
    std::cout << "OpenGL   : Future Support\n";
    std::cout << "Frame    : Ready\n";
    std::cout << "==============================\n";

    CubeRenderer::Initialize();
    CubeRenderer::Render3D();
    CubeRenderer::Shutdown();
}

} // namespace Pure3X
