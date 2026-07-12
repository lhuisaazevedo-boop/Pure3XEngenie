#pragma once

class Projection {
public:
    Projection() = default;
    ~Projection() = default;

    bool Initialize();

    void Shutdown();

    void SetPerspective(float fov,
                        float aspect,
                        float nearPlane,
                        float farPlane);

    float GetFov() const;
    float GetAspect() const;
    float GetNearPlane() const;
    float GetFarPlane() const;

private:
    bool initialized = false;

    float fov = 60.0f;
    float aspect = 16.0f / 9.0f;
    float nearPlane = 0.1f;
    float farPlane = 1000.0f;
};
