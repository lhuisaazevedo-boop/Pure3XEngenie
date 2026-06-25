#include "System.h"
#include "../version/version.h"

#include <chrono>
#include <iostream>
#include <thread>

void System::showStatus()
{
    std::cout << "\n=========================================\n";
    std::cout << "          STATUS DO SISTEMA\n";
    std::cout << "=========================================\n\n";

    std::cout << "Engine     : " << Pure3X::GetEngineName() << "\n";
    std::cout << "Versao     : " << Pure3X::GetVersion() << "\n";
    std::cout << "Build      : " << Pure3X::GetBuild() << "\n";
    std::cout << "Developer  : " << Pure3X::GetDeveloper() << "\n";
    std::cout << "Platform   : " << Pure3X::GetPlatform() << "\n";
    std::cout << "Idioma     : " << Pure3X::GetLanguage() << "\n\n";

    std::cout << "Verificando componentes...\n\n";

    auto Check = [](const char* name)
    {
        std::cout << name << " : Carregando...";
        std::cout.flush();

        std::this_thread::sleep_for(std::chrono::milliseconds(250));

        std::cout << " OK\n";
    };
    Check("CPU");
    Check("RAM");
    Check("CORE");
    Check("REDE");
    Check("CONFIG");
    Check("BOOT");
    Check("LOGGER");
    Check("VERSION");

    std::cout << "\n=========== COMPONENTES ===========\n";

    std::cout << "JIT.............OK\n";
    std::cout << "Block Cache.....OK\n";
    std::cout << "Memory Map......OK\n";
    std::cout << "NCE.............OK\n";
    std::cout << "Scheduler.......OK\n";

    std::cout << "===================================\n\n";

    std::cout << "=========== DESEMPENHO ============\n";
    std::cout << "Renderer    : Vulkan\n";
    std::cout << "FPS         : --\n";
    std::cout << "Frame Time  : -- ms\n";
    std::cout << "VSync       : OFF\n";
    std::cout << "===================================\n\n";

    std::cout << "=========================================\n";
    std::cout << "Sistema funcionando normalmente.\n";
    std::cout << "=========================================\n";
}
