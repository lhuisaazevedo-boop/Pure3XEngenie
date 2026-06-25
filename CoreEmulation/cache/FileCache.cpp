#include "FileCache.h"

#include <iostream>

namespace Pure3X {

FileCache::FileCache()
    : m_initialized(false)
{
}

bool FileCache::Initialize()
{
    std::cout << "[Cache] Inicializando File Cache..." << std::endl;
    m_initialized = true;
    return true;
}

void FileCache::Clear()
{
    if (!m_initialized)
        return;

    std::cout << "[Cache] Limpando cache..." << std::endl;
}

void FileCache::Shutdown()
{
    std::cout << "[Cache] Encerrando File Cache..." << std::endl;
    m_initialized = false;
}

}
