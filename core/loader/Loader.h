#pragma once

#include <string>

namespace Pure3XEngenie {
namespace Loader {

class Loader {
public:

    static bool Initialize();

    static bool LoadELF(const std::string& path);

    static bool LoadSELF(const std::string& path);

    static bool LoadSPRX(const std::string& path);

    static void Shutdown();
};

} // namespace Loader
} // namespace Pure3XEngenie
