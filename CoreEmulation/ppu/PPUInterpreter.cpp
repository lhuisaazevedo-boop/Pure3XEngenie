#include "PPUInterpreter.h"
#include <iostream>

namespace Pure3X
{

void PPUInterpreter::ShowInfo()
{
    std::cout << "\n====== PPU INTERPRETER ======\n";
    std::cout << "Core      : PPE\n";
    std::cout << "Mode      : Interpreter\n";
    std::cout << "Threads   : 2\n";
    std::cout << "Decoder   : Future Module\n";
    std::cout << "Status    : Ready\n";
    std::cout << "=============================\n";
}

} // namespace Pure3X
