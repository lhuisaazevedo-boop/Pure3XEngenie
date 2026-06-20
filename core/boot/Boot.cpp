#include "Boot.h"
#include "../logger/Log.h"
#include "../version/version.h"

#include <chrono>
#include <iomanip>
#include <iostream>
#include <thread>

namespace Pure3X {

static void BootProgress(const std::string& module)
{
    constexpr int width = 20;

    std::cout << std::left << std::setw(12) << module << " ";

    for (int i = 0; i <= width; i++) {

        int percent = (i * 100) / width;

        std::cout << "\r";
        std::cout << std::left << std::setw(12) << module;
        std::cout << " [";

        for (int j = 0; j < width; j++)
            std::cout << (j < i ? "█" : " ");

        std::cout << "] ";
        std::cout << std::setw(3) << percent << "%";

        std::cout.flush();

        std::this_thread::sleep_for(std::chrono::milliseconds(25));
    }

    std::cout << "  READY\n";
}

void bootSystem()
{
    Log::Init("engine.log");

    std::cout << "\n";
    std::cout << "=============================================\n";
    std::cout << "          Pure3XEngenie Boot System\n";
    std::cout << "=============================================\n\n";

    std::cout << "Engine     : " << GetEngineName() << '\n';
    std::cout << "Version    : " << GetVersion() << '\n';
    std::cout << "Build      : " << GetBuild() << '\n';
    std::cout << "Developer  : " << GetDeveloper() << '\n';
    std::cout << "Platform   : " << GetPlatform() << '\n';
    std::cout << "Language   : " << GetLanguage() << "\n\n";

    std::cout << "Inicializando componentes...\n\n";

    BootProgress("Kernel");
    BootProgress("CPU");
    BootProgress("Memory");
    BootProgress("Network");
    BootProgress("Logger");

    BootProgress("JIT");
    BootProgress("BlockCache");
    BootProgress("MemoryMap");
    BootProgress("NCE");
    BootProgress("Scheduler");

    std::cout << "\n=============================================\n";
    std::cout << "             Engine Ready\n";
    std::cout << "=============================================\n\n";

    Log::Info("[BOOT] Sistema iniciado com sucesso.");

    Log::Shutdown();
}

} // namespace Pure3X
