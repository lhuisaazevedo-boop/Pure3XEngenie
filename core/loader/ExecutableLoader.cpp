#include "ExecutableLoader.h"

#include <iostream>

namespace Pure3X {

ExecutableLoader::ExecutableLoader()
{
}

bool ExecutableLoader::Initialize()
{
    std::cout << "[Loader] Inicializando Executable Loader..." << std::endl;
    loadedFile.clear();
    return true;
}

bool ExecutableLoader::Load(const std::string& path)
{
    loadedFile = path;

    std::cout << "[Loader] Carregando executável: "
              << loadedFile << std::endl;

    // Futuramente:
    // - Detectar ELF
    // - Detectar SELF
    // - Detectar SPRX
    // - Enviar para o loader correto

    return true;
}

void ExecutableLoader::Reset()
{
    loadedFile.clear();

    std::cout << "[Loader] Resetando Executable Loader..."
              << std::endl;
}

void ExecutableLoader::Shutdown()
{
    loadedFile.clear();

    std::cout << "[Loader] Encerrando Executable Loader..."
              << std::endl;
}

} // namespace Pure3X
