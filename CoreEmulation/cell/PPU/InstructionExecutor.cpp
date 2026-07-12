#include "InstructionExecutor.h"

namespace Pure3X::Cell::PPU {

InstructionExecutor::InstructionExecutor() = default;

bool InstructionExecutor::Initialize() {
    mInitialized = true;
    return true;
}

void InstructionExecutor::Shutdown() {
    mInitialized = false;
}

bool InstructionExecutor::Execute(uint32_t instruction) {
    (void)instruction; // Evita aviso de parâmetro não utilizado
    return true;
}

} // namespace Pure3X::Cell::PPU
