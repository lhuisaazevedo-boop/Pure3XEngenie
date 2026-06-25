#ifndef PURE3X_EXECUTABLE_LOADER_H
#define PURE3X_EXECUTABLE_LOADER_H

#include <string>

namespace Pure3X {

class ExecutableLoader {
public:
    ExecutableLoader();

    bool Initialize();
    bool Load(const std::string& path);
    void Reset();
    void Shutdown();

private:
    std::string loadedFile;
};

} // namespace Pure3X

#endif // PURE3X_EXECUTABLE_LOADER_H
