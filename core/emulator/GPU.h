#pragma once

#include <cstdint>

namespace Pure3X
{

class GPU
{
public:
    GPU();

    bool Initialize();
    void Reset();
    void RenderFrame();

    uint64_t GetFrameCount() const;

private:
    uint64_t m_frameCount;
    bool m_initialized;
};

} // namespace Pure3X
