#pragma once

class Light {
public:
    Light() = default;
    ~Light() = default;

    bool Initialize();

    void Shutdown();

    void SetPosition(float x, float y, float z);
    void SetColor(float r, float g, float b);
    void SetIntensity(float intensity);

    float GetPositionX() const;
    float GetPositionY() const;
    float GetPositionZ() const;

    float GetColorR() const;
    float GetColorG() const;
    float GetColorB() const;

    float GetIntensity() const;

private:
    bool initialized = false;

    float position[3] = {
        0.0f,
        5.0f,
        0.0f
    };

    float color[3] = {
        1.0f,
        1.0f,
        1.0f
    };

    float intensity = 1.0f;
};
