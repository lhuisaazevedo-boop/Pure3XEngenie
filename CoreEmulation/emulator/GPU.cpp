#include "GPU.h"

#include <iostream>

namespace Pure3X
{

GPU::GPU()
    : m_frameCount(0),
      m_initialized(false)
{
}

bool GPU::Initialize()
{
    m_initialized = true;
    std::cout << "[GPU] Inicializada\n";
    return true;
}

void GPU::Reset()
{
    m_frameCount = 0;
    std::cout << "[GPU] Reset\n";
}

void GPU::RenderFrame()
{
    if (!m_initialized)
        return;

    ++m_frameCount;
}

uint64_t GPU::GetFrameCount() const
{
    return m_frameCount;
}

} // namespace Pure3X
