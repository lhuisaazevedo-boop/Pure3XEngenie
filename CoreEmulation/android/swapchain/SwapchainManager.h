#ifndef PURE3X_SWAPCHAIN_MANAGER_H
#define PURE3X_SWAPCHAIN_MANAGER_H

#include <vulkan/vulkan.h>

namespace Pure3X
{

class SwapchainManager
{
public:
    static bool Initialize();
    static void Shutdown();

    static bool IsReady();

    static VkSwapchainKHR GetSwapchain();

private:
    static bool ready;
    static VkSwapchainKHR swapchain;
};

} // namespace Pure3X

#endif
