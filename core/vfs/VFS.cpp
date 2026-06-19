#include "VFS.h"

#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

namespace Pure3X {
namespace VFS {

static std::string g_mountPoint;

bool Initialize()
{
    std::cout << "[VFS] Inicializando Virtual File System...\n";
    g_mountPoint.clear();
    return true;
}

bool Mount(const std::string& path)
{
    if (!fs::exists(path))
    {
        std::cout << "[VFS] Caminho inexistente: " << path << "\n";
        return false;
    }

    g_mountPoint = path;

    std::cout << "[VFS] Unidade montada:\n";
    std::cout << "      " << g_mountPoint << "\n";

    return true;
}

bool Unmount()
{
    if (g_mountPoint.empty())
        return false;

    std::cout << "[VFS] Desmontando unidade...\n";

    g_mountPoint.clear();
    return true;
}

bool Exists(const std::string& path)
{
    return fs::exists(path);
}

std::string GetMountPoint()
{
    return g_mountPoint;
}

void Shutdown()
{
    std::cout << "[VFS] Encerrando Virtual File System...\n";
    g_mountPoint.clear();
}

} // namespace VFS
} // namespace Pure3X
