#pragma once

#include "Window.h"
#include "RenderLoop.h"

class Application {
public:
    bool Initialize();

    void Run();

    void Shutdown();

private:
    Window window;
    RenderLoop renderLoop;
};
