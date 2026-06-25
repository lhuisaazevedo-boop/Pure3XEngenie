#include <iostream>
#include "SurfaceManager.h"

namespace Pure3X
{

void SurfaceManager::Init()
{
    std::cout << "[INFO] Surface Manager Ready\n";
}

void SurfaceManager::ShowStatus()
{
    std::cout << "\n========== Surface Manager ==========\n";
    std::cout << "Status : Ready\n";
    std::cout << "Surface: Android Native Window\n";
    std::cout << "=====================================\n";
}

}
