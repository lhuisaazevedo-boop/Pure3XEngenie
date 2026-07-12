#pragma once

class Input {
public:
    bool Initialize();

    void Update();

    bool IsKeyPressed(int key);

    void Shutdown();
};
