#include "LogManager.h"

#include <iostream>

namespace Pure3X
{

bool LogManager::ready = false;

bool LogManager::Initialize()
{
    std::cout << "[LogManager] Inicializando...\n";

    ready = true;

    std::cout << "[LogManager] Sistema pronto.\n";

    return true;
}

void LogManager::Shutdown()
{
    std::cout << "[LogManager] Encerrando...\n";

    ready = false;
}

bool LogManager::IsReady()
{
    return ready;
}

void LogManager::Info(const std::string& message)
{
    if (!ready)
        return;

    std::cout << "[INFO] " << message << '\n';
}

void LogManager::Warning(const std::string& message)
{
    if (!ready)
        return;

    std::cout << "[WARNING] " << message << '\n';
}

void LogManager::Error(const std::string& message)
{
    if (!ready)
        return;

    std::cerr << "[ERROR] " << message << '\n';
}

} // namespace Pure3X
