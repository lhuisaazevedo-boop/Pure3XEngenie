#ifndef PURE3X_WINDOW_MANAGER_H
#define PURE3X_WINDOW_MANAGER_H

namespace Pure3X
{

class WindowManager
{
public:
    static bool Initialize();

    static void PollEvents();

    static void Shutdown();

    static bool IsRunning();

private:
    static bool running;
};

}

#endif
