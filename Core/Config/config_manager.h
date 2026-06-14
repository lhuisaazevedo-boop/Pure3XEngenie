#ifndef CONFIG_MANAGER_H
#define CONFIG_MANAGER_H

class ConfigManager
{
public:
    ConfigManager();

    void Load();
    void Save();
    void ShowStatus();

private:
    bool debugMode;
    bool networkEnabled;
};

#endif // CONFIG_MANAGER_H
