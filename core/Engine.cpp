#include "Engine.h"
#include "system/System.h"
#include "version/version.h"
#include "hardware/HardwareInfo.h"
#include "cell/CellEngine.h"
#include "rsx/RSX.h"
#include "memory/MemoryManager.h"
#include "ppu/PPUInterpreter.h"
#include "spu/SPUManager.h"
#include "xmb/XMBManager.h"
#include "firmware/FirmwareManager.h"
#include "android/AndroidBridge.h"
#include "android/jni/JNIBridge.h"
#include "android/apk/APKLoader.h"

#include <cstdlib>
#include <iostream>
#include <string>

namespace Pure3X {

void Engine::run()
{
    int option;

    while (true)
    {
        std::cout << "\n=================================\n";
        std::cout << "      Pure3XEngenie OS\n";
        std::cout << "=================================\n";
        std::cout << " 1  - Iniciar Engine\n";
        std::cout << " 2  - Status do Sistema\n";
        std::cout << " 3  - Configuracoes\n";
        std::cout << " 4  - Rede\n";
        std::cout << " 5  - Hardware\n";
        std::cout << " 6  - Cell Engine\n";
        std::cout << " 7  - RSX GPU\n";
        std::cout << " 8  - Memory Manager\n";
        std::cout << " 9  - PPU Interpreter\n";
        std::cout << "10  - SPU Manager\n";
        std::cout << "11  - XMB Manager\n";
        std::cout << "12  - Firmware Manager\n";
        std::cout << "13  - Android NDK Bridge\n";
        std::cout << "14  - JNI Bridge\n";
        std::cout << "15  - APK Loader\n";
        std::cout << "16  - Sair\n";
        std::cout << "=================================\n";
        std::cout << "Escolha uma opcao: ";

        if (!(std::cin >> option))
        {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            continue;
        }

        switch (option)
        {
            case 1:

                std::cout << "\n[OK] Iniciando Engine...\n";
                std::cout << "Pure3XEngenie ativa!\n";
                break;

            case 2:

                System::showStatus();
                break;

            case 5:

                HardwareInfo::Show();
                break;

            case 6:

                CellEngine::ShowInfo();
                break;

            case 7:

                RSX::ShowInfo();
                break;

            case 8:

                MemoryManager::ShowInfo();
                break;

            case 9:

                PPUInterpreter::ShowInfo();
                break;

            case 10:

                SPUManager::ShowInfo();
                break;
            case 11:

                XMBManager::ShowInfo();
                break;

            case 12:

                FirmwareManager::ShowInfo();
                break;

            case 13:

                AndroidBridge::ShowInfo();
                break;

            case 14:

                JNIBridge::ShowInfo();
                break;

            case 15:

                APKLoader::ShowInfo();
                break;

            case 16:

                std::cout << "\n[SAINDO] Encerrando sistema...\n";
                return;

            default:

                std::cout << "\n[ERRO] Opcao invalida!\n";
                break;
        }

        if (option >= 5 && option <= 15)
        {
            std::cout << "\nPressione Enter para continuar...";
            std::cin.ignore(1000, '\n');
            std::cin.get();
        }
    }
}

} // namespace Pure3X
