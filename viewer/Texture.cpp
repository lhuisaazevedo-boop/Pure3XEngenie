#include "Texture.h"

#include <GLES3/gl3.h>
#include <iostream>

bool Texture::Initialize() {
    if (initialized)
        return true;

    glGenTextures(1, &textureID);

    initialized = true;

    std::cout << "[Texture] Inicializada." << std::endl;
    return true;
}

bool Texture::Load(const std::string& path) {
    if (!initialized)
        return false;

    filePath = path;

    width = 0;
    height = 0;
    channels = 4;

    std::cout << "[Texture] Carregando: " << path << std::endl;

    return true;
}

void Texture::Bind(unsigned int slot) {
    if (!initialized)
        return;

    glActiveTexture(GL_TEXTURE0 + slot);
    glBindTexture(GL_TEXTURE_2D, textureID);
}

void Texture::Shutdown() {
    if (!initialized)
        return;

    if (textureID != 0)
        glDeleteTextures(1, &textureID);

    textureID = 0;
    initialized = false;

    std::cout << "[Texture] Encerrada." << std::endl;
}

unsigned int Texture::GetID() const {
    return textureID;
}
