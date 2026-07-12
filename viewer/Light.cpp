#include "Light.h"

#include <iostream>

bool Light::Initialize() {
    if (initialized)
        return true;

    initialized = true;

    std::cout << "[Light] Inicializada." << std::endl;
    return true;
}

void Light::Shutdown() {
    if (!initialized)
        return;

    initialized = false;

    std::cout << "[Light] Encerrada." << std::endl;
}

void Light::SetPosition(float x, float y, float z) {
    position[0] = x;
    position[1] = y;
    position[2] = z;
}

void Light::SetColor(float r, float g, float b) {
    color[0] = r;
    color[1] = g;
    color[2] = b;
}

void Light::SetIntensity(float value) {
    intensity = value;
}

float Light::GetPositionX() const {
    return position[0];
}

float Light::GetPositionY() const {
    return position[1];
}

float Light::GetPositionZ() const {
    return position[2];
}

float Light::GetColorR() const {
    return color[0];
}

float Light::GetColorG() const {
    return color[1];
}

float Light::GetColorB() const {
    return color[2];
}

float Light::GetIntensity() const {
    return intensity;
}
