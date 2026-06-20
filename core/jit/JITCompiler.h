#ifndef PURE3X_JITCOMPILER_H
#define PURE3X_JITCOMPILER_H

#include <cstdint>

namespace Pure3X {

class JITCompiler {
public:
    JITCompiler();

    bool Initialize();
    bool CompileBlock(uint64_t address);
    void Shutdown();

private:
    bool m_initialized;
};

} // namespace Pure3X

#endif // PURE3X_JITCOMPILER_H
