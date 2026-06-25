#include "MemoryMap.h"

#include <iostream>

namespace Pure3X {

MemoryMap::MemoryMap()
{
}

bool MemoryMap::Initialize()
{
    std::cout << "[MemoryMap] Inicializando..." << std::endl;

    m_memoryMap.clear();

    return true;
}

void MemoryMap::Shutdown()
{
    std::cout << "[MemoryMap] Encerrando..." << std::endl;

    m_memoryMap.clear();
}

bool MemoryMap::MapMemory(uint64_t ppeAddress, uint64_t hostAddress)
{
    m_memoryMap[ppeAddress] = hostAddress;

    std::cout << "[MemoryMap] PPE 0x"
              << std::hex << ppeAddress
              << " -> ARM64 0x"
              << hostAddress
              << std::dec << std::endl;

    return true;
}

bool MemoryMap::UnmapMemory(uint64_t ppeAddress)
{
    return m_memoryMap.erase(ppeAddress) > 0;
}

bool MemoryMap::IsMapped(uint64_t ppeAddress) const
{
    return m_memoryMap.find(ppeAddress) != m_memoryMap.end();
}

uint64_t MemoryMap::GetHostAddress(uint64_t ppeAddress) const
{
    auto it = m_memoryMap.find(ppeAddress);

    if (it != m_memoryMap.end())
        return it->second;

    return 0;
}

void MemoryMap::Clear()
{
    m_memoryMap.clear();

    std::cout << "[MemoryMap] Memória limpa." << std::endl;
}

} // namespace Pure3X
