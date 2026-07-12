#include "Camera.h"

#include <iostream>

bool Camera::Initialize() {
    if (initialized)
        return true;

    initialized = true;

    std::cout << "[Camera] Inicializada." << std::endl;
    return true;
}

void Camera::Update() {
    if (!initialized)
        return;

    // Atualização da câmera (Fase 4)
}

void Camera::Shutdown() {
    if (!initialized)
        return;

    initialized = false;

    std::cout << "[Camera] Encerrada." << std::endl;
}

void Camera::SetPosition(float x, float y, float z) {
    position[0] = x;
    position[1] = y;
    position[2] = z;
}

float Camera::GetPositionX() const {
    return position[0];
}

float Camera::GetPositionY() const {
    return position[1];
}

float Camera::GetPositionZ() const {
    return position[2];
}
