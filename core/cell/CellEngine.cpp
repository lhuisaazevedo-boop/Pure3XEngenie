#include "CellEngine.h"
#include <iostream>

namespace Pure3X {

void CellEngine::ShowInfo()
{
    std::cout << "\n===== CELL ENGINE =====\n";
    std::cout << "CPU      : Cell Broadband Engine\n";
    std::cout << "PPE      : Ready\n";
    std::cout << "SPU      : Future Module\n";
    std::cout << "Threads  : 8\n";
    std::cout << "Status   : Ready\n";
    std::cout << "=======================\n";
}

}
