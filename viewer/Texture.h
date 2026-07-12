#pragma once

#include <string>

class Texture {
public:
    Texture() = default;
    ~Texture() = default;

    bool Initialize();

    bool Load(const std::string& path);

    void Bind(unsigned int slot = 0);

    void Shutdown();

    unsigned int GetID() const;

private:
    bool initialized = false;

    unsigned int textureID = 0;

    int width = 0;
    int height = 0;
    int channels = 0;

    std::string filePath;
};
