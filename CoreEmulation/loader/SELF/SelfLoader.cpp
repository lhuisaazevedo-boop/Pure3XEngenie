#include "SelfLoader.h"

#include <iostream>

namespace Pure3XEngenie {
namespace Loader {
namespace SELF {

bool SelfLoader::Load(const std::string& path) {
    std::cout << "[SELF] Loading file: " << path << std::endl;
    return true;
}

bool SelfLoader::Validate(const std::string& path) {
    std::cout << "[SELF] Validating SELF: " << path << std::endl;
    return true;
}

void SelfLoader::PrintInfo() {
    std::cout << "==============================" << std::endl;
    std::cout << " SELF Loader" << std::endl;
    std::cout << " Status : Ready" << std::endl;
    std::cout << " Format : SELF" << std::endl;
    std::cout << "==============================" << std::endl;
}

} // namespace SELF
} // namespace Loader
} // namespace Pure3XEngenie
