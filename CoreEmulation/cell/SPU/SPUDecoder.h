#pragma once

#include <cstdint>

namespace Pure3X::Cell::SPU {

class SPUDecoder {
public:
    SPUDecoder() = default;

    bool Initialize() { return true; }
    void Shutdown() {}

    uint32_t Decode(uint32_t instruction) {
        return instruction;
    }
};

} // namespace Pure3X::Cell::SPU
