#include "VulkanSwapchain.h"

#include <iostream>

namespace Pure3X {

VkSwapchainKHR VulkanSwapchain::swapchain = VK_NULL_HANDLE;
VkFormat VulkanSwapchain::imageFormat = VK_FORMAT_B8G8R8A8_UNORM;
VkExtent2D VulkanSwapchain::extent = {0, 0};

bool VulkanSwapchain::Initialize(
    VkPhysicalDevice physicalDevice,
    VkDevice device)
{
    (void)physicalDevice;
    (void)device;

    std::cout << "[Vulkan] Inicializando Swapchain..." << std::endl;

    // TODO:
    // Selecionar Surface
    // Escolher formato da imagem
    // Definir modo de apresentação
    // Criar Swapchain
    // Criar Image Views

    std::cout << "[Vulkan] Estrutura da Swapchain preparada." << std::endl;

    return true;
}

void VulkanSwapchain::Shutdown()
{
    if (swapchain != VK_NULL_HANDLE)
    {
        vkDestroySwapchainKHR(
            VK_NULL_HANDLE,
            swapchain,
            nullptr
        );

        swapchain = VK_NULL_HANDLE;
    }

    std::cout << "[Vulkan] Swapchain finalizada." << std::endl;
}

VkSwapchainKHR VulkanSwapchain::GetSwapchain()
{
    return swapchain;
}

} // namespace Pure3X
