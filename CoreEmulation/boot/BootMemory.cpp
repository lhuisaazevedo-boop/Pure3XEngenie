#include "BootMemory.h"

#include "../memory/MemoryManager.h"

#include <iostream>

namespace Pure3X
{

void BootMemory::Initialize()
{
    std::cout << "[BOOT] Inicializando Memory Manager..." << std::endl;

    MemoryManager::ShowInfo();

    std::cout << "[OK] Memory Manager inicializado." << std::endl;
}

} // namespace Pure3X
