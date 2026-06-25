#ifndef PURE3X_DISC_H
#define PURE3X_DISC_H

#include <string>

namespace Pure3X
{

class Disc
{
public:
    Disc();

    bool Mount(const std::string& path);
    void Unmount();

    bool IsMounted() const;
    std::string GetPath() const;

private:
    bool m_mounted;
    std::string m_path;
};

}

#endif // PURE3X_DISC_H
