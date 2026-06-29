#include "ShaderManager.h"

#include <iostream>

namespace Pure3X
{

bool ShaderManager::ready = false;

bool ShaderManager::Initialize()
{
    std::cout << "[ShaderManager] Inicializando...\n";

    ready = true;

    std::cout << "[ShaderManager] Sistema pronto.\n";

    return true;
}

void ShaderManager::Shutdown()
{
    std::cout << "[ShaderManager] Encerrando...\n";

    ready = false;
}

bool ShaderManager::IsReady()
{
    return ready;
}

bool ShaderManager::LoadVertexShader(const std::string& file)
{
    std::cout << "[ShaderManager] Vertex Shader: "
              << file << "\n";

    return true;
}

bool ShaderManager::LoadFragmentShader(const std::string& file)
{
    std::cout << "[ShaderManager] Fragment Shader: "
              << file << "\n";

    return true;
}

void ShaderManager::ReloadShaders()
{
    std::cout << "[ShaderManager] Recarregando shaders...\n";
}

} // namespace Pure3X
