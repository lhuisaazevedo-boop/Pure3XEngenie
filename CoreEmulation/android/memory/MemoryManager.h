#ifndef PURE3X_MEMORY_MANAGER_H
#define PURE3X_MEMORY_MANAGER_H

#include <cstddef>

namespace Pure3X
{

class MemoryManager
{
public:
    static bool Initialize();
    static void Shutdown();

    static bool IsReady();

    static void* Allocate(std::size_t size);
    static void Free(void* ptr);

    static std::size_t GetAllocatedMemory();

private:
    static bool ready;
    static std::size_t allocatedMemory;
};

}

#endif
