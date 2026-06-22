#ifndef PURE3X_SHADER_MANAGER_H
#define PURE3X_SHADER_MANAGER_H

#include <string>

namespace Pure3X {

class ShaderManager {
public:
    ShaderManager();

    bool Initialize();
    void Shutdown();

    bool LoadShader(const std::string& path);
    void Clear();

private:
    bool initialized;
    std::string currentShader;
};

} // namespace Pure3X

#endif // PURE3X_SHADER_MANAGER_H
