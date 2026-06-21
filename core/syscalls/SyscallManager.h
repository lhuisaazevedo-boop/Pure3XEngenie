#ifndef PURE3X_SYSCALL_MANAGER_H
#define PURE3X_SYSCALL_MANAGER_H

#include <cstdint>

namespace Pure3X {

class SyscallManager {
public:
    SyscallManager();

    bool Initialize();
    void Shutdown();

    bool Execute(uint64_t syscallId);
};

} // namespace Pure3X

#endif
