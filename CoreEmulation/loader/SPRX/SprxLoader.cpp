#include "SprxLoader.h"

#include <iostream>

namespace Pure3XEngenie {
namespace Loader {
namespace SPRX {

bool SprxLoader::Load(const std::string& path) {
    std::cout << "[SPRX] Loading module: " << path << std::endl;
    return true;
}

bool SprxLoader::Validate(const std::string& path) {
    std::cout << "[SPRX] Validating module: " << path << std::endl;
    return true;
}

void SprxLoader::PrintInfo() {
    std::cout << "==============================" << std::endl;
    std::cout << " SPRX Loader" << std::endl;
    std::cout << " Status : Ready" << std::endl;
    std::cout << " Format : SPRX" << std::endl;
    std::cout << "==============================" << std::endl;
}

} // namespace SPRX
} // namespace Loader
} // namespace Pure3XEngenie
