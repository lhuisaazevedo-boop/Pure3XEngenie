#include "System.h"
#include <iostream>

void System::showStatus() {

    std::cout << "\n=================================\n";
    std::cout << "        STATUS DO SISTEMA\n";
    std::cout << "=================================\n";

    std::cout << "Engine     : Pure3XEngenie\n";
    std::cout << "Versao     : v0.1.3 Alpha\n";
    std::cout << "Build      : 0013\n";
    std::cout << "Idioma     : pt_BR\n";
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
