#ifndef PURE3X_DIRECTORY_H
#define PURE3X_DIRECTORY_H

#include <string>
#include <vector>

namespace Pure3X {
namespace VFS {

class Directory {
public:
    static bool Exists(const std::string& path);
    static bool Create(const std::string& path);
    static bool Remove(const std::string& path);

    static std::vector<std::string> List(const std::string& path);
};

} // namespace VFS
} // namespace Pure3X

#endif
