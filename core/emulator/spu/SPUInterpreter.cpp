#include "SPUInterpreter.h"

#include <iostream>

namespace Pure3X {

SPUInterpreter::SPUInterpreter()
{
}

bool SPUInterpreter::Initialize()
{
    std::cout << "[SPU] Inicializando SPU Interpreter..." << std::endl;
    state.Reset();
    return true;
}

void SPUInterpreter::Reset()
{
    std::cout << "[SPU] Resetando SPU..." << std::endl;
    state.Reset();
}

void SPUInterpreter::Execute(uint32_t instruction)
{
    decoder.Decode(instruction);
}

void SPUInterpreter::Shutdown()
{
    std::cout << "[SPU] Encerrando SPU Interpreter..." << std::endl;
}

} // namespace Pure3X
