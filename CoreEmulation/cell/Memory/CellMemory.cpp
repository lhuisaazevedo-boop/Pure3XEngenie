#include "CellMemory.h"

#include <cstdlib>
#include <iostream>

namespace Pure3X
{

bool CellMemory::ready = false;
std::size_t CellMemory::memorySize = 256 * 1024 * 1024; // 256 MB

bool CellMemory::Initialize()
{
    std::cout << "[CellMemory] Inicializando...\n";
    ready = true;
    std::cout << "[CellMemory] Memoria disponivel: "
              << memorySize / (1024 * 1024)
              << " MB\n";
    return true;
}

void CellMemory::Shutdown()
{
    std::cout << "[CellMemory] Encerrando...\n";
    ready = false;
}

bool CellMemory::IsReady()
{
    return ready;
}

void* CellMemory::Allocate(std::size_t size)
{
    return std::malloc(size);
}

void CellMemory::Free(void* ptr)
{
    std::free(ptr);
}

std::size_t CellMemory::GetMemorySize()
{
    return memorySize;
}

} // namespace Pure3X
