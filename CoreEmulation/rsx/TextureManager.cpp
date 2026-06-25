#include "TextureManager.h"

#include <iostream>

namespace Pure3X {

TextureManager::TextureManager()
    : initialized(false)
{
}

bool TextureManager::Initialize()
{
    std::cout << "[RSX] Inicializando Texture Manager..." << std::endl;

    initialized = true;
    currentTexture.clear();

    return true;
}

void TextureManager::Shutdown()
{
    std::cout << "[RSX] Encerrando Texture Manager..." << std::endl;

    initialized = false;
    currentTexture.clear();
}

bool TextureManager::LoadTexture(const std::string& path)
{
    if (!initialized)
    {
        return false;
    }

    currentTexture = path;

    std::cout << "[RSX] Textura carregada: "
              << currentTexture << std::endl;

    return true;
}

void TextureManager::UnloadTexture()
{
    std::cout << "[RSX] Removendo textura." << std::endl;

    currentTexture.clear();
}

const std::string& TextureManager::GetCurrentTexture() const
{
    return currentTexture;
}

} // namespace Pure3X
