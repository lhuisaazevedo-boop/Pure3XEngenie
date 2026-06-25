#pragma once

#include <string>

namespace Pure3X {

class Kernel {
public:
    static bool Initialize();
    static void Shutdown();
    static std::string GetVersion();
};

}
