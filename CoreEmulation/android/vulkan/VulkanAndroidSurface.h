#ifndef PURE3X_VULKAN_ANDROID_SURFACE_H
#define PURE3X_VULKAN_ANDROID_SURFACE_H

#include <vulkan/vulkan.h>

namespace Pure3X
{

class VulkanAndroidSurface
{
public:
    static bool Initialize();
    static void Shutdown();

    static VkSurfaceKHR GetSurface();

private:
    static VkSurfaceKHR surface;
};

}

#endif
