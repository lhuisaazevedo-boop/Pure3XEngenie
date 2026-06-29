#ifndef PURE3X_SYSTEM_MANAGER_H
#define PURE3X_SYSTEM_MANAGER_H

#include <string>

namespace Pure3X
{

class SystemManager
{
public:
    static bool Initialize();
    static void Shutdown();

    static bool IsReady();

    static std::string GetPlatform();
    static std::string GetArchitecture();
    static std::string GetABI();

private:
    static bool ready;

    static std::string platform;
    static std::string architecture;
    static std::string abi;
};

} // namespace Pure3X

#endif
