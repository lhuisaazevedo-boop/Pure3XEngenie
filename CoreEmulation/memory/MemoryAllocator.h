#ifndef PURE3X_MEMORY_ALLOCATOR_H
#define PURE3X_MEMORY_ALLOCATOR_H

#include <cstddef>

namespace Pure3X {

class MemoryAllocator {
public:
    MemoryAllocator();

    void* Allocate(std::size_t size);
    void Free(void* ptr);
};

} // namespace Pure3X

#endif
