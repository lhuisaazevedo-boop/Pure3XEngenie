#include "NetworkManager.h"
#include <iostream>

namespace Pure3X {

void NetworkManager::Initialize()
{
    std::cout << "[NETWORK] Inicializado.\n";
}

void NetworkManager::ShowInfo()
{
    std::cout << "\n======= NETWORK =======\n";
    std::cout << "Status : Online\n";
    std::cout << "Mode   : Android\n";
    std::cout << "=======================\n";
}

}
