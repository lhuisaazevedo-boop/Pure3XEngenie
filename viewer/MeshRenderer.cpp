#include "MeshRenderer.h"

#include <iostream>

bool MeshRenderer::Initialize() {
    if (initialized)
        return true;

    mesh.Initialize();
    material.Initialize();
    shader.Initialize();
    transform.Initialize();

    initialized = true;

    std::cout << "[MeshRenderer] Inicializado." << std::endl;

    return true;
}

void MeshRenderer::Draw() {
    if (!initialized)
        return;

    shader.Bind();
    material.Bind();
    mesh.Draw();
}

void MeshRenderer::Shutdown() {
    if (!initialized)
        return;

    mesh.Shutdown();
    material.Shutdown();
    shader.Shutdown();
    transform.Shutdown();

    initialized = false;

    std::cout << "[MeshRenderer] Encerrado." << std::endl;
}

Mesh& MeshRenderer::GetMesh() {
    return mesh;
}

Material& MeshRenderer::GetMaterial() {
    return material;
}

Shader& MeshRenderer::GetShader() {
    return shader;
}

Transform& MeshRenderer::GetTransform() {
    return transform;
}
