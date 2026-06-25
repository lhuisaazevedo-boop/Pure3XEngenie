#include "Renderer.h"

#include <iostream>

namespace Pure3X {

Renderer::Renderer()
    : initialized(false),
      frameCount(0)
{
}

bool Renderer::Initialize()
{
    std::cout << "[RSX] Inicializando Renderer..." << std::endl;

    initialized = true;
    frameCount = 0;

    return true;
}

void Renderer::Shutdown()
{
    std::cout << "[RSX] Encerrando Renderer..." << std::endl;

    initialized = false;
}

void Renderer::Reset()
{
    std::cout << "[RSX] Resetando Renderer..." << std::endl;

    frameCount = 0;
}

void Renderer::RenderFrame()
{
    if (!initialized)
    {
        return;
    }

    ++frameCount;

    std::cout << "[RSX] Renderizando Frame #" << frameCount << std::endl;
}

} // namespace Pure3X
