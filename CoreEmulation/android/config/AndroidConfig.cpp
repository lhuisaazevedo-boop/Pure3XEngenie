#include "AndroidConfig.h"

#include <iostream>

namespace Pure3X
{

bool AndroidConfig::ready = false;

int AndroidConfig::screenWidth = 1280;
int AndroidConfig::screenHeight = 720;

std::string AndroidConfig::renderer = "Android Renderer";
std::string AndroidConfig::graphicsAPI = "Vulkan";

bool AndroidConfig::Initialize()
{
    std::cout << "[AndroidConfig] Inicializando...\n";

    ready = true;

    std::cout << "[AndroidConfig] Resolucao: "
              << screenWidth << "x" << screenHeight << "\n";

    std::cout << "[AndroidConfig] Renderer: "
              << renderer << "\n";

    std::cout << "[AndroidConfig] API Grafica: "
              << graphicsAPI << "\n";

    return true;
}

void AndroidConfig::Shutdown()
{
    std::cout << "[AndroidConfig] Encerrando...\n";
    ready = false;
}

bool AndroidConfig::IsReady()
{
    return ready;
}

int AndroidConfig::GetScreenWidth()
{
    return screenWidth;
}

int AndroidConfig::GetScreenHeight()
{
    return screenHeight;
}

std::string AndroidConfig::GetRenderer()
{
    return renderer;
}

std::string AndroidConfig::GetGraphicsAPI()
{
    return graphicsAPI;
}

} // namespace Pure3X
