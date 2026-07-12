#pragma once

class Timer {
public:
    bool Initialize();

    void Update();

    float GetDeltaTime() const;

    void Shutdown();

private:
    float deltaTime = 1.0f / 60.0f;
};
