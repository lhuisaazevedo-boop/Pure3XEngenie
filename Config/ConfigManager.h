#ifndef CONFIG_MANAGER_H
#define CONFIG_MANAGER_H

#include <string>

class ConfigManager {
public:
    ConfigManager();

    bool LoadConfig();
    bool SaveConfig();

    void SetValue(const std::string& key,
                  const std::string& value);

    std::string GetValue(
        const std::string& key);

private:
    std::string configPath;
};

#endif
