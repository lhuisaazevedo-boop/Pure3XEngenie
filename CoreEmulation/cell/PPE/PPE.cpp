#include "PPE.h"

#include <iostream>

namespace Pure3X
{

bool PPE::ready = false;

bool PPE::Initialize()
{
    std::cout << "[PPE] Inicializando Power Processing Element...\n";

    ready = true;

    std::cout << "[PPE] CPU principal pronta.\n";

    return true;
}

void PPE::Shutdown()
{
    std::cout << "[PPE] Encerrando...\n";

    ready = false;
}

bool PPE::IsReady()
{
    return ready;
}

std::string PPE::GetName()
{
    return "Cell PPE";
}

int PPE::GetThreadCount()
{
    return 2;
}

} // namespace Pure3X
