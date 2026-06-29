#include "FileSystem.h"

#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

namespace Pure3X
{

bool FileSystem::ready = false;

bool FileSystem::Initialize()
{
    std::cout << "[FileSystem] Inicializando...\n";

    const std::string internalPath = GetInternalPath();
    const std::string externalPath = GetExternalPath();

    if (!FileExists(internalPath))
    {
        if (CreateDirectory(internalPath))
        {
            std::cout << "[OK] Pasta interna criada.\n";
        }
    }

    if (!FileExists(externalPath))
    {
        CreateDirectory(externalPath);
    }

    ready = true;

    std::cout << "[OK] FileSystem inicializado.\n";

    return true;
}

void FileSystem::Shutdown()
{
    std::cout << "[FileSystem] Encerrando...\n";

    ready = false;
}

bool FileSystem::FileExists(const std::string& path)
{
    try
    {
        return fs::exists(path);
    }
    catch (...)
    {
        return false;
    }
}

bool FileSystem::CreateDirectory(const std::string& path)
{
    try
    {
        return fs::create_directories(path);
    }
    catch (...)
    {
        return false;
    }
}

std::string FileSystem::GetInternalPath()
{
    return "/data/data/com.termux/files/home/Pure3XEngenie";
}

std::string FileSystem::GetExternalPath()
{
    return "/storage/emulated/0/Pure3XEngenie";
}

} // namespace Pure3X
