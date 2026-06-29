#include "CellScheduler.h"

#include <iostream>

namespace Pure3X
{

bool CellScheduler::ready = false;

bool CellScheduler::Initialize()
{
    std::cout << "[CellScheduler] Inicializando...\n";

    ready = true;

    std::cout << "[CellScheduler] PPE e SPEs sincronizados.\n";

    return true;
}

void CellScheduler::Shutdown()
{
    std::cout << "[CellScheduler] Encerrando...\n";

    ready = false;
}

bool CellScheduler::IsReady()
{
    return ready;
}

void CellScheduler::Update()
{
    if (!ready)
        return;

    // Futuramente distribuirá tarefas entre PPE e SPEs.
}

} // namespace Pure3X
