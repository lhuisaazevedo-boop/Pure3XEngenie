#pragma once

#include "Mesh.h"

class Cube {
public:
    Cube() = default;
    ~Cube() = default;

    bool Initialize();

    void Draw();

    void Shutdown();

    Mesh& GetMesh();

private:
    bool initialized = false;

    Mesh mesh;
};
