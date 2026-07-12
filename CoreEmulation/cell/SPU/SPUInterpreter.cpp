#include "SPUInterpreter.h"

namespace Pure3X::Cell::SPU {

SPUInterpreter::SPUInterpreter() = default;

bool SPUInterpreter::Initialize() {
    return true;
}

void SPUInterpreter::Reset() {
    // Reset temporário
}

void SPUInterpreter::Execute(uint32_t instruction) {
    decoder.Decode(instruction);
}

void SPUInterpreter::Shutdown() {
    // Encerramento temporário
}

} // namespace Pure3X::Cell::SPU
