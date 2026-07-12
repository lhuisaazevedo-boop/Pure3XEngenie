#pragma once

class Camera {
public:
    Camera() = default;
    ~Camera() = default;

    bool Initialize();

    void Update();

    void Shutdown();

    void SetPosition(float x, float y, float z);

    float GetPositionX() const;
    float GetPositionY() const;
    float GetPositionZ() const;

private:
    bool initialized = false;

    float position[3] = {
        0.0f,
        0.0f,
        3.0f
    };
};
