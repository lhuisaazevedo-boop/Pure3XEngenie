#include "ShaderManager.h"

#include <iostream>

namespace Pure3X {

ShaderManager::ShaderManager()
    : initialized(false)
{
}

bool ShaderManager::Initialize()
{
    std::cout << "[RSX] Inicializando Shader Manager..." << std::endl;

    initialized = true;
    currentShader.clear();

    return true;
}

void ShaderManager::Shutdown()
{
    std::cout << "[RSX] Encerrando Shader Manager..." << std::endl;

    initialized = false;
    currentShader.clear();
}

bool ShaderManager::LoadShader(const std::string& path)
{
    if (!initialized)
    {
        return false;
    }

    currentShader = path;

    std::cout << "[RSX] Shader carregado: "
              << currentShader << std::endl;

    return true;
}

void ShaderManager::Clear()
{
    currentShader.clear();

    std::cout << "[RSX] Shader removido." << std::endl;
}

} // namespace Pure3X
