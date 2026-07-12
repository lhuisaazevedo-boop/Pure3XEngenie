#pragma once

class Framebuffer {
public:
    Framebuffer() = default;
    ~Framebuffer() = default;

    bool Initialize(int width, int height);

    void Bind();
    void Unbind();

    void Shutdown();

    unsigned int GetTexture() const;

private:
    bool initialized = false;

    unsigned int fbo = 0;
    unsigned int colorTexture = 0;
    unsigned int depthBuffer = 0;

    int width = 0;
    int height = 0;
};
