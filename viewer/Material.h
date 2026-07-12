#pragma once

#include <array>

class Material {
public:
    Material() = default;
    ~Material() = default;

    bool Initialize();

    void Bind();

    void Shutdown();

    void SetColor(float r, float g, float b, float a);

    const std::array<float, 4>& GetColor() const;

private:
    bool initialized = false;

    std::array<float, 4> color = {
        0.2f,
        0.7f,
        1.0f,
        1.0f
    };
};
