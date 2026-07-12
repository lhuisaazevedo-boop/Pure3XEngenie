#pragma once

#include "Pure3XEGLContext.h"
#include "RendererGL.h"
#include "Scene.h"

class RenderLoop {
public:
    bool Initialize();
    void Run();
    void Stop();
    void Shutdown();

private:
    bool running = false;

    Pure3XEGLContext eglContext;
    RendererGL renderer;
    Scene scene;
};
