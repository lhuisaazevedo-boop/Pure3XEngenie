#include "BootFirmware.h"

#include "../firmware/FirmwareManager.h"

#include <iostream>

namespace Pure3X
{

void BootFirmware::Initialize()
{
    std::cout << "[BOOT] Inicializando Firmware..." << std::endl;

    FirmwareManager::ShowInfo();

    std::cout << "[OK] Firmware inicializado." << std::endl;
}

} // namespace Pure3X
