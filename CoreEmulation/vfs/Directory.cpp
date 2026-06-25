#include "Directory.h"

#include <filesystem>

namespace fs = std::filesystem;

namespace Pure3X {
namespace VFS {

bool Directory::Exists(const std::string& path)
{
    return fs::exists(path) && fs::is_directory(path);
}

bool Directory::Create(const std::string& path)
{
    if (Exists(path))
        return true;

    return fs::create_directories(path);
}

bool Directory::Remove(const std::string& path)
{
    if (!Exists(path))
        return false;

    return fs::remove_all(path) > 0;
}

std::vector<std::string> Directory::List(const std::string& path)
{
    std::vector<std::string> list;

    if (!Exists(path))
        return list;

    for (const auto& entry : fs::directory_iterator(path))
    {
        list.push_back(entry.path().filename().string());
    }

    return list;
}

} // namespace VFS
} // namespace Pure3X
