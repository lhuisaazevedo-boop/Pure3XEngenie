#pragma once

#include <cstdint>

namespace Pure3X
{

class CPU
{
public:
    CPU();

    bool Initialize();
    void Reset();
    void ExecuteCycle();

    uint64_t GetPC() const;
    void SetPC(uint64_t pc);

private:
    uint64_t m_pc;
    bool m_initialized;
};

} // namespace Pure3X
