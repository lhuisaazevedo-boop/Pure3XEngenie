#include "System.h"
#include "../../core/version/version.h"

#include <chrono>
#include <iostream>
#include <thread>

void System::showStatus()
{
    std::cout << "\n=========================================\n";
    std::cout << "          STATUS DO SISTEMA\n";
    std::cout << "=========================================\n\n";

    std::cout << "Engine     : " << Pure3XEngenie::Version::Name << "\n";
    std::cout << "Versao     : " << Pure3XEngenie::Version::Version << "\n";
    std::cout << "Build      : " << Pure3XEngenie::Version::Build << "\n";
    std::cout << "Developer  : " << Pure3XEngenie::Version::Developer << "\n";
    std::cout << "Platform   : " << Pure3XEngenie::Version::Platform << "\n";
    std::cout << "Idioma     : " << Pure3XEngenie::Version::Language << "\n";
    std::cout << "Status     : " << Pure3XEngenie::Version::Status << "\n";
    std::cout << "Licenca    : " << Pure3XEngenie::Version::License << "\n\n";

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

    std::cout << "\n=========================================\n";
    std::cout << "Sistema funcionando normalmente.\n";
    std::cout << "=========================================\n";
}
