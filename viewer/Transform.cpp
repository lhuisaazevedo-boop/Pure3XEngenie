#include "Transform.h"

#include <iostream>

bool Transform::Initialize() {
    if (initialized)
        return true;

    initialized = true;

    std::cout << "[Transform] Inicializado." << std::endl;

    return true;
}

void Transform::Shutdown() {
    if (!initialized)
        return;

    initialized = false;

    std::cout << "[Transform] Encerrado." << std::endl;
}

void Transform::SetPosition(float x, float y, float z) {
    position[0] = x;
    position[1] = y;
    position[2] = z;
}

void Transform::SetRotation(float x, float y, float z) {
    rotation[0] = x;
    rotation[1] = y;
    rotation[2] = z;
}

void Transform::SetScale(float x, float y, float z) {
    scale[0] = x;
    scale[1] = y;
    scale[2] = z;
}

float Transform::GetPositionX() const {
    return position[0];
}

float Transform::GetPositionY() const {
    return position[1];
}

float Transform::GetPositionZ() const {
    return position[2];
}

float Transform::GetRotationX() const {
    return rotation[0];
}

float Transform::GetRotationY() const {
    return rotation[1];
}

float Transform::GetRotationZ() const {
    return rotation[2];
}

float Transform::GetScaleX() const {
    return scale[0];
}

float Transform::GetScaleY() const {
    return scale[1];
}

float Transform::GetScaleZ() const {
    return scale[2];
}
