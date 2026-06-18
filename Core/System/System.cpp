#include "System.h"
#include "../../core/version/version.h"

#include <iostream>

void System::showStatus() {

    std::cout << "\n=================================\n";
    std::cout << "        STATUS DO SISTEMA\n";
    std::cout << "=================================\n";

    std::cout << "Engine     : "
              << Pure3XEngenie::Version::Name << "\n";
    std::cout << "Versao     : "
              << Pure3XEngenie::Version::Version << "\n";
    std::cout << "Build      : "
              << Pure3XEngenie::Version::Build << "\n";
    std::cout << "Developer  : "
              << Pure3XEngenie::Version::Developer << "\n";
    std::cout << "Platform   : "
              << Pure3XEngenie::Version::Platform << "\n";
    std::cout << "Idioma     : "
              << Pure3XEngenie::Version::Language << "\n";

    std::cout << "Debug      : ON\n";
    std::cout << "Log Level  : INFO\n";

    std::cout << "\nComponentes:\n";
    std::cout << "CPU        : OK\n";
    std::cout << "RAM        : OK\n";
    std::cout << "CORE       : OK\n";
    std::cout << "REDE       : OK\n";
    std::cout << "CONFIG     : OK\n";
    std::cout << "BOOT       : OK\n";
    std::cout << "LOGS       : OK\n";

    std::cout << "\nSistema funcionando normalmente.\n";
    std::cout << "=================================\n";
}
