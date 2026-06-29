#ifndef PURE3X_THREAD_MANAGER_H
#define PURE3X_THREAD_MANAGER_H

#include <thread>
#include <vector>

namespace Pure3X
{

class ThreadManager
{
public:
    static bool Initialize();
    static void Shutdown();

    static bool IsReady();

    static void Launch(void (*task)());

    static unsigned int GetThreadCount();

private:
    static bool ready;
    static std::vector<std::thread> threads;
};

}

#endif
