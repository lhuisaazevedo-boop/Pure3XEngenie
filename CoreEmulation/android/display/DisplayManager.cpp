#include "DisplayManager.h"

#include <iostream>

namespace Pure3X
{

int DisplayManager::width = 1280;
int DisplayManager::height = 720;

bool DisplayManager::Initialize()
{
    std::cout << "[Display] Inicializando...\n";

    // Resolução padrão para Android
    width = 1280;
    height = 720;

    std::cout << "[Display] Resolução: "
              << width
              << "x"
              << height
              << "\n";

    return true;
}

void DisplayManager::Shutdown()
{
    std::cout << "[Display] Encerrando...\n";
}

int DisplayManager::GetWidth()
{
    return width;
}

int DisplayManager::GetHeight()
{
    return height;
}

} // namespace Pure3X
