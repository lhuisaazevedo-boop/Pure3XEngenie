#pragma once

#include <vulkan/vulkan.h>

namespace Pure3X
{

class VulkanContext
{
public:
    // Inicialização
    static bool Initialize();
    static void Shutdown();

    // Renderização
    static void BeginFrame();
    static void EndFrame();

    // Acesso aos objetos Vulkan
    static VkInstance GetInstance();
    static VkPhysicalDevice GetPhysicalDevice();
    static VkDevice GetDevice();

private:
    // Etapas da criação
    static void CreateInstance();
    static void SelectPhysicalDevice();
    static void CreateLogicalDevice();
    static void CreateSurface();
    static void CreateSwapchain();

    // Objetos Vulkan
    static VkInstance instance;
    static VkPhysicalDevice physicalDevice;
    static VkDevice device;
    static VkSurfaceKHR surface;
    static VkSwapchainKHR swapchain;
};

} // namespace Pure3X
