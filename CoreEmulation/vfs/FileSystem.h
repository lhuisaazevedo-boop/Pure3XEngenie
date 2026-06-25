#ifndef PURE3X_FILESYSTEM_H
#define PURE3X_FILESYSTEM_H

#include <string>
#include <vector>

namespace Pure3X {
namespace VFS {

class FileSystem {
public:
    static bool Exists(const std::string& path);
    static bool IsDirectory(const std::string& path);
    static std::vector<std::string> ListFiles(const std::string& path);
};

} // namespace VFS
} // namespace Pure3X

#endif
