#include "Disc.h"

namespace Pure3X
{

Disc::Disc()
    : m_mounted(false)
{
}

bool Disc::Mount(const std::string& path)
{
    m_path = path;
    m_mounted = true;
    return true;
}

void Disc::Unmount()
{
    m_path.clear();
    m_mounted = false;
}

bool Disc::IsMounted() const
{
    return m_mounted;
}

std::string Disc::GetPath() const
{
    return m_path;
}

} // namespace Pure3X
