#pragma once

#include <GLES3/gl3.h>

#include "Model.h"
#include "Shader.h"

class RendererGL {
public:
    RendererGL() = default;
    ~RendererGL() = default;

    bool Initialize();

    void BeginFrame();
    void DrawModel(Model& model);
    void EndFrame();

    void Shutdown();

    bool IsInitialized() const {
        return initialized;
    }

    void SetViewport(int w, int h) {
        width = w;
        height = h;
    }

private:
    bool initialized = false;

    int width = 1280;
    int height = 720;

    float clearColor[4] = {
        0.10f,
        0.12f,
        0.18f,
        1.00f
    };

    // Shader
    Shader shader;

    // OpenGL ES
    GLuint vao = 0;
    GLuint vbo = 0;
    GLuint ebo = 0;
};
