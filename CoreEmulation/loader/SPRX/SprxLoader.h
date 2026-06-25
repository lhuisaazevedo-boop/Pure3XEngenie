#pragma once

#include <string>

namespace Pure3XEngenie {
namespace Loader {
namespace SPRX {

class SprxLoader {
public:
    bool Load(const std::string& path);
    bool Validate(const std::string& path);
    void PrintInfo();
};

} // namespace SPRX
} // namespace Loader
} // namespace Pure3XEngenie
