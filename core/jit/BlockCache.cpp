#include "BlockCache.h"

#include <iostream>

namespace Pure3X {

BlockCache::BlockCache() {
}

bool BlockCache::Initialize()
{
    std::cout << "[JIT] Inicializando Block Cache..." << std::endl;

    m_cache.clear();

    return true;
}

void BlockCache::Shutdown()
{
    std::cout << "[JIT] Encerrando Block Cache..." << std::endl;

    m_cache.clear();
}

bool BlockCache::HasBlock(uint64_t address)
{
    return m_cache.find(address) != m_cache.end();
}

void BlockCache::AddBlock(uint64_t address)
{
    m_cache[address] = true;

    std::cout << "[JIT] Bloco armazenado: 0x"
              << std::hex << address
              << std::dec << std::endl;
}

void BlockCache::Clear()
{
    m_cache.clear();

    std::cout << "[JIT] Cache limpa." << std::endl;
}

} // namespace Pure3X
