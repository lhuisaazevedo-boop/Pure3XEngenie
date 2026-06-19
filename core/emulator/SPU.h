#pragma once

#include <cstdint>

namespace Pure3X
{

class SPU
{
public:
    SPU();

    bool Initialize();
    void Reset();
    void Execute();

    uint64_t GetCycleCount() const;

private:
    uint64_t m_cycleCount;
    bool m_initialized;
};

} // namespace Pure3X
