#include "Memory.h"

#include <iostream>

namespace Pure3X
{

Memory::Memory()
    : m_initialized(false)
{
}

bool Memory::Initialize(std::size_t size)
{
    m_memory.resize(size);
    m_initialized = true;

    std::cout << "[Memory] Inicializada: "
              << size << " bytes\n";

    return true;
}

void Memory::Reset()
{
    std::fill(m_memory.begin(), m_memory.end(), 0);
}

uint8_t Memory::Read8(uint64_t address) const
{
    if (!m_initialized || address >= m_memory.size())
        return 0;

    return m_memory[static_cast<std::size_t>(address)];
}

void Memory::Write8(uint64_t address, uint8_t value)
{
    if (!m_initialized || address >= m_memory.size())
        return;

    m_memory[static_cast<std::size_t>(address)] = value;
}

std::size_t Memory::GetSize() const
{
    return m_memory.size();
}

} // namespace Pure3X
