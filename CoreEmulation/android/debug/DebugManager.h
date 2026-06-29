#ifndef PURE3X_DEBUG_MANAGER_H
#define PURE3X_DEBUG_MANAGER_H

#include <string>

namespace Pure3X
{

class DebugManager
{
public:
    static bool Initialize();
    static void Shutdown();

    static bool IsReady();

    static void Log(const std::string& message);
    static void Warning(const std::string& message);
    static void Error(const std::string& message);

private:
    static bool ready;
};

} // namespace Pure3X

#endif
