#ifndef PURE3X_CELL_MEMORY_H
#define PURE3X_CELL_MEMORY_H

#include <cstddef>
#include <cstdint>

namespace Pure3X
{

class CellMemory
{
public:
    static bool Initialize();
    static void Shutdown();

    static bool IsReady();

    static void* Allocate(std::size_t size);
    static void Free(void* ptr);

    static std::size_t GetMemorySize();

private:
    static bool ready;
    static std::size_t memorySize;
};

} // namespace Pure3X

#endif
