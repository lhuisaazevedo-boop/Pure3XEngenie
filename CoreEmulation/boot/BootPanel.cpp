#include "BootPanel.h"

#include "BootSystem.h"
#include "BootHardware.h"
#include "BootGraphics.h"
#include "BootMemory.h"
#include "BootFirmware.h"
#include "BootAndroid.h"
#include "BootModules.h"

#include <iostream>

namespace Pure3X
{

void BootPanel::Show()
{
    std::cout << "\n";
    std::cout << "=====================================================\n";
    std::cout << "             Pure3XEngenie v0.2.1 Alpha\n";
    std::cout << "=====================================================\n";
    std::cout << "      Experimental PlayStation 3 Engine\n";
    std::cout << "=====================================================\n\n";

    BootSystem::Initialize();

    BootHardware::Initialize();

    BootGraphics::Initialize();

    BootMemory::Initialize();

    BootFirmware::Initialize();

    BootAndroid::Initialize();

    BootModules::Initialize();

    std::cout << "\n";
    std::cout << "=====================================================\n";
    std::cout << " Boot concluido com sucesso.\n";
    std::cout << " Pure3XEngenie pronto para inicializar.\n";
    std::cout << "=====================================================\n";
}

} // namespace Pure3X
