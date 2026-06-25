#pragma once

#include <string>

namespace Pure3XEngenie {
namespace Loader {
namespace ELF {

class ElfLoader {
public:

    static bool Load(const std::string& path);

    static bool Validate(const std::string& path);

    static void PrintInfo();

};

} // namespace ELF
} // namespace Loader
} // namespace Pure3XEngenie
