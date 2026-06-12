#include "Boot.h"
#include "../Logs/Log.h"

#include <iostream>
#include <thread>
#include <chrono>

namespace Pure3X {

void bootSystem() {

    Log::Init("engine.log");
    Log::Info("Boot System iniciado");

    std::cout << "\n=================================\n";
    std::cout << "   Pure3XEngenie - Boot System   \n";
    std::cout << "=================================\n\n";

    const int width = 30;

    for (int i = 0; i <= width; i++) {

        int percent = (i * 100) / width;

        std::cout << "\rCarregando sistema... [";

        for (int j = 0; j < width; j++) {
            std::cout << (j < i ? "█" : " ");
        }

        std::cout << "] " << percent << "%";
        std::cout.flush();

        std::this_thread::sleep_for(std::chrono::milliseconds(120));
    }

    std::cout << "\n\n";

    Log::Info("Inicializando Kernel...");
    std::this_thread::sleep_for(std::chrono::milliseconds(700));

    Log::Info("Carregando Core System...");
    std::this_thread::sleep_for(std::chrono::milliseconds(700));

    Log::Info("Verificando memória...");
    std::this_thread::sleep_for(std::chrono::milliseconds(700));

    Log::Info("Inicializando módulos...");
    std::this_thread::sleep_for(std::chrono::milliseconds(700));

    Log::Info("Sistema iniciado com sucesso!");
    Log::Shutdown();
}

}
