#include <iostream>
#include "NDKManager.h"

namespace Pure3X
{

void NDKManager::Init()
{
    std::cout << "[INFO] Android NDK Ready\n";
}

void NDKManager::ShowStatus()
{
    std::cout << "\n========== Android NDK ==========\n";
    std::cout << "Status   : Ready\n";
    std::cout << "Platform : Android\n";
    std::cout << "ABI      : ARM64\n";
    std::cout << "Backend  : Android NDK r29\n";
    std::cout << "=================================\n";
}

}
