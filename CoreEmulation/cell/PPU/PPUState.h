#pragma once

#include <cstdint>
#include <array>

namespace Pure3X::Cell::PPU {

class PPUState {
public:
    PPUState();

    void Reset();

    uint64_t pc;     // Program Counter
    uint64_t lr;     // Link Register
    uint64_t ctr;    // Count Register
    uint64_t xer;    // Fixed-Point Exception Register
    uint32_t cr;     // Condition Register

    std::array<uint64_t, 32> gpr; // General Purpose Registers
    std::array<double, 32> fpr;   // Floating Point Registers

    bool running;
};

} // namespace Pure3X::Cell::PPU
