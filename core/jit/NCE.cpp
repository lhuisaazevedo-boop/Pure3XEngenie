#include "NCE.h"

#include <iostream>

namespace Pure3X {

NCE::NCE()
    : m_initialized(false)
{
}

bool NCE::Initialize()
{
    std::cout << "[NCE] Inicializando Native Code Execution..."
              << std::endl;

    m_initialized = true;

    return true;
}

void NCE::Shutdown()
{
    std::cout << "[NCE] Encerrando Native Code Execution..."
              << std::endl;

    m_initialized = false;
}

bool NCE::LoadCode(uint64_t guestAddress)
{
    if (!m_initialized)
        return false;

    std::cout << "[NCE] Carregando código traduzido em 0x"
              << std::hex << guestAddress
              << std::dec << std::endl;

    return true;
}

bool NCE::Execute(uint64_t guestAddress)
{
    if (!m_initialized)
        return false;

    std::cout << "[NCE] Executando código nativo em 0x"
              << std::hex << guestAddress
              << std::dec << std::endl;

    // Futuramente:
    // - Executar código ARM64 gerado pelo JIT.
    // - Integrar com o BlockCache.
    // - Integrar com o MemoryMap.
    // - Executar blocos PowerPC traduzidos.

    return true;
}

bool NCE::IsReady() const
{
    return m_initialized;
}

} // namespace Pure3X
