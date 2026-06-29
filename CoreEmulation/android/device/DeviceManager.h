#ifndef PURE3X_DEVICE_MANAGER_H
#define PURE3X_DEVICE_MANAGER_H

#include <string>

namespace Pure3X
{

class DeviceManager
{
public:
    static bool Initialize();
    static void Shutdown();

    static bool IsReady();

    static std::string GetCPU();
    static std::string GetGPU();
    static int GetThreads();
    static int GetRAM();

private:
    static bool ready;

    static std::string cpu;
    static std::string gpu;
    static int threads;
    static int ram;
};

} // namespace Pure3X

#endif
