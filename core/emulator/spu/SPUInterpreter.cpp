#include "SPUInterpreter.h"

#include <iostream>

namespace Pure3X {

SPUInterpreter::SPUInterpreter()
{
}

bool SPUInterpreter::Initialize()
{
    std::cout << "[SPU] Inicializando SPU Interpreter..." << std::endl;
    return true;
}

void SPUInterpreter::Reset()
{
    std::cout << "[SPU] Resetando estado das SPUs..." << std::endl;
}

void SPUInterpreter::Execute()
{
    std::cout << "[SPU] Executando instruções SPU..." << std::endl;

    // Futuramente:
    // - Interpretar instruções das SPUs.
    // - Gerenciar Local Store (LS).
    // - Integrar com o Memory Manager.
    // - Integrar com o Scheduler.
    // - Integrar com o JIT Compiler.
}

void SPUInterpreter::Shutdown()
{
    std::cout << "[SPU] Encerrando SPU Interpreter..." << std::endl;
}

} // namespace Pure3X
