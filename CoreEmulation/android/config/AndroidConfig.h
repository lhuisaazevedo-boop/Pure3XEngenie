#ifndef PURE3X_ANDROID_CONFIG_H
#define PURE3X_ANDROID_CONFIG_H

#include <string>

namespace Pure3X
{

class AndroidConfig
{
public:
    static bool Initialize();
    static void Shutdown();

    static bool IsReady();

    static int GetScreenWidth();
    static int GetScreenHeight();

    static std::string GetRenderer();
    static std::string GetGraphicsAPI();

private:
    static bool ready;

    static int screenWidth;
    static int screenHeight;

    static std::string renderer;
    static std::string graphicsAPI;
};

} // namespace Pure3X

#endif
