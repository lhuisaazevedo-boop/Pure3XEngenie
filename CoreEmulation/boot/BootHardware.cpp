#include "BootHardware.h"
#include "../hardware/HardwareInfo.h"

#include <iostream>

namespace Pure3X
{

void BootHardware::Initialize()
{
    std::cout << "[BOOT] Inicializando Hardware..." << std::endl;

    HardwareInfo::Show();

    std::cout << "[OK] Hardware inicializado." << std::endl;
}

} // namespace Pure3X
