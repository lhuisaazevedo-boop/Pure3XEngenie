#include "Boot.h"
#include "../logger/Log.h"
#include "../version/version.h"

#include <chrono>
#include <iostream>
#include <thread>

namespace Pure3X {

void bootSystem() {

    Log::Init("engine.log");
    Log::Info("[BOOT] Inicializando Boot System...");

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

    std::cout << "Version   : " << Pure3XEngenie::Version::Version << "\n";
    std::cout << "Build     : " << Pure3XEngenie::Version::Build << "\n";
    std::cout << "Developer : " << Pure3XEngenie::Version::Developer << "\n";
    std::cout << "Platform  : " << Pure3XEngenie::Version::Platform << "\n";
    std::cout << "Language  : " << Pure3XEngenie::Version::Language << "\n\n";

    constexpr int width = 30;

    std::cout << "Loading Boot System...\n";

    for (int i = 0; i <= width; ++i) {

        int percent = (i * 100) / width;

        std::cout << "\r[";

        for (int j = 0; j < width; ++j) {
            std::cout << (j < i ? "█" : " ");
        }

        std::cout << "] " << percent << "%";
        std::cout.flush();

        std::this_thread::sleep_for(std::chrono::milliseconds(80));
    }

    std::cout << "\n\n";

    Log::Info("[BOOT] Inicializando Kernel...");
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    Log::Info("[BOOT] Carregando Core...");
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    Log::Info("[BOOT] Carregando Config Manager...");
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    Log::Info("[BOOT] Inicializando Network Manager...");
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    Log::Info("[BOOT] Inicializando Logger...");
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    Log::Info("[BOOT] Sistema iniciado com sucesso!");

    std::cout << "\n==========================================\n";
    std::cout << "         "
              << Pure3XEngenie::Version::Name
              << " Ready\n";
    std::cout << "==========================================\n\n";

    Log::Shutdown();
}

} // namespace Pure3X
