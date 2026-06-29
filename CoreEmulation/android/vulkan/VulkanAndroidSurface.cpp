#include "VulkanAndroidSurface.h"

#include "../bridge/AndroidBridge.h"
#include "../../Graphics/Vulkan/VulkanContext.h"

#include <vulkan/vulkan.h>

#include <iostream>

namespace Pure3X
{

VkSurfaceKHR VulkanAndroidSurface::surface = VK_NULL_HANDLE;

bool VulkanAndroidSurface::Initialize()
{
    std::cout << "[VulkanSurface] Inicializando...\n";

    if (!AndroidBridge::IsReady())
    {
        std::cerr << "[ERRO] AndroidBridge nao inicializado.\n";
        return false;
    }

    if (VulkanContext::GetInstance() == VK_NULL_HANDLE)
    {
        std::cerr << "[ERRO] Vulkan Instance invalida.\n";
        return false;
    }

    // Futuramente será utilizada:
    // VkAndroidSurfaceCreateInfoKHR
    // juntamente com ANativeWindow.

    surface = VK_NULL_HANDLE;

    std::cout << "[OK] VulkanAndroidSurface preparada para Android.\n";

    return true;
}

void VulkanAndroidSurface::Shutdown()
{
    std::cout << "[VulkanSurface] Encerrando...\n";

    if (surface != VK_NULL_HANDLE)
    {
        vkDestroySurfaceKHR(
            VulkanContext::GetInstance(),
            surface,
            nullptr);

        surface = VK_NULL_HANDLE;
    }

    std::cout << "[OK] Surface liberada.\n";
}

VkSurfaceKHR VulkanAndroidSurface::GetSurface()
{
    return surface;
}

} // namespace Pure3X
