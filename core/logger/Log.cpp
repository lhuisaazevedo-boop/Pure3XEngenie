#include "Log.h"
#include "../version/version.h"

#include <fstream>
#include <iostream>
#include <thread>

namespace Pure3X {

static std::ofstream gLog;

void Log::Init(const std::string& file)
{
    gLog.open(file);

    Info("=================================");
    Info("Pure3XEngenie Logger");
    Info("Logger inicializado");
    Info("=================================");

    Info("");

    Info("Engine      : " + GetEngineName());
    Info("Platform    : " + GetPlatform());
    Info("Version     : " + GetVersion());
    Info("Build       : " + GetBuild());
    Info("Developer   : " + GetDeveloper());
    Info("Threads     : " +
         std::to_string(std::thread::hardware_concurrency()));

    Info("");

    Info("JIT         : Ready");
    Info("BlockCache  : Ready");
    Info("MemoryMap   : Ready");
    Info("NCE         : Ready");
    Info("Scheduler   : Ready");

    Info("");

    Info("Logger      : Ready");
    Info("=================================");
}

void Log::Shutdown()
{
    Info("Encerrando Logger");

    if (gLog.is_open())
        gLog.close();

    std::cout << "[LOG] Shutdown\n";
}

void Log::Info(const std::string& msg)
{
    std::cout << "[INFO ] " << msg << '\n';

    if (gLog.is_open())
        gLog << "[INFO ] " << msg << '\n';
}

void Log::Warning(const std::string& msg)
{
    std::cout << "[WARN ] " << msg << '\n';

    if (gLog.is_open())
        gLog << "[WARN ] " << msg << '\n';
}

void Log::Error(const std::string& msg)
{
    std::cout << "[ERROR] " << msg << '\n';

    if (gLog.is_open())
        gLog << "[ERROR] " << msg << '\n';
}

} // namespace Pure3X
