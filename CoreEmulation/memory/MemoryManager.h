#pragma once

#include <cstddef>
#include <cstdint>
#include <vector>

namespace Pure3X
{

class MemoryManager
{
public:
    MemoryManager();

    bool Initialize(std::size_t size);
    void Shutdown();

    uint8_t Read8(uint64_t address) const;
    void Write8(uint64_t address, uint8_t value);

    std::size_t GetSize() const;

    static void ShowInfo();

private:
    std::vector<uint8_t> m_memory;
};

} // namespace Pure3X
