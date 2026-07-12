#include "Skybox.h"

#include <GLES3/gl3.h>
#include <iostream>

bool Skybox::Initialize() {
    if (initialized)
        return true;

    glGenVertexArrays(1, &vao);
    glGenBuffers(1, &vbo);
    glGenTextures(1, &cubemap);

    initialized = true;

    std::cout << "[Skybox] Inicializada." << std::endl;
    return true;
}

void Skybox::Draw() {
    if (!initialized)
        return;

    glBindVertexArray(vao);
    glBindTexture(GL_TEXTURE_CUBE_MAP, cubemap);

    // Renderização completa será implementada futuramente.

    glBindTexture(GL_TEXTURE_CUBE_MAP, 0);
    glBindVertexArray(0);

    std::cout << "[Skybox] Renderizando." << std::endl;
}

void Skybox::Shutdown() {
    if (!initialized)
        return;

    if (vao != 0)
        glDeleteVertexArrays(1, &vao);

    if (vbo != 0)
        glDeleteBuffers(1, &vbo);

    if (cubemap != 0)
        glDeleteTextures(1, &cubemap);

    vao = 0;
    vbo = 0;
    cubemap = 0;

    initialized = false;

    std::cout << "[Skybox] Encerrada." << std::endl;
}
