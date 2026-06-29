#include "BootGraphics.h"

#include "../rsx/RSX.h"
#include "../android/renderer/Renderer.h"

#include <iostream>

namespace Pure3X
{

void BootGraphics::Initialize()
{
    std::cout << "[BOOT] Inicializando Sistema Grafico..." << std::endl;

    RSX::ShowInfo();
    Renderer::ShowInfo();

    std::cout << "[OK] RSX inicializado." << std::endl;
    std::cout << "[OK] Renderer inicializado." << std::endl;

    // Vulkan será integrado na próxima etapa
    std::cout << "[INFO] Vulkan Backend: Em desenvolvimento." << std::endl;
}

} // namespace Pure3X
