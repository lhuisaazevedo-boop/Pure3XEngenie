#include "PPUInterpreter.h"

#include <iostream>

namespace Pure3X {

PPUInterpreter::PPUInterpreter()
{
}

bool PPUInterpreter::Initialize()
{
    std::cout << "[PPU] Inicializando PPU Interpreter..." << std::endl;
    return true;
}

void PPUInterpreter::Reset()
{
    std::cout << "[PPU] Resetando estado do PPU..." << std::endl;
}

void PPUInterpreter::Execute()
{
    std::cout << "[PPU] Executando instruções PowerPC..." << std::endl;

    // Futuramente:
    // - Decodificar instruções PPC64.
    // - Executar instruções do PPE.
    // - Integrar com o Memory Manager.
    // - Integrar com o JIT Compiler.
    // - Executar Syscalls.
}

void PPUInterpreter::Shutdown()
{
    std::cout << "[PPU] Encerrando PPU Interpreter..." << std::endl;
}

} // namespace Pure3X
