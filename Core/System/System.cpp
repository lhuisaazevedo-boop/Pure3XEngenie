#include "System.h"
#include <iostream>

void System::showStatus() {

    std::cout << "\n=================================\n";
    std::cout << "        STATUS DO SISTEMA\n";
    std::cout << "=================================\n";

    std::cout << "Engine     : Pure3XEngenie\n";
    std::cout << "Versao     : 0.1.2 Alpha Update\n";
    std::cout << "Build      : Alpha\n";
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
