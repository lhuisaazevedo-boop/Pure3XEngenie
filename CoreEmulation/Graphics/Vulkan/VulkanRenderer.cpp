#include "VulkanRenderer.h"

#include <iostream>

namespace Pure3X {

bool VulkanRenderer::Initialize()
{
    std::cout << "[Vulkan] Renderer inicializado." << std::endl;
    return true;
}

void VulkanRenderer::Shutdown()
{
    std::cout << "[Vulkan] Renderer finalizado." << std::endl;
}

void VulkanRenderer::BeginFrame()
{
    std::cout << "[Vulkan] Begin Frame" << std::endl;
}

void VulkanRenderer::DrawFrame()
{
    std::cout << "[Vulkan] Renderizando Frame..." << std::endl;
}

void VulkanRenderer::EndFrame()
{
    std::cout << "[Vulkan] End Frame" << std::endl;
}

} // namespace Pure3X
