#include "PPUState.h"

namespace Pure3X {

PPUState::PPUState()
{
    Reset();
}

void PPUState::Reset()
{
    // Limpa todos os registradores gerais
    for (int i = 0; i < 32; i++)
    {
        GPR[i] = 0;
    }

    // Registradores especiais
    PC = 0;
    LR = 0;
    CTR = 0;
    CR = 0;
    XER = 0;
}

} // namespace Pure3X
