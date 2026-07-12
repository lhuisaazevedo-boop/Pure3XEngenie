#pragma once

#include <cstdint>

namespace Pure3X::Cell::Memory {

struct MemoryMap {
    static constexpr uint64_t MAIN_RAM_START = 0x00000000;
    static constexpr uint64_t MAIN_RAM_END   = 0x0FFFFFFF;

    static constexpr uint64_t VRAM_START     = 0x10000000;
    static constexpr uint64_t VRAM_END       = 0x1FFFFFFF;

    static constexpr uint64_t MMIO_START     = 0x20000000;
    static constexpr uint64_t MMIO_END       = 0x2FFFFFFF;

    static constexpr uint64_t RSX_START      = 0x30000000;
    static constexpr uint64_t RSX_END        = 0x3FFFFFFF;
};

} // namespace Pure3X::Cell::Memory
