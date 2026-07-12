#include "ResourceManager.h"

#include <iostream>

bool ResourceManager::Initialize() {
    std::cout << "[ResourceManager] Inicializado."
              << std::endl;

    return true;
}

bool ResourceManager::LoadTexture(const std::string& name) {
    std::cout << "[ResourceManager] Textura carregada: "
              << name
              << std::endl;

    return true;
}

bool ResourceManager::LoadShader(const std::string& name) {
    std::cout << "[ResourceManager] Shader carregado: "
              << name
              << std::endl;

    return true;
}

void ResourceManager::Shutdown() {
    std::cout << "[ResourceManager] Encerrado."
              << std::endl;
}
