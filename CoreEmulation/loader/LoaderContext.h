#ifndef PURE3X_LOADER_CONTEXT_H
#define PURE3X_LOADER_CONTEXT_H

#include <cstdint>
#include <string>

namespace Pure3X {

enum class ExecutableType {
    Unknown,
    ELF,
    SELF,
    SPRX
};

class LoaderContext {
public:
    LoaderContext();

    void Reset();

    std::string filePath;
    ExecutableType type;
    uint64_t imageBase;
    uint64_t imageSize;
};

} // namespace Pure3X

#endif // PURE3X_LOADER_CONTEXT_H
