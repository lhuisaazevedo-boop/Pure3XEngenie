#include "SPUState.h"

namespace Pure3X {

SPUState::SPUState()
{
    Reset();
}

void SPUState::Reset()
{
    GPR.fill(0);

    PC = 0;
    Status = 0;
}

} // namespace Pure3X
