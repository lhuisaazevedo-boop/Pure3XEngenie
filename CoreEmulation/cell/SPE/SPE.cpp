#include "SPE.h"

#include <iostream>

namespace Pure3X
{

bool SPE::ready = false;
int SPE::count = 7;

bool SPE::Initialize()
{
    std::cout << "[SPE] Inicializando Synergistic Processing Elements...\n";

    ready = true;

    std::cout << "[SPE] " << count << " SPEs prontas.\n";

    return true;
}

void SPE::Shutdown()
{
    std::cout << "[SPE] Encerrando...\n";

    ready = false;
}

bool SPE::IsReady()
{
    return ready;
}

int SPE::GetCount()
{
    return count;
}

std::string SPE::GetName()
{
    return "Cell SPE";
}

} // namespace Pure3X
