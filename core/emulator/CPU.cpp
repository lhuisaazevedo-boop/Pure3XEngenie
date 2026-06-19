#include "CPU.h"

#include <iostream>

namespace Pure3X
{

CPU::CPU()
    : m_pc(0),
      m_initialized(false)
{
}

bool CPU::Initialize()
{
    m_initialized = true;
    std::cout << "[CPU] Inicializado\n";
    return true;
}

void CPU::Reset()
{
    m_pc = 0;
    std::cout << "[CPU] Reset\n";
}

void CPU::ExecuteCycle()
{
    if (!m_initialized)
        return;

    ++m_pc;
}

uint64_t CPU::GetPC() const
{
    return m_pc;
}

void CPU::SetPC(uint64_t pc)
{
    m_pc = pc;
}

} // namespace Pure3X
