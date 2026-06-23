#include "RSX.h"
#include <iostream>

namespace Pure3X {

void RSX::Initialize()
{
    std::cout << "[RSX] GPU inicializada.\n";
}

void RSX::ShowInfo()
{
    std::cout << "\n========== RSX GPU ==========\n";
    std::cout << "Renderer  : RSX Reality Synthesizer\n";
    std::cout << "Backend   : Vulkan (Future)\n";
    std::cout << "Shaders   : Ready\n";
    std::cout << "Pipeline  : Ready\n";
    std::cout << "Status    : Online\n";
    std::cout << "=============================\n";
}

}
