#ifndef PURE3X_FILE_SYSTEM_H
#define PURE3X_FILE_SYSTEM_H

#include <string>

namespace Pure3X
{

class FileSystem
{
public:
    static bool Initialize();

    static void Shutdown();

    static bool FileExists(const std::string& path);

    static bool CreateDirectory(const std::string& path);

    static std::string GetInternalPath();

    static std::string GetExternalPath();

private:
    static bool ready;
};

}

#endif
