#include "Scene.h"

#include <iostream>

bool Scene::Initialize() {
    if (initialized)
        return true;

    if (!camera.Initialize()) {
        std::cout << "[Scene] Falha ao inicializar Camera." << std::endl;
        return false;
    }

    if (!cube.Initialize()) {
        std::cout << "[Scene] Falha ao inicializar Cube." << std::endl;
        return false;
    }

    if (!model.Initialize()) {
        std::cout << "[Scene] Falha ao inicializar Model." << std::endl;
        return false;
    }

    initialized = true;

    std::cout << "[Scene] Inicializada." << std::endl;

    return true;
}

void Scene::Update() {
    if (!initialized)
        return;

    camera.Update();
}

void Scene::Draw() {
    if (!initialized)
        return;

    cube.Draw();

    // Futuramente:
    // model.Draw();
}

void Scene::Shutdown() {
    if (!initialized)
        return;

    model.Shutdown();
    cube.Shutdown();
    camera.Shutdown();

    initialized = false;

    std::cout << "[Scene] Encerrada." << std::endl;
}
