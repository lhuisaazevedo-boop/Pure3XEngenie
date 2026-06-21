#ifndef PURE3X_MEMORY_BUS_H
#define PURE3X_MEMORY_BUS_H

#include <cstdint>

namespace Pure3X {

class MemoryBus {
public:
    MemoryBus();

    bool Initialize();
    void Shutdown();

    uint8_t Read8(uint64_t address);
    void Write8(uint64_t address, uint8_t value);

private:
    bool m_initialized;
};

}

#endif
