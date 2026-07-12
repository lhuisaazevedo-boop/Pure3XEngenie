#include "Material.h"

#include <iostream>

bool Material::Initialize() {
    if (initialized)
        return true;

    initialized = true;

    std::cout << "[Material] Inicializado." << std::endl;

    return true;
}

void Material::Bind() {
    if (!initialized)
        return;

    // Fase atual:
    // O shader utilizará a cor armazenada em color.
    // Na próxima fase enviaremos:
    // glUniform4fv(...)
}

void Material::Shutdown() {
    if (!initialized)
        return;

    initialized = false;

    std::cout << "[Material] Encerrado." << std::endl;
}

void Material::SetColor(float r, float g, float b, float a) {
    color[0] = r;
    color[1] = g;
    color[2] = b;
    color[3] = a;
}

const std::array<float, 4>& Material::GetColor() const {
    return color;
}
