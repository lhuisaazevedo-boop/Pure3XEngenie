#ifndef PURE3X_SHADER_MANAGER_H
#define PURE3X_SHADER_MANAGER_H

#include <string>

namespace Pure3X
{

class ShaderManager
{
public:
    static bool Initialize();
    static void Shutdown();

    static bool IsReady();

    static bool LoadVertexShader(const std::string& file);
    static bool LoadFragmentShader(const std::string& file);

    static void ReloadShaders();

private:
    static bool ready;
};

}

#endif
