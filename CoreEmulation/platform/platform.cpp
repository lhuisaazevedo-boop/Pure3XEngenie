#include "platform.h"

namespace Pure3XEngenie {
namespace Platform {

bool Initialize() {
    return true;
}

void Shutdown() {
}

const char* GetPlatformName() {
#if defined(__ANDROID__)
    return "Android";
#elif defined(__linux__)
    return "Linux";
#elif defined(_WIN32)
    return "Windows";
#else
    return "Unknown";
#endif
}

} // namespace Platform
} // namespace Pure3XEngenie
