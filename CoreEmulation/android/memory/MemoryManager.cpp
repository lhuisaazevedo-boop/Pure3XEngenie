#include "MemoryManager.h"

#include <cstdlib>
#include <iostream>

namespace Pure3X
{

bool MemoryManager::ready = false;
std::size_t MemoryManager::allocatedMemory = 0;

bool MemoryManager::Initialize()
{
    std::cout << "[MemoryManager] Inicializando...\n";

    ready = true;

    std::cout << "[MemoryManager] Sistema pronto.\n";

    return true;
}

void MemoryManager::Shutdown()
{
    std::cout << "[MemoryManager] Encerrando...\n";

    ready = false;
    allocatedMemory = 0;
}

bool MemoryManager::IsReady()
{
    return ready;
}

void* MemoryManager::Allocate(std::size_t size)
{
    void* memory = std::malloc(size);

    if (memory)
        allocatedMemory += size;

    return memory;
}

void MemoryManager::Free(void* ptr)
{
    if (ptr)
        std::free(ptr);
}

std::size_t MemoryManager::GetAllocatedMemory()
{
    return allocatedMemory;
}

} // namespace Pure3X
