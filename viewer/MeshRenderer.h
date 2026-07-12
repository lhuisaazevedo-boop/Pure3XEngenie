#pragma once

#include "Mesh.h"
#include "Material.h"
#include "Shader.h"
#include "Transform.h"

class MeshRenderer {
public:
    MeshRenderer() = default;
    ~MeshRenderer() = default;

    bool Initialize();

    void Draw();

    void Shutdown();

    Mesh& GetMesh();
    Material& GetMaterial();
    Shader& GetShader();
    Transform& GetTransform();

private:
    bool initialized = false;

    Mesh mesh;
    Material material;
    Shader shader;
    Transform transform;
};
