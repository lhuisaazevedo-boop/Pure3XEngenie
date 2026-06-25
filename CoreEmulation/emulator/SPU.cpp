#include "SPU.h"

#include <iostream>

namespace Pure3X
{

SPU::SPU()
    : m_cycleCount(0),
      m_initialized(false)
{
}

bool SPU::Initialize()
{
    m_initialized = true;
    std::cout << "[SPU] Inicializada\n";
    return true;
}

void SPU::Reset()
{
    m_cycleCount = 0;
    std::cout << "[SPU] Reset\n";
}

void SPU::Execute()
{
    if (!m_initialized)
        return;

    ++m_cycleCount;
}

uint64_t SPU::GetCycleCount() const
{
    return m_cycleCount;
}

} // namespace Pure3X
