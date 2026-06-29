#include "NetworkManager.h"

#include <iostream>

namespace Pure3X
{

bool NetworkManager::ready = false;
bool NetworkManager::connected = false;

bool NetworkManager::Initialize()
{
    std::cout << "[NetworkManager] Inicializando...\n";

    ready = true;

    std::cout << "[NetworkManager] Sistema pronto.\n";

    return true;
}

void NetworkManager::Shutdown()
{
    std::cout << "[NetworkManager] Encerrando...\n";

    connected = false;
    ready = false;
}

bool NetworkManager::IsReady()
{
    return ready;
}

bool NetworkManager::Connect(const std::string& host, int port)
{
    if (!ready)
        return false;

    std::cout << "[NetworkManager] Conectando em "
              << host << ":" << port << "\n";

    connected = true;

    return true;
}

void NetworkManager::Disconnect()
{
    if (!connected)
        return;

    std::cout << "[NetworkManager] Desconectado.\n";

    connected = false;
}

bool NetworkManager::IsConnected()
{
    return connected;
}

} // namespace Pure3X
