#include "CPU.h"

#include <iostream>

namespace Pure3X {

CPU::CPU()
    : m_useJIT(false)
{
}

bool CPU::Initialize()
{
    std::cout << "[CPU] Inicializando CPU..." << std::endl;

    m_jit.Initialize();

    return true;
}

void CPU::Shutdown()
{
    m_jit.Shutdown();

    std::cout << "[CPU] CPU encerrada." << std::endl;
}

void CPU::EnableJIT(bool enable)
{
    m_useJIT = enable;
}

bool CPU::ExecuteInstruction(uint64_t address)
{
    if (m_useJIT)
    {
        std::cout << "[CPU] Executando via JIT." << std::endl;

        return m_jit.CompileBlock(address);
    }

    std::cout << "[CPU] Executando via Interpreter." << std::endl;

    // Futuramente:
    // Decoder PowerPC
    // FXU
    // FPU
    // Branch Unit
    // Load/Store

    return true;
}

} // namespace Pure3X
