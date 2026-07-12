#include "Model.h"

#include <iostream>

bool Model::Initialize() {
    if (initialized)
        return true;

    if (!transform.Initialize()) {
        std::cout << "[Model] Falha ao inicializar Transform." << std::endl;
        return false;
    }

    if (!material.Initialize()) {
        std::cout << "[Model] Falha ao inicializar Material." << std::endl;
        return false;
    }

    for (auto& mesh : meshes) {
        if (!mesh.Initialize()) {
            std::cout << "[Model] Falha ao inicializar Mesh." << std::endl;
            return false;
        }
    }

    initialized = true;

    std::cout << "[Model] Inicializado." << std::endl;

    return true;
}

void Model::Draw() {
    if (!initialized)
        return;

    material.Bind();

    for (auto& mesh : meshes) {
        mesh.Draw();
    }
}

void Model::Shutdown() {
    if (!initialized)
        return;

    for (auto& mesh : meshes) {
        mesh.Shutdown();
    }

    meshes.clear();

    material.Shutdown();
    transform.Shutdown();

    initialized = false;

    std::cout << "[Model] Encerrado." << std::endl;
}

Transform& Model::GetTransform() {
    return transform;
}

Material& Model::GetMaterial() {
    return material;
}

std::vector<Mesh>& Model::GetMeshes() {
    return meshes;
}

void Model::AddMesh(const Mesh& mesh) {
    meshes.push_back(mesh);
}
