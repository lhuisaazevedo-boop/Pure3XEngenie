#ifndef PURE3X_VIRTUAL_MEMORY_H
#define PURE3X_VIRTUAL_MEMORY_H

#include <cstdint>

namespace Pure3X {

class VirtualMemory {
public:
    VirtualMemory();

    bool Initialize();
    void Reset();
    void Shutdown();

    uint64_t Translate(uint64_t virtualAddress) const;
};

} // namespace Pure3X

#endif
