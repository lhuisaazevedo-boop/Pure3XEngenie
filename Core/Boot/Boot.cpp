#include "Boot.h"
#include <iostream>
#include <thread>
#include <chrono>

void bootSystem() {

    std::cout << "\n=================================\n";
    std::cout << "   Pure3XEngenie - Boot System   \n";
    std::cout << "=================================\n\n";

    const int width = 30;

    for (int i = 0; i <= width; i++) {

        int percent = (i * 100) / width;

        std::cout << "\rCarregando sistema... [";

        for (int j = 0; j < width; j++) {
            if (j < i)
                std::cout << "█";
            else
                std::cout << " ";
        }

        std::cout << "] " << percent << "%";
        std::cout.flush();

        std::this_thread::sleep_for(
            std::chrono::milliseconds(120)
        );
    }

    std::cout << "\n\nInicializando Kernel...\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(700));

    std::cout << "Carregando Core System...\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(700));

    std::cout << "Verificando memoria...\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(700));

    std::cout << "Inicializando Modulos...\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(700));

    std::cout << "\n[OK] Sistema iniciado com sucesso!\n\n";
}
