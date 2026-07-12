#include "Mesh.h"

#include <GLES3/gl3.h>
#include <iostream>

bool Mesh::Initialize() {
    if (initialized)
        return true;

    glGenVertexArrays(1, &vao);
    glGenBuffers(1, &vbo);
    glGenBuffers(1, &ebo);

    glBindVertexArray(vao);

    glBindBuffer(GL_ARRAY_BUFFER, vbo);
    glBufferData(
        GL_ARRAY_BUFFER,
        vertices.size() * sizeof(float),
        vertices.data(),
        GL_STATIC_DRAW);

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ebo);
    glBufferData(
        GL_ELEMENT_ARRAY_BUFFER,
        indices.size() * sizeof(unsigned int),
        indices.data(),
        GL_STATIC_DRAW);

    glVertexAttribPointer(
        0,
        3,
        GL_FLOAT,
        GL_FALSE,
        3 * sizeof(float),
        (void*)0);

    glEnableVertexAttribArray(0);

    glBindVertexArray(0);

    initialized = true;

    std::cout << "[Mesh] Inicializada." << std::endl;

    return true;
}

void Mesh::SetVertices(const std::vector<float>& newVertices) {
    vertices = newVertices;
}

void Mesh::SetIndices(const std::vector<unsigned int>& newIndices) {
    indices = newIndices;
}

const std::vector<float>& Mesh::GetVertices() const {
    return vertices;
}

const std::vector<unsigned int>& Mesh::GetIndices() const {
    return indices;
}

void Mesh::Draw() {
    if (!initialized)
        return;

    glBindVertexArray(vao);

    if (!indices.empty()) {
        glDrawElements(
            GL_TRIANGLES,
            indices.size(),
            GL_UNSIGNED_INT,
            nullptr);
    } else {
        glDrawArrays(
            GL_TRIANGLES,
            0,
            vertices.size() / 3);
    }

    glBindVertexArray(0);
}

void Mesh::Shutdown() {
    if (!initialized)
        return;

    if (vao != 0)
        glDeleteVertexArrays(1, &vao);

    if (vbo != 0)
        glDeleteBuffers(1, &vbo);

    if (ebo != 0)
        glDeleteBuffers(1, &ebo);

    vertices.clear();
    indices.clear();

    vao = 0;
    vbo = 0;
    ebo = 0;

    initialized = false;

    std::cout << "[Mesh] Encerrada." << std::endl;
}
