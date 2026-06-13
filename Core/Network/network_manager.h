#pragma once

namespace Network {

class NetworkManager {
public:
    static void checkConnection();
    static void getIPAddress();
    static void listOpenPorts();
};

}
