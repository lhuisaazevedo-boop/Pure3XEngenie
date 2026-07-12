#pragma once

#include <string>

class ResourceManager {
public:
    bool Initialize();

    bool LoadTexture(const std::string& name);

    bool LoadShader(const std::string& name);

    void Shutdown();
};
