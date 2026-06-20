#ifndef PURE3X_MEMORYMAP_H
#define PURE3X_MEMORYMAP_H

#include <cstdint>
#include <unordered_map>

namespace Pure3X {

class MemoryMap {
public:
    MemoryMap();

    bool Initialize();
    void Shutdown();

    bool MapMemory(uint64_t ppeAddress, uint64_t hostAddress);
    bool UnmapMemory(uint64_t ppeAddress);

    bool IsMapped(uint64_t ppeAddress) const;
    uint64_t GetHostAddress(uint64_t ppeAddress) const;

    void Clear();

private:
    std::unordered_map<uint64_t, uint64_t> m_memoryMap;
};

} // namespace Pure3X

#endif // PURE3X_MEMORYMAP_H
