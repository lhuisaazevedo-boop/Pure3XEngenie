#include "Cube.h"

#include <iostream>
#include <vector>

bool Cube::Initialize() {
    if (initialized)
        return true;

    std::vector<float> vertices = {
        // Frente
        -0.5f, -0.5f,  0.5f,
         0.5f, -0.5f,  0.5f,
         0.5f,  0.5f,  0.5f,
        -0.5f,  0.5f,  0.5f,

        // Trás
        -0.5f, -0.5f, -0.5f,
         0.5f, -0.5f, -0.5f,
         0.5f,  0.5f, -0.5f,
        -0.5f,  0.5f, -0.5f
    };

    std::vector<unsigned int> indices = {
        0,1,2, 2,3,0,
        4,5,6, 6,7,4,
        0,4,7, 7,3,0,
        1,5,6, 6,2,1,
        3,2,6, 6,7,3,
        0,1,5, 5,4,0
    };

    mesh.SetVertices(vertices);
    mesh.SetIndices(indices);

    if (!mesh.Initialize()) {
        std::cout << "[Cube] Falha ao inicializar Mesh." << std::endl;
        return false;
    }

    initialized = true;

    std::cout << "[Cube] Inicializado." << std::endl;

    return true;
}

void Cube::Draw() {
    if (!initialized)
        return;

    mesh.Draw();
}

void Cube::Shutdown() {
    if (!initialized)
        return;

    mesh.Shutdown();

    initialized = false;

    std::cout << "[Cube] Encerrado." << std::endl;
}

Mesh& Cube::GetMesh() {
    return mesh;
}
