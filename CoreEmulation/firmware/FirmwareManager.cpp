#include "FirmwareManager.h"
#include <iostream>

namespace Pure3X
{

void FirmwareManager::ShowInfo()
{
    std::cout << "\n==== FIRMWARE MANAGER ====\n";
    std::cout << "Firmware  : PS3 PUP Loader\n";
    std::cout << "Version   : Future Detection\n";
    std::cout << "Installer : Planned\n";
    std::cout << "Verifier  : Planned\n";
    std::cout << "Decryptor : Planned\n";
    std::cout << "Status    : Ready\n";
    std::cout << "==========================\n";
}

}
