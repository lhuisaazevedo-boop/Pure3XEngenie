#include "AndroidCore.h"

#include "../config/AndroidConfig.h"
#include "../system/SystemManager.h"
#include "../device/DeviceManager.h"
#include "../graphics/GraphicsManager.h"
#include "../swapchain/SwapchainManager.h"
#include "../shaders/ShaderManager.h"
#include "../thread/ThreadManager.h"
#include "../network/NetworkManager.h"
#include "../services/ServiceManager.h"
#include "../debug/DebugManager.h"
#include "../logs/LogManager.h"

#include <iostream>

namespace Pure3X
{

bool AndroidCore::Initialize()
{
    std::cout << "[AndroidCore] Inicializando biblioteca...\n";

    AndroidConfig::Initialize();
    SystemManager::Initialize();
    DeviceManager::Initialize();
    GraphicsManager::Initialize();
    SwapchainManager::Initialize();
    ShaderManager::Initialize();
    ThreadManager::Initialize();
    NetworkManager::Initialize();
    ServiceManager::Initialize();
    DebugManager::Initialize();
    LogManager::Initialize();

    std::cout << "[AndroidCore] Biblioteca pronta.\n";

    return true;
}

void AndroidCore::Shutdown()
{
    LogManager::Shutdown();
    DebugManager::Shutdown();
    ServiceManager::Shutdown();
    NetworkManager::Shutdown();
    ThreadManager::Shutdown();
    ShaderManager::Shutdown();
    SwapchainManager::Shutdown();
    GraphicsManager::Shutdown();
    DeviceManager::Shutdown();
    SystemManager::Shutdown();
    AndroidConfig::Shutdown();

    std::cout << "[AndroidCore] Biblioteca finalizada.\n";
}

} // namespace Pure3X
