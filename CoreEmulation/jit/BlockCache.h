#ifndef PURE3X_BLOCKCACHE_H
#define PURE3X_BLOCKCACHE_H

#include <cstdint>
#include <unordered_map>

namespace Pure3X {

class BlockCache {
public:
    BlockCache();

    bool Initialize();
    void Shutdown();

    bool HasBlock(uint64_t address);
    void AddBlock(uint64_t address);
    void Clear();

private:
    std::unordered_map<uint64_t, bool> m_cache;
};

} // namespace Pure3X

#endif // PURE3X_BLOCKCACHE_H
