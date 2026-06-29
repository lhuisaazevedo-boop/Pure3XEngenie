#include "SwapchainManager.h"

#include <iostream>

namespace Pure3X
{

bool SwapchainManager::ready = false;

VkSwapchainKHR SwapchainManager::swapchain = VK_NULL_HANDLE;

bool SwapchainManager::Initialize()
{
    std::cout << "[SwapchainManager] Inicializando...\n";

    swapchain = VK_NULL_HANDLE;

    ready = true;

    std::cout << "[SwapchainManager] Pronto.\n";

    return true;
}

void SwapchainManager::Shutdown()
{
    std::cout << "[SwapchainManager] Encerrando...\n";

    swapchain = VK_NULL_HANDLE;
    ready = false;
}

bool SwapchainManager::IsReady()
{
    return ready;
}

VkSwapchainKHR SwapchainManager::GetSwapchain()
{
    return swapchain;
}

} // namespace Pure3X
