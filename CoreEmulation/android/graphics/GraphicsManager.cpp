#include "GraphicsManager.h"

#include <iostream>

namespace Pure3X
{

bool GraphicsManager::ready = false;

std::string GraphicsManager::backend = "Vulkan";
std::string GraphicsManager::renderer = "Pure3X Renderer";
std::string GraphicsManager::version = "1.3";

bool GraphicsManager::Initialize()
{
    std::cout << "[GraphicsManager] Inicializando...\n";

    ready = true;

    std::cout << "[GraphicsManager] Backend  : " << backend << "\n";
    std::cout << "[GraphicsManager] Renderer : " << renderer << "\n";
    std::cout << "[GraphicsManager] Vulkan   : " << version << "\n";

    return true;
}

void GraphicsManager::Shutdown()
{
    std::cout << "[GraphicsManager] Encerrando...\n";

    ready = false;
}

bool GraphicsManager::IsReady()
{
    return ready;
}

std::string GraphicsManager::GetBackend()
{
    return backend;
}

std::string GraphicsManager::GetRenderer()
{
    return renderer;
}

std::string GraphicsManager::GetVersion()
{
    return version;
}

} // namespace Pure3X
