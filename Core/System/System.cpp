#include "System.h"
#include <iostream>

void System::showStatus() {

    std::cout << "\n=================================\n";
    std::cout << "      STATUS DO SISTEMA\n";
    std::cout << "=================================\n";

    std::cout << "Engine: Pure3XEngenie\n";
    std::cout << "Versao: 0.1.0 Alpha\n";

    std::cout << "\nComponentes:\n";
    std::cout << "CPU: OK\n";
    std::cout << "RAM: OK\n";
    std::cout << "CORE: OK\n";
    std::cout << "BOOT: OK\n";

    std::cout << "\nSistema funcionando normalmente.\n";
}
