#pragma once

#include <cstdint>

namespace Pure3X::Cell::PPU {

class InstructionExecutor {
public:
    InstructionExecutor();

    bool Initialize();
    void Shutdown();

    bool Execute(uint32_t instruction);

private:
    bool mInitialized = false;
};

} // namespace Pure3X::Cell::PPU
