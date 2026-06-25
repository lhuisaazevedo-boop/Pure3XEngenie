#include "config_manager.h"

#include <iostream>

ConfigManager::ConfigManager()
{
    debugMode = false;
    networkEnabled = true;
}

void ConfigManager::Load()
{
    std::cout << "[CONFIG] Carregando configuracoes..." << std::endl;
}

void ConfigManager::Save()
{
    std::cout << "[CONFIG] Salvando configuracoes..." << std::endl;
}

void ConfigManager::ShowStatus()
{
    std::cout << "===== Config Manager =====" << std::endl;
    std::cout << "Debug: " << (debugMode ? "ON" : "OFF") << std::endl;
    std::cout << "Rede : " << (networkEnabled ? "ON" : "OFF") << std::endl;
}
