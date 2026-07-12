#include "RenderLoop.h"

#include <iostream>

bool RenderLoop::Initialize() {
    if (running)
        return true;

    eglContext.Initialize();
    renderer.Initialize();
    scene.Initialize();

    running = true;

    std::cout << "[RenderLoop] Inicializado." << std::endl;

    return true;
}

void RenderLoop::Run() {
    if (!running)
        return;

    renderer.BeginFrame();

    scene.Update();
    scene.Draw();

    renderer.EndFrame();

    eglContext.SwapBuffers();
}

void RenderLoop::Stop() {
    running = false;

    std::cout << "[RenderLoop] Parado." << std::endl;
}

void RenderLoop::Shutdown() {
    if (!running)
        return;

    scene.Shutdown();

    renderer.Shutdown();

    eglContext.Shutdown();

    running = false;

    std::cout << "[RenderLoop] Encerrado." << std::endl;
}
