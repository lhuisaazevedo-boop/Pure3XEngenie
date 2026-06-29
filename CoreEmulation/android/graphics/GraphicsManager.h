#ifndef PURE3X_GRAPHICS_MANAGER_H
#define PURE3X_GRAPHICS_MANAGER_H

#include <string>

namespace Pure3X
{

class GraphicsManager
{
public:
    static bool Initialize();
    static void Shutdown();

    static bool IsReady();

    static std::string GetBackend();
    static std::string GetRenderer();
    static std::string GetVersion();

private:
    static bool ready;

    static std::string backend;
    static std::string renderer;
    static std::string version;
};

} // namespace Pure3X

#endif
