#include "changelog.h"

#include <iostream>

namespace Pure3X
{

void ShowChangelog()
{
    std::cout << "\n";
    std::cout << "=============================================\n";
    std::cout << "        Pure3XEngenie Changelog\n";
    std::cout << "=============================================\n\n";

    std::cout << "[v0.2.1 Alpha]\n";
    std::cout << " - Novo Boot Panel modular.\n";
    std::cout << " - Sistema de Boot reorganizado.\n";
    std::cout << " - Backend Vulkan iniciado.\n";
    std::cout << " - Estrutura Graphics/Vulkan criada.\n";
    std::cout << " - Android ARM64 nativo.\n";
    std::cout << " - Melhorias no CMake.\n\n";

    std::cout << "[v0.2.2 Alpha - Planejado]\n";
    std::cout << " - Primeiro cubo 3D via Vulkan.\n";
    std::cout << " - Swapchain completa.\n";
    std::cout << " - Pipeline gráfico inicial.\n\n";

    std::cout << "[v0.2.3 Alpha - Planejado]\n";
    std::cout << " - Renderizador RSX inicial.\n";
    std::cout << " - Integração Cell + RSX.\n";
    std::cout << " - Melhorias de memória.\n\n";

    std::cout << "[v0.2.4 Alpha - Planejado]\n";
    std::cout << " - PPU/SPU mais completos.\n";
    std::cout << " - Sistema XMB expandido.\n";
    std::cout << " - Otimizações ARM64.\n\n";

    std::cout << "[v0.2.5 Alpha - Planejado]\n";
    std::cout << " - Base da Engine estabilizada.\n";
    std::cout << " - Melhorias gerais de desempenho.\n";
    std::cout << " - Preparação para novas funcionalidades.\n";

    std::cout << "\n=============================================\n";
}

} // namespace Pure3X
