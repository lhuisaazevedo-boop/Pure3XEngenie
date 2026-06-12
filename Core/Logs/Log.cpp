#include "Log.h"
#include <iostream>
#include <fstream>

namespace Pure3X {

static std::ofstream file;

void Log::Init(const std::string& fileName) {
    file.open(fileName, std::ios::app);
    std::cout << "[LOG] Init\n";
}

void Log::Info(const std::string& msg) {
    std::cout << "[INFO] " << msg << std::endl;
    if (file.is_open()) file << "[INFO] " << msg << std::endl;
}

void Log::Warning(const std::string& msg) {
    std::cout << "[WARN] " << msg << std::endl;
    if (file.is_open()) file << "[WARN] " << msg << std::endl;
}

void Log::Error(const std::string& msg) {
    std::cout << "[ERROR] " << msg << std::endl;
    if (file.is_open()) file << "[ERROR] " << msg << std::endl;
}

void Log::Shutdown() {
    std::cout << "[LOG] Shutdown\n";
    if (file.is_open()) {
        file << "[LOG] Shutdown\n";
        file.close();
    }
}

}
