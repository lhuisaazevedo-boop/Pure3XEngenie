#include "Boot.h"
#include "../Logs/Log.h"
#include "../../core/version/version.h"

#include <iostream>
#include <thread>
#include <chrono>

namespace Pure3X {

void bootSystem() {

    Log::Init("engine.log");
    Log::Info("Boot System iniciado");

    std::cout << "\n==========================================\n";
    std::cout << "             "
              << Pure3XEngenie::Version::Name
              << "\n";
    std::cout << "==========================================\n\n";

    std::cout << "        ██████╗ ██╗   ██╗██████╗ ███████╗\n";
    std::cout << "        ██╔══██╗██║   ██║██╔══██╗██╔════╝\n";
    std::cout << "        ██████╔╝██║   ██║██████╔╝█████╗\n";
    std::cout << "        ██╔═══╝ ██║   ██║██╔══██╗██╔══╝\n";
    std::cout << "        ██║     ╚██████╔╝██║  ██║███████╗\n";
    std::cout << "        ╚═╝      ╚═════╝ ╚═╝  ╚═╝╚══════╝\n\n";

    std::cout << "        Experimental Engine for PS3 Research\n";
    std::cout << "==========================================\n\n";

    std::cout << "Version   : "
              << Pure3XEngenie::Version::Version << "\n";
    std::cout << "Build     : "
              << Pure3XEngenie::Version::Build << "\n";
    std::cout << "Developer : "
              << Pure3XEngenie::Version::Developer << "\n";
    std::cout << "Platform  : "
              << Pure3XEngenie::Version::Platform << "\n";
    std::cout << "Language  : "
              << Pure3XEngenie::Version::Language << "\n\n";

    const int width = 30;

    for (int i = 0; i <= width; i++) {

        int percent = (i * 100) / width;

        std::cout << "\rLoading Boot System... [";

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

    Log::Info("Carregando Core Engine...");
    std::this_thread::sleep_for(std::chrono::milliseconds(700));

    Log::Info("Carregando Config Manager...");
    std::this_thread::sleep_for(std::chrono::milliseconds(700));

    Log::Info("Inicializando Network Manager...");
    std::this_thread::sleep_for(std::chrono::milliseconds(700));

    Log::Info("Inicializando Log System...");
    std::this_thread::sleep_for(std::chrono::milliseconds(700));

    Log::Info("Sistema iniciado com sucesso!");

    std::cout << "\n==========================================\n";
    std::cout << "         "
              << Pure3XEngenie::Version::Name
              << " Ready\n";
    std::cout << "==========================================\n\n";

    Log::Shutdown();
}

} // namespace Pure3X
