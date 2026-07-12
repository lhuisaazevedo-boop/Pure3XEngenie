#pragma once

#include <cstdint>
#include <vector>
#include <shared_mutex>
#include <cstring>

namespace Pure3X::Cell::Memory {

class MemoryManager {
public:
    static constexpr uint64_t MAIN_RAM_SIZE = 0x10000000;   // 256 MB
    static constexpr uint64_t VRAM_SIZE     = 0x10000000;   // 256 MB
    static constexpr uint64_t TOTAL_MEMORY  = 0xC8000000;   // 3.2 GB (espaço lógico)

    MemoryManager();
    ~MemoryManager();

    bool Initialize();
    void Shutdown();

    bool Read(uint64_t address, void* dst, size_t size);
    bool Write(uint64_t address, const void* src, size_t size);

    bool DMARead(uint64_t address, void* dst, size_t size);
    bool DMAWrite(uint64_t address, const void* src, size_t size);

    void FlushCache();
    void InvalidateCache();

    bool IsValidAddress(uint64_t address, size_t size) const;

private:
    std::vector<uint8_t> mMainRAM;
    std::vector<uint8_t> mVideoRAM;

    mutable std::shared_mutex mMemoryLock;
};

} // namespace Pure3X::Cell::Memory
