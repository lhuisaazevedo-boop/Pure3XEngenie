#pragma once

class Transform {
public:
    Transform() = default;
    ~Transform() = default;

    bool Initialize();

    void Shutdown();

    void SetPosition(float x, float y, float z);

    void SetRotation(float x, float y, float z);

    void SetScale(float x, float y, float z);

    float GetPositionX() const;
    float GetPositionY() const;
    float GetPositionZ() const;

    float GetRotationX() const;
    float GetRotationY() const;
    float GetRotationZ() const;

    float GetScaleX() const;
    float GetScaleY() const;
    float GetScaleZ() const;

private:
    bool initialized = false;

    float position[3] = {
        0.0f,
        0.0f,
        0.0f
    };

    float rotation[3] = {
        0.0f,
        0.0f,
        0.0f
    };

    float scale[3] = {
        1.0f,
        1.0f,
        1.0f
    };
};
