#ifndef PURE3X_NETWORK_MANAGER_H
#define PURE3X_NETWORK_MANAGER_H

#include <string>

namespace Pure3X
{

class NetworkManager
{
public:
    static bool Initialize();
    static void Shutdown();

    static bool IsReady();

    static bool Connect(const std::string& host, int port);
    static void Disconnect();

    static bool IsConnected();

private:
    static bool ready;
    static bool connected;
};

} // namespace Pure3X

#endif
