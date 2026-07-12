#include "InstructionDecoder.h"

namespace Pure3X::Cell::PPU {

InstructionDecoder::InstructionDecoder() = default;

bool InstructionDecoder::Initialize() {
    mInitialized = true;
    return true;
}

void InstructionDecoder::Shutdown() {
    mInitialized = false;
}

uint32_t InstructionDecoder::Decode(uint32_t instruction) {
    // Stub temporário
    return instruction;
}

} // namespace Pure3X::Cell::PPU
