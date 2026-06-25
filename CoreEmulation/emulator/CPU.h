#ifndef PURE3X_CPU_H
#define PURE3X_CPU_H

#include "../jit/JITCompiler.h"

#include <cstdint>

namespace Pure3X {

class CPU {
public:
    CPU();

    bool Initialize();
    void Shutdown();

    bool ExecuteInstruction(uint64_t address);

    void EnableJIT(bool enable);

private:
    bool m_useJIT;
    JITCompiler m_jit;
};

} // namespace Pure3X

#endif // PURE3X_CPU_H
