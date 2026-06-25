#ifndef PURE3X_VFS_H
#define PURE3X_VFS_H

#include <string>

namespace Pure3X {
namespace VFS {

bool Initialize();

bool Mount(const std::string& path);

bool Unmount();

bool Exists(const std::string& path);

std::string GetMountPoint();

void Shutdown();

} // namespace VFS
} // namespace Pure3X

#endif
