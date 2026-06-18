#include "logger.h"

#include <iostream>

namespace Pure3XEngenie {
namespace Logger {

bool Initialize() {
    std::cout << "[Logger] Initialized." << std::endl;
    return true;
}

void Shutdown() {
    std::cout << "[Logger] Shutdown." << std::endl;
}

void Info(const std::string& message) {
    std::cout << "[INFO] " << message << std::endl;
}

void Warning(const std::string& message) {
    std::cout << "[WARNING] " << message << std::endl;
}

void Error(const std::string& message) {
    std::cerr << "[ERROR] " << message << std::endl;
}

} // namespace Logger
} // namespace Pure3XEngenie
