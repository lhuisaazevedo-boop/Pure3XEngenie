#pragma once

#include <cstdint>

namespace Pure3X::Cell::Memory {

enum class MemoryPermission : uint8_t {
    None    = 0,
    Read    = 1 << 0,
    Write   = 1 << 1,
    Execute = 1 << 2,
    ReadWrite = Read | Write,
    ReadExecute = Read | Execute,
    All = Read | Write | Execute
};

struct MemoryRegion {
    uint64_t start;
    uint64_t size;
    MemoryPermission permission;
};

} // namespace Pure3X::Cell::Memory

