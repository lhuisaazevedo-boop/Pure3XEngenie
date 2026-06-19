#include "MemoryManager.h"

namespace Pure3X
{

MemoryManager::MemoryManager()
{
}

bool MemoryManager::Initialize(std::size_t size)
{
    m_memory.resize(size, 0);
    return true;
}

void MemoryManager::Shutdown()
{
    m_memory.clear();
}

uint8_t MemoryManager::Read8(uint64_t address) const
{
    if (address >= m_memory.size())
        return 0;

    return m_memory[static_cast<std::size_t>(address)];
}

void MemoryManager::Write8(uint64_t address, uint8_t value)
{
    if (address >= m_memory.size())
        return;

    m_memory[static_cast<std::size_t>(address)] = value;
}

std::size_t MemoryManager::GetSize() const
{
    return m_memory.size();
}

} // namespace Pure3X
