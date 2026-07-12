#pragma once

class Skybox {
public:
    Skybox() = default;
    ~Skybox() = default;

    bool Initialize();

    void Draw();

    void Shutdown();

private:
    bool initialized = false;

    unsigned int vao = 0;
    unsigned int vbo = 0;

    unsigned int cubemap = 0;
};
