#pragma once

#include <string>

namespace Pure3XEngenie {
namespace Loader {
namespace SELF {

class SelfLoader {
public:
    bool Load(const std::string& path);
    bool Validate(const std::string& path);
    void PrintInfo();
};

} // namespace SELF
} // namespace Loader
} // namespace Pure3XEngenie
