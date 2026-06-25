#pragma once

#include <cstddef>
#include <cstdint>
#include <vector>

namespace Pure3X
{

class Memory
{
public:
    Memory();

    bool Initialize(std::size_t size);
    void Reset();

    uint8_t Read8(uint64_t address) const;
    void Write8(uint64_t address, uint8_t value);

    std::size_t GetSize() const;

private:
    std::vector<uint8_t> m_memory;
    bool m_initialized;
};

} // namespace Pure3X
