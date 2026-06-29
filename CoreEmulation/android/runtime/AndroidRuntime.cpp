#include "AndroidRuntime.h"

#include "../bridge/AndroidBridge.h"
#include "../display/DisplayManager.h"
#include "../window/WindowManager.h"
#include "../audio/AudioManager.h"
#include "../filesystem/FileSystem.h"
#include "../../input/InputManager.h"
#include "../vulkan/VulkanAndroidSurface.h"

#include <iostream>

namespace Pure3X
{

bool AndroidRuntime::Initialize()
{
    std::cout << "\n========== Android Runtime ==========\n";

    // Android Bridge
    if (!AndroidBridge::Initialize())
        return false;

    // File System
    if (!FileSystem::Initialize())
        return false;

    // Display
    if (!DisplayManager::Initialize())
        return false;

    // Window
    if (!WindowManager::Initialize())
        return false;

    // Audio (Opcional)
    if (!AudioManager::Initialize())
    {
        std::cout << "[Runtime] Audio opcional indisponivel.\n";
    }

    // Input (Opcional)
    if (!InputManager::Initialize())
    {
        std::cout << "[Runtime] Input aguardando janela.\n";
    }

    // Vulkan Surface
    if (!VulkanAndroidSurface::Initialize())
        return false;

    std::cout << "[OK] Android Runtime inicializado.\n";
    std::cout << "=====================================\n\n";

    return true;
}

void AndroidRuntime::Shutdown()
{
    std::cout << "[Runtime] Encerrando modulos...\n";

    VulkanAndroidSurface::Shutdown();
    InputManager::Shutdown();
    AudioManager::Shutdown();
    WindowManager::Shutdown();
    DisplayManager::Shutdown();
    FileSystem::Shutdown();
    AndroidBridge::Shutdown();

    std::cout << "[OK] Android Runtime finalizado.\n";
}

} // namespace Pure3X
