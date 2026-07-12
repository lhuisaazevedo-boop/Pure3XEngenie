#pragma once

class FPSCounter {
public:
    bool Initialize();

    void Update();

    int GetFPS() const;

    void Shutdown();

private:
    int fps = 60;
};
