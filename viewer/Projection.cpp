#include "Projection.h"

#include <iostream>

bool Projection::Initialize() {
    if (initialized)
        return true;

    initialized = true;

    std::cout << "[Projection] Inicializada." << std::endl;

    return true;
}

void Projection::Shutdown() {
    if (!initialized)
        return;

    initialized = false;

    std::cout << "[Projection] Encerrada." << std::endl;
}

void Projection::SetPerspective(float newFov,
                                float newAspect,
                                float newNearPlane,
                                float newFarPlane) {
    fov = newFov;
    aspect = newAspect;
    nearPlane = newNearPlane;
    farPlane = newFarPlane;
}

float Projection::GetFov() const {
    return fov;
}

float Projection::GetAspect() const {
    return aspect;
}

float Projection::GetNearPlane() const {
    return nearPlane;
}

float Projection::GetFarPlane() const {
    return farPlane;
}
