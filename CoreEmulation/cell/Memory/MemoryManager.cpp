#include "MemoryManager.h"

#include <cstring>
#include <mutex>
#include <shared_mutex>

namespace Pure3X::Cell::Memory {

MemoryManager::MemoryManager() = default;

MemoryManager::~MemoryManager() = default;

bool MemoryManager::Initialize() {
    mMainRAM.resize(MAIN_RAM_SIZE);
    mVideoRAM.resize(VRAM_SIZE);
    return true;
}

void MemoryManager::Shutdown() {
    mMainRAM.clear();
    mVideoRAM.clear();
}

bool MemoryManager::Read(uint64_t address, void* dst, size_t size) {
    if (!IsValidAddress(address, size))
        return false;

    std::shared_lock lock(mMemoryLock);
    std::memcpy(dst, &mMainRAM[address], size);
    return true;
}

bool MemoryManager::Write(uint64_t address, const void* src, size_t size) {
    if (!IsValidAddress(address, size))
        return false;

    std::unique_lock lock(mMemoryLock);
    std::memcpy(&mMainRAM[address], src, size);
    return true;
}

bool MemoryManager::DMARead(uint64_t address, void* dst, size_t size) {
    return Read(address, dst, size);
}

bool MemoryManager::DMAWrite(uint64_t address, const void* src, size_t size) {
    return Write(address, src, size);
}

void MemoryManager::FlushCache() {
}

void MemoryManager::InvalidateCache() {
}

bool MemoryManager::IsValidAddress(uint64_t address, size_t size) const {
    return (address + size) <= MAIN_RAM_SIZE;
}

} // namespace Pure3X::Cell::Memory
