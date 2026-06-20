#include "InstructionScheduler.h"

#include <iostream>

namespace Pure3X {

InstructionScheduler::InstructionScheduler()
{
}

bool InstructionScheduler::Initialize()
{
    std::cout << "[Scheduler] Inicializando escalonador..." << std::endl;

    return m_fifo.Initialize();
}

void InstructionScheduler::Shutdown()
{
    m_fifo.Shutdown();

    std::cout << "[Scheduler] Escalonador encerrado." << std::endl;
}

void InstructionScheduler::Schedule(uint64_t instruction)
{
    m_fifo.Push(instruction);
}

void InstructionScheduler::Execute()
{
    uint64_t instruction;

    while (m_fifo.Pop(instruction))
    {
        std::cout << "[Scheduler] Executando instrução 0x"
                  << std::hex << instruction
                  << std::dec << std::endl;
    }
}

} // namespace Pure3X
