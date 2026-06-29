#ifndef PURE3X_SERVICE_MANAGER_H
#define PURE3X_SERVICE_MANAGER_H

#include <string>

namespace Pure3X
{

class ServiceManager
{
public:
    static bool Initialize();
    static void Shutdown();

    static bool IsReady();

    static void StartService(const std::string& serviceName);
    static void StopService(const std::string& serviceName);

private:
    static bool ready;
};

} // namespace Pure3X

#endif
