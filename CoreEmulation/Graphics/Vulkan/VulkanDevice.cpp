#include "VulkanDevice.h"

#include <iostream>
#include <vector>

namespace Pure3X {

VkPhysicalDevice VulkanDevice::physicalDevice = VK_NULL_HANDLE;
VkDevice VulkanDevice::logicalDevice = VK_NULL_HANDLE;
VkQueue VulkanDevice::graphicsQueue = VK_NULL_HANDLE;

bool VulkanDevice::Initialize(VkInstance instance) {
    uint32_t deviceCount = 0;

    vkEnumeratePhysicalDevices(instance, &deviceCount, nullptr);

    if (deviceCount == 0) {
        std::cerr << "[Vulkan] Nenhuma GPU compatível encontrada." << std::endl;
        return false;
    }

    std::vector<VkPhysicalDevice> devices(deviceCount);
    vkEnumeratePhysicalDevices(instance, &deviceCount, devices.data());

    physicalDevice = devices[0];

    VkPhysicalDeviceProperties properties;
    vkGetPhysicalDeviceProperties(physicalDevice, &properties);

    std::cout << "[Vulkan] GPU encontrada: "
              << properties.deviceName << std::endl;

    float queuePriority = 1.0f;

    VkDeviceQueueCreateInfo queueInfo{};
    queueInfo.sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
    queueInfo.queueFamilyIndex = 0;
    queueInfo.queueCount = 1;
    queueInfo.pQueuePriorities = &queuePriority;

    VkDeviceCreateInfo createInfo{};
    createInfo.sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
    createInfo.queueCreateInfoCount = 1;
    createInfo.pQueueCreateInfos = &queueInfo;

    if (vkCreateDevice(physicalDevice, &createInfo, nullptr, &logicalDevice) != VK_SUCCESS) {
        std::cerr << "[Vulkan] Erro ao criar dispositivo lógico." << std::endl;
        return false;
    }

    vkGetDeviceQueue(logicalDevice, 0, 0, &graphicsQueue);

    std::cout << "[Vulkan] Dispositivo lógico criado." << std::endl;

    return true;
}

void VulkanDevice::Shutdown() {
    if (logicalDevice != VK_NULL_HANDLE) {
        vkDestroyDevice(logicalDevice, nullptr);
        logicalDevice = VK_NULL_HANDLE;
    }

    physicalDevice = VK_NULL_HANDLE;
    graphicsQueue = VK_NULL_HANDLE;
}

VkPhysicalDevice VulkanDevice::GetPhysicalDevice() {
    return physicalDevice;
}

VkDevice VulkanDevice::GetDevice() {
    return logicalDevice;
}

} // namespace Pure3X
