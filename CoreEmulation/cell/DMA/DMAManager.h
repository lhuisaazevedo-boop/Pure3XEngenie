#ifndef PURE3X_DMA_MANAGER_H
#define PURE3X_DMA_MANAGER_H

#include <cstddef>

namespace Pure3X
{

class DMAManager
{
public:
    static bool Initialize();
    static void Shutdown();

    static bool IsReady();

    static bool Transfer(void* source, void* destination, std::size_t size);

private:
    static bool ready;
};

} // namespace Pure3X

#endif
