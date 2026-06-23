#pragma once

#include <string>

namespace Pure3X {

class ConfigManager
{
public:

    // Carrega config.ini
    static bool LoadConfig(const std::string& path);

    // Salva config.ini
    static void SaveConfig(const std::string& path);

private:

    ConfigManager() = default;
    ~ConfigManager() = default;
};

} // namespace Pure3X
