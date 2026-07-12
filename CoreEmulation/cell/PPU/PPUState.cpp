#include "PPUState.h"

namespace Pure3X::Cell::PPU {

PPUState::PPUState() {
    Reset();
}

void PPUState::Reset() {
    pc = 0;
    lr = 0;
    ctr = 0;
    xer = 0;
    cr = 0;

    gpr.fill(0);
    fpr.fill(0.0);

    running = false;
}

} // namespace Pure3X::Cell::PPU
