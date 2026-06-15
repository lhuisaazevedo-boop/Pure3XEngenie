#include "ConfigManager.h"

#include <fstream>
#include <iostream>

ConfigManager::ConfigManager() {
    configPath = "Config/config.ini";
}

bool ConfigManager::LoadConfig() {
    std::ifstream file(configPath);

    if (!file.is_open()) {
        return false;
    }

    file.close();
    return true;
}

bool ConfigManager::SaveConfig() {
    std::ofstream file(configPath);

    if (!file.is_open()) {
        std::cout << "[ERRO] Nao foi possivel criar config.ini\n";
        return false;
    }

    file << "# Pure3XEngenie Config\n";
    file << "language=pt_BR\n";
    file << "debug=true\n";
    file << "log_level=INFO\n";

    file.close();

    std::cout << "[CONFIG] Arquivo config.ini criado com sucesso.\n";
    return true;
}

void ConfigManager::SetValue(const std::string& key,
                             const std::string& value) {
    // Implementação futura
}

std::string ConfigManager::GetValue(const std::string& key) {
    // Implementação futura
    return "";
}
