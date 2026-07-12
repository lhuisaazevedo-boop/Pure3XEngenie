#pragma once

#include <cstdint>

namespace Pure3X::Cell::Memory {

class DMAController {
public:
    DMAController() = default;
    ~DMAController() = default;

    bool Initialize();
    void Shutdown();

    bool Copy(uint64_t src, uint64_t dst, uint64_t size);
    bool Fill(uint64_t dst, uint8_t value, uint64_t size);

private:
    bool mInitialized = false;
};

} // namespace Pure3X::Cell::Memory
