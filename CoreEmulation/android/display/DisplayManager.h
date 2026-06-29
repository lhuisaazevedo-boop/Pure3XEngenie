#ifndef PURE3X_DISPLAY_MANAGER_H
#define PURE3X_DISPLAY_MANAGER_H

namespace Pure3X
{

class DisplayManager
{
public:
    static bool Initialize();
    static void Shutdown();

    static int GetWidth();
    static int GetHeight();

private:
    static int width;
    static int height;
};

}

#endif
