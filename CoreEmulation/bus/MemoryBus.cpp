#include "MemoryBus.h"

#include <iostream>

namespace Pure3X {

MemoryBus::MemoryBus()
    : m_initialized(false)
{
}

bool MemoryBus::Initialize()
{
    std::cout << "[Bus] Inicializando Memory Bus..." << std::endl;
    m_initialized = true;
    return true;
}

void MemoryBus::Shutdown()
{
    std::cout << "[Bus] Encerrando Memory Bus..." << std::endl;
    m_initialized = false;
}

uint8_t MemoryBus::Read8(uint64_t address)
{
    (void)address;
    return 0;
}

void MemoryBus::Write8(uint64_t address, uint8_t value)
{
    (void)address;
    (void)value;
}

} // namespace Pure3X
