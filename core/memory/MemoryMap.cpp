#include "MemoryMap.h"

#include <iostream>

namespace Pure3X {

MemoryMap::MemoryMap()
    : mainMemorySize(256 * 1024 * 1024)
{
}

bool MemoryMap::Initialize()
{
    std::cout << "[Memory] Inicializando Memory Map..." << std::endl;
    return true;
}

void MemoryMap::Reset()
{
    std::cout << "[Memory] Resetando memória..." << std::endl;
}

void MemoryMap::Shutdown()
{
    std::cout << "[Memory] Encerrando Memory Map..." << std::endl;
}

uint64_t MemoryMap::GetMainMemorySize() const
{
    return mainMemorySize;
}

} // namespace Pure3X
