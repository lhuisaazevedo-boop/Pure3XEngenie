#ifndef PURE3X_VULKAN_DEVICE_H
#define PURE3X_VULKAN_DEVICE_H

#include <vulkan/vulkan.h>

namespace Pure3X {

class VulkanDevice {
public:
    static bool Initialize(VkInstance instance);
    static void Shutdown();

    static VkPhysicalDevice GetPhysicalDevice();
    static VkDevice GetDevice();

private:
    static VkPhysicalDevice physicalDevice;
    static VkDevice logicalDevice;
    static VkQueue graphicsQueue;
};

} // namespace Pure3X

#endif // PURE3X_VULKAN_DEVICE_H
