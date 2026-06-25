#ifndef PURE3X_MEMORY_MAP_H
#define PURE3X_MEMORY_MAP_H

#include <cstdint>

namespace Pure3X {

class MemoryMap {
public:
    MemoryMap();

    bool Initialize();
    void Reset();
    void Shutdown();

    uint64_t GetMainMemorySize() const;

private:
    uint64_t mainMemorySize;
};

}

#endif
