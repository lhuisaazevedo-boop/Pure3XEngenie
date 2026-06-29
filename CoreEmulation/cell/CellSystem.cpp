#include "CellSystem.h"

#include "PPE/PPE.h"
#include "SPE/SPE.h"
#include "Memory/CellMemory.h"
#include "DMA/DMAManager.h"
#include "Scheduler/CellScheduler.h"

#include <iostream>

namespace Pure3X
{

bool CellSystem::ready = false;

bool CellSystem::Initialize()
{
    std::cout << "[Cell] Inicializando arquitetura Cell...\n";

    CellMemory::Initialize();
    DMAManager::Initialize();
    PPE::Initialize();
    SPE::Initialize();
    CellScheduler::Initialize();

    ready = true;

    std::cout << "[Cell] PPE Online\n";
    std::cout << "[Cell] 7 SPEs Online\n";
    std::cout << "[Cell] Arquitetura pronta.\n";

    return true;
}

void CellSystem::Shutdown()
{
    CellScheduler::Shutdown();
    SPE::Shutdown();
    PPE::Shutdown();
    DMAManager::Shutdown();
    CellMemory::Shutdown();

    ready = false;

    std::cout << "[Cell] Arquitetura encerrada.\n";
}

bool CellSystem::IsReady()
{
    return ready;
}

} // namespace Pure3X
