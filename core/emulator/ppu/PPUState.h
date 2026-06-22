#ifndef PURE3X_PPU_STATE_H
#define PURE3X_PPU_STATE_H

#include <cstdint>

namespace Pure3X {

class PPUState {
public:
    PPUState();

    void Reset();

    // Registradores Gerais (GPR0 - GPR31)
    uint64_t GPR[32];

    // Registradores especiais
    uint64_t PC;
    uint64_t LR;
    uint64_t CTR;
    uint32_t CR;
    uint32_t XER;
};

} // namespace Pure3X

#endif
