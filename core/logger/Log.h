#pragma once

#include <string>

namespace Pure3X {

class Log {
public:
    static void Init(const std::string& file = "engine.log");

    static void Info(const std::string& msg);
    static void Warning(const std::string& msg);
    static void Error(const std::string& msg);

    static void Shutdown();
};

} // namespace Pure3X
