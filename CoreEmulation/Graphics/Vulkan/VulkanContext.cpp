#include "VulkanContext.h"
#include "../../android/vulkan/VulkanAndroidSurface.h"

#include <vulkan/vulkan.h>
#include <vulkan/vulkan_android.h>

#include <iostream>
#include <vector>
#include <cstdint>

namespace Pure3X
{

VkInstance VulkanContext::instance = VK_NULL_HANDLE;
VkPhysicalDevice VulkanContext::physicalDevice = VK_NULL_HANDLE;
VkDevice VulkanContext::device = VK_NULL_HANDLE;
VkSurfaceKHR VulkanContext::surface = VK_NULL_HANDLE;
VkSwapchainKHR VulkanContext::swapchain = VK_NULL_HANDLE;

void VulkanContext::CreateInstance()
{
    std::cout << "[VulkanContext] Criando VkInstance...\n";

    VkApplicationInfo app{};
    app.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    app.pApplicationName = "Pure3XEngenie";
    app.applicationVersion = VK_MAKE_VERSION(0, 2, 2);
    app.pEngineName = "Pure3XEngenie";
    app.engineVersion = VK_MAKE_VERSION(0, 2, 2);
    app.apiVersion = VK_API_VERSION_1_1;

    const char* extensions[] =
    {
        VK_KHR_SURFACE_EXTENSION_NAME,
        VK_KHR_ANDROID_SURFACE_EXTENSION_NAME
    };

    VkInstanceCreateInfo create{};
    create.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    create.pApplicationInfo = &app;
    create.enabledExtensionCount = 2;
    create.ppEnabledExtensionNames = extensions;

    if (vkCreateInstance(
            &create,
            nullptr,
            &instance) != VK_SUCCESS)
    {
        std::cerr << "[ERRO] Falha ao criar VkInstance.\n";
        instance = VK_NULL_HANDLE;
        return;
    }

    std::cout << "[OK] VkInstance criada.\n";
}

void VulkanContext::SelectPhysicalDevice()
{
    std::cout << "[VulkanContext] Selecionando GPU...\n";

    uint32_t deviceCount = 0;
    vkEnumeratePhysicalDevices(
        instance,
        &deviceCount,
        nullptr);

    if (deviceCount == 0)
    {
        std::cerr << "[ERRO] Nenhuma GPU Vulkan encontrada.\n";
        return;
    }

    std::vector<VkPhysicalDevice> devices(deviceCount);

    vkEnumeratePhysicalDevices(
        instance,
        &deviceCount,
        devices.data());

    for (const auto& gpu : devices)
    {
        VkPhysicalDeviceProperties properties{};
        vkGetPhysicalDeviceProperties(
            gpu,
            &properties);

    std::cout
        << "[OK] GPU selecionada: "
        << properties.deviceName
        << "\n";

    physicalDevice = gpu;
    break;
}

if (physicalDevice == VK_NULL_HANDLE)
{
    std::cerr << "[ERRO] Falha ao selecionar GPU.\n";
    return;
}

} // fecha SelectPhysicalDevice()

void VulkanContext::CreateLogicalDevice()
{
    std::cout << "[VulkanContext] Criando dispositivo lógico...\n";

    uint32_t familyCount = 0;

    vkGetPhysicalDeviceQueueFamilyProperties(
        physicalDevice,
        &familyCount,
        nullptr);

    std::vector<VkQueueFamilyProperties> families(familyCount);

    vkGetPhysicalDeviceQueueFamilyProperties(
        physicalDevice,
        &familyCount,
        families.data());

    uint32_t graphicsFamily = UINT32_MAX;

    for (uint32_t i = 0; i < familyCount; i++)
    {
        if (families[i].queueFlags & VK_QUEUE_GRAPHICS_BIT)
        {
            graphicsFamily = i;
            break;
        }
    }

    if (graphicsFamily == UINT32_MAX)
    {
        std::cerr << "[ERRO] Nenhuma fila gráfica encontrada.\n";
        return;
    }

    float priority = 1.0f;

    VkDeviceQueueCreateInfo queueInfo{};
    queueInfo.sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
    queueInfo.queueFamilyIndex = graphicsFamily;
    queueInfo.queueCount = 1;
    queueInfo.pQueuePriorities = &priority;

    VkPhysicalDeviceFeatures features{};

    const char* extensions[] =
    {
        VK_KHR_SWAPCHAIN_EXTENSION_NAME
    };

    VkDeviceCreateInfo deviceInfo{};
    deviceInfo.sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
    deviceInfo.queueCreateInfoCount = 1;
    deviceInfo.pQueueCreateInfos = &queueInfo;
    deviceInfo.pEnabledFeatures = &features;
    deviceInfo.enabledExtensionCount = 1;
    deviceInfo.ppEnabledExtensionNames = extensions;

    if (vkCreateDevice(
            physicalDevice,
            &deviceInfo,
            nullptr,
            &device) != VK_SUCCESS)
    {
        std::cerr << "[ERRO] Falha ao criar VkDevice.\n";
        device = VK_NULL_HANDLE;
        return;
    }

    std::cout << "[OK] Logical Device criado.\n";
}
void VulkanContext::CreateSurface()
{
    std::cout << "[VulkanContext] Criando Vulkan Surface...\n";

    // VulkanAndroidSurface::SetInstance();

    if (!VulkanAndroidSurface::Initialize())
    {
        std::cerr << "[ERRO] Falha ao criar Vulkan Surface.\n";
        surface = VK_NULL_HANDLE;
        return;
    }

    surface = VulkanAndroidSurface::GetSurface();

    if (surface == VK_NULL_HANDLE)
    {
        std::cerr << "[ERRO] Surface inválida.\n";
        return;
    }

    std::cout << "[OK] Vulkan Surface criada.\n";
}
void VulkanContext::CreateSwapchain()
{
    std::cout << "[VulkanContext] Criando Swapchain...\n";

    if (device == VK_NULL_HANDLE)
    {
        std::cerr << "[ERRO] VkDevice inválido.\n";
        return;
    }

    if (surface == VK_NULL_HANDLE)
    {
        std::cerr << "[ERRO] VkSurfaceKHR inválida.\n";
        return;
    }

    // TODO:
    // vkGetPhysicalDeviceSurfaceCapabilitiesKHR(...)
    // vkGetPhysicalDeviceSurfaceFormatsKHR(...)
    // vkGetPhysicalDeviceSurfacePresentModesKHR(...)
    // vkCreateSwapchainKHR(...)

    swapchain = VK_NULL_HANDLE;

    std::cout << "[OK] Swapchain preparada.\n";
}
bool VulkanContext::Initialize()
{
    std::cout << "\n========== Vulkan Context ==========\n";

    CreateInstance();

    if (instance == VK_NULL_HANDLE)
        return false;

    SelectPhysicalDevice();

    if (physicalDevice == VK_NULL_HANDLE)
        return false;

    CreateLogicalDevice();

    if (device == VK_NULL_HANDLE)
        return false;

    CreateSurface();

    if (surface == VK_NULL_HANDLE)
        return false;

    CreateSwapchain();

    std::cout << "[OK] Vulkan Context inicializado.\n";
    std::cout << "====================================\n";

    return true;
}
void VulkanContext::BeginFrame()
{
    if (device == VK_NULL_HANDLE)
        return;

    std::cout << "[Frame] Begin Frame\n";
}

void VulkanContext::EndFrame()
{
    if (device == VK_NULL_HANDLE)
        return;

    std::cout << "[Frame] End Frame\n";
}
void VulkanContext::Shutdown()
{
    std::cout << "[VulkanContext] Encerrando Vulkan...\n";

    if (swapchain != VK_NULL_HANDLE)
    {
        vkDestroySwapchainKHR(device, swapchain, nullptr);
        swapchain = VK_NULL_HANDLE;
    }

    VulkanAndroidSurface::Shutdown();
    surface = VK_NULL_HANDLE;

    if (device != VK_NULL_HANDLE)
    {
        vkDestroyDevice(device, nullptr);
        device = VK_NULL_HANDLE;
    }

    if (instance != VK_NULL_HANDLE)
    {
        vkDestroyInstance(instance, nullptr);
        instance = VK_NULL_HANDLE;
    }

    std::cout << "[OK] Vulkan finalizado.\n";
}
VkInstance VulkanContext::GetInstance()
{
    return instance;
}

VkPhysicalDevice VulkanContext::GetPhysicalDevice()
{
    return physicalDevice;
}

VkDevice VulkanContext::GetDevice()
{
    return device;
}

} // namespace Pure3X
