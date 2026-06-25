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

#include "android/jni/JNIBridge.h"
#include "android/apk/APKLoader.h"
#include "android/ndk/NDKManager.h"
#include "android/surface/SurfaceManager.h"
#include "android/window/Window.h"
#include "android/renderer/Renderer.h"

#include "menu/ConfigMenu.h"
#include "menu/NetworkMenu.h"
#include "menu/InputMenu.h"

#include <cstdlib>
#include <iostream>
#include <string>

namespace Pure3X
{

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
        std::cout << "13  - Input Manager\n";
        std::cout << "14  - APK Loader\n";
        std::cout << "15  - NDK Manager\n";
        std::cout << "16  - Surface Manager\n";
        std::cout << "17  - Window Manager\n";
        std::cout << "18  - Renderer\n";
        std::cout << "19  - Sair\n";

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

            case 3:

                ShowConfigMenu();
                break;

            case 4:

                ShowNetworkMenu();
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

                ShowInputMenu();
                break;

            case 14:

                APKLoader::ShowInfo();
                break;

            case 15:

                NDKManager::ShowStatus();
                break;

            case 16:

                SurfaceManager::ShowStatus();
                break;

            case 17:

                Window::ShowInfo();
                break;

            case 18:

                Renderer::ShowInfo();
                break;
            case 19:

                std::cout << "\n[SAINDO] Encerrando sistema...\n";
                return;

            default:

                std::cout << "\n[ERRO] Opcao invalida!\n";
                break;
        }

        if (option >= 3 && option <= 18)
        {
            std::cout << "\nPressione Enter para continuar...";
            std::cin.ignore(1000, '\n');
            std::cin.get();
        }
    }
}

} // namespace Pure3X
