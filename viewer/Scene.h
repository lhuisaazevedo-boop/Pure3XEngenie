#pragma once

#include "Camera.h"
#include "RendererGL.h"
#include "Model.h"
#include "Cube.h"

class Scene {
public:
    Scene() = default;
    ~Scene() = default;

    bool Initialize();

    void Update();

    void Draw();

    void Shutdown();

private:
    bool initialized = false;

    Camera camera;

    Cube cube;
    Model model;
};
