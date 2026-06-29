#ifndef PURE3X_SPE_THREAD_H
#define PURE3X_SPE_THREAD_H

namespace Pure3X
{

class SPEThread
{
public:
    static bool Initialize();
    static void Shutdown();

    static bool IsRunning();

    static void Start();
    static void Stop();

private:
    static bool running;
};

} // namespace Pure3X

#endif
