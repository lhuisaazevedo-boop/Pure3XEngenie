#include "MemoryAllocator.h"

#include <cstdlib>
#include <iostream>

namespace Pure3X {

MemoryAllocator::MemoryAllocator()
{
}

void* MemoryAllocator::Allocate(std::size_t size)
{
    std::cout << "[Memory] Alocando " << size << " bytes." << std::endl;
    return std::malloc(size);
}

void MemoryAllocator::Free(void* ptr)
{
    std::cout << "[Memory] Liberando memória." << std::endl;
    std::free(ptr);
}

} // namespace Pure3X
