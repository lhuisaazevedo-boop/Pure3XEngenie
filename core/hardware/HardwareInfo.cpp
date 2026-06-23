#include "HardwareInfo.h"
#include <iostream>

namespace Pure3X {

void HardwareInfo::Show()
{
    std::cout << "\n======= HARDWARE =======\n";
    std::cout << "CPU     : ARM64\n";
    std::cout << "Threads : 8\n";
    std::cout << "RAM     : 8 GB\n";
    std::cout << "Storage : Android\n";
    std::cout << "========================\n";
}

}
