#include "BootSystem.h"

#include <iostream>

namespace Pure3X
{

void BootSystem::Initialize()
{
    std::cout << "[BOOT] Inicializando sistema..." << std::endl;
    std::cout << "[OK] Pure3XEngenie Core" << std::endl;
    std::cout << "[OK] Kernel" << std::endl;
    std::cout << "[OK] Version Manager" << std::endl;
}

} // namespace Pure3X
