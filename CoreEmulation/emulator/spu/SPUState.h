#ifndef PURE3X_SPU_STATE_H
#define PURE3X_SPU_STATE_H

#include <array>
#include <cstdint>

namespace Pure3X {

class SPUState {
public:
    SPUState();

    void Reset();

    std::array<uint32_t, 128> GPR;

    uint32_t PC;
    uint32_t Status;
};

} // namespace Pure3X

#endif
