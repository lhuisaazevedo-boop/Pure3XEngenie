#include "SPUManager.h"
#include <iostream>

namespace Pure3X
{

void SPUManager::ShowInfo()
{
    std::cout << "\n====== SPU MANAGER ======\n";
    std::cout << "SPU Units  : 8\n";
    std::cout << "Active     : 8\n";
    std::cout << "Reserved   : 1\n";
    std::cout << "Available  : 7\n";
    std::cout << "Scheduler  : Ready\n";
    std::cout << "DMA Engine : Ready\n";
    std::cout << "Status     : Online\n";
    std::cout << "=========================\n";
}

} // namespace Pure3X
