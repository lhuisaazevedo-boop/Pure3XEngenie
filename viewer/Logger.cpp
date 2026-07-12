#include "Logger.h"

#include <iostream>

void Logger::Info(const std::string& message) {
    std::cout << "[INFO] " << message << std::endl;
}

void Logger::Warning(const std::string& message) {
    std::cout << "[WARNING] " << message << std::endl;
}

void Logger::Error(const std::string& message) {
    std::cerr << "[ERROR] " << message << std::endl;
}
