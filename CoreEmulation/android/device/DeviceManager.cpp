#include "DeviceManager.h"

#include <iostream>

namespace Pure3X
{

bool DeviceManager::ready = false;

std::string DeviceManager::cpu = "Unknown";
std::string DeviceManager::gpu = "Unknown";
int DeviceManager::threads = 0;
int DeviceManager::ram = 0;

bool DeviceManager::Initialize()
{
    std::cout << "[DeviceManager] Inicializando...\n";

    cpu = "ARM64";
    gpu = "Vulkan Compatible GPU";
    threads = 8;
    ram = 8192;

    ready = true;

    std::cout << "[DeviceManager] CPU      : " << cpu << "\n";
    std::cout << "[DeviceManager] GPU      : " << gpu << "\n";
    std::cout << "[DeviceManager] Threads  : " << threads << "\n";
    std::cout << "[DeviceManager] RAM      : " << ram << " MB\n";

    return true;
}

void DeviceManager::Shutdown()
{
    std::cout << "[DeviceManager] Encerrando...\n";

    ready = false;
}

bool DeviceManager::IsReady()
{
    return ready;
}

std::string DeviceManager::GetCPU()
{
    return cpu;
}

std::string DeviceManager::GetGPU()
{
    return gpu;
}

int DeviceManager::GetThreads()
{
    return threads;
}

int DeviceManager::GetRAM()
{
    return ram;
}

} // namespace Pure3X
