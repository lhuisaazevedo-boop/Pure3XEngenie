#include "FrameManager.h"

#include <iostream>

namespace Pure3X
{

void FrameManager::Initialize()
{
    std::cout << "[Frame] Inicializando Frame Manager...\n";
}

void FrameManager::BeginFrame()
{
    std::cout << "[Frame] Begin Frame\n";
}

void FrameManager::EndFrame()
{
    std::cout << "[Frame] End Frame\n";
}

void FrameManager::Present()
{
    std::cout << "[Frame] Present Frame\n";
}

void FrameManager::Shutdown()
{
    std::cout << "[Frame] Finalizando Frame Manager...\n";
}

} // namespace Pure3X
