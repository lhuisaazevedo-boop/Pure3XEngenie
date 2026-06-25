#pragma once

#include <string>
#include "LogLevel.h"

namespace Pure3X
{

class Log
{
public:
    static void Init(const std::string& file = "engine.log");
    static void Shutdown();

    static void Write(LogLevel level, const std::string& message);

    static void Info(const std::string& message);
    static void Debug(const std::string& message);
    static void Warning(const std::string& message);
    static void Error(const std::string& message);
    static void Fatal(const std::string& message);

    static void Boot(const std::string& message);
    static void Engine(const std::string& message);
    static void Loader(const std::string& message);
    static void VFS(const std::string& message);
    static void Network(const std::string& message);
    static void Config(const std::string& message);
    static void System(const std::string& message);
};

} // namespace Pure3X
