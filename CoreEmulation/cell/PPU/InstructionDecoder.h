#pragma once

#include <cstdint>

namespace Pure3X::Cell::PPU {

class InstructionDecoder {
public:
    InstructionDecoder();

    bool Initialize();
    void Shutdown();

    uint32_t Decode(uint32_t instruction);

private:
    bool mInitialized = false;
};

} // namespace Pure3X::Cell::PPU
