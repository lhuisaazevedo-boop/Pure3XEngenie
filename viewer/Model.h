#pragma once

#include <vector>

#include "Transform.h"
#include "Material.h"
#include "Mesh.h"

class Model {
public:
    Model() = default;
    virtual ~Model() = default;

    virtual bool Initialize();

    virtual void Draw();

    virtual void Shutdown();

    Transform& GetTransform();
    Material& GetMaterial();

    std::vector<Mesh>& GetMeshes();

    void AddMesh(const Mesh& mesh);

protected:
    bool initialized = false;

    Transform transform;
    Material material;

    std::vector<Mesh> meshes;
};
