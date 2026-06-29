#ifndef PURE3X_VULKAN_SWAPCHAIN_H
#define PURE3X_VULKAN_SWAPCHAIN_H

#include <vulkan/vulkan.h>

namespace Pure3X {

class VulkanSwapchain {
public:
    static bool Initialize(
        VkPhysicalDevice physicalDevice,
        VkDevice device
    );

    static void Shutdown();

    static VkSwapchainKHR GetSwapchain();

private:
    static VkSwapchainKHR swapchain;

    static VkFormat imageFormat;
    static VkExtent2D extent;
};

} // namespace Pure3X

#endif // PURE3X_VULKAN_SWAPCHAIN_H
