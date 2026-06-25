#include "SyscallManager.h"

#include <iostream>

namespace Pure3X {

SyscallManager::SyscallManager()
{
}

bool SyscallManager::Initialize()
{
    std::cout << "[Syscalls] Inicializando Syscall Manager..." << std::endl;
    return true;
}

void SyscallManager::Shutdown()
{
    std::cout << "[Syscalls] Encerrando Syscall Manager..." << std::endl;
}

bool SyscallManager::Execute(uint64_t syscallId)
{
    std::cout << "[Syscalls] Executando syscall: 0x"
              << std::hex << syscallId
              << std::dec << std::endl;

    // Futuramente:
    // - Implementar syscalls LV2.
    // - Integrar com Kernel.
    // - Integrar com PPU Interpreter.
    // - Integrar com Memory Manager.
    // - Implementar gerenciamento de processos.
    // - Implementar gerenciamento de threads.

    return true;
}

} // namespace Pure3X
