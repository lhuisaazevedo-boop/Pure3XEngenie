#include "system.h"

#include <iostream>

namespace Pure3XEngenie {
namespace System {

bool Initialize() {
    std::cout << "[System] Initialized." << std::endl;
    return true;
}

void Update() {
    std::cout << "[System] Running..." << std::endl;
}

void Shutdown() {
    std::cout << "[System] Shutdown." << std::endl;
}

} // namespace System
} // namespace Pure3XEngenie
