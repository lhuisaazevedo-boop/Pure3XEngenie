#include "FileSystem.h"

#include <filesystem>

namespace fs = std::filesystem;

namespace Pure3X {
namespace VFS {

bool FileSystem::Exists(const std::string& path)
{
    return fs::exists(path);
}

bool FileSystem::IsDirectory(const std::string& path)
{
    return fs::is_directory(path);
}

std::vector<std::string> FileSystem::ListFiles(const std::string& path)
{
    std::vector<std::string> files;

    if (!fs::exists(path))
        return files;

    for (const auto& entry : fs::directory_iterator(path))
    {
        files.push_back(entry.path().filename().string());
    }

    return files;
}

} // namespace VFS
} // namespace Pure3X
