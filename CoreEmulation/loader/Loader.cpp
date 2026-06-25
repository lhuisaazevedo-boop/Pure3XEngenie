#include "Loader.h"

#include <iostream>

namespace Pure3XEngenie {
namespace Loader {

bool Loader::Initialize() {

    std::cout << "[Loader] Inicializando Loader..." << std::endl;
    return true;
}

bool Loader::LoadELF(const std::string& path) {

    std::cout << "[Loader] Carregando ELF: "
              << path << std::endl;

    return true;
}

bool Loader::LoadSELF(const std::string& path) {

    std::cout << "[Loader] Carregando SELF: "
              << path << std::endl;

    return true;
}

bool Loader::LoadSPRX(const std::string& path) {

    std::cout << "[Loader] Carregando SPRX: "
              << path << std::endl;

    return true;
}

void Loader::Shutdown() {

    std::cout << "[Loader] Loader finalizado."
              << std::endl;
}

} // namespace Loader
} // namespace Pure3XEngenie
