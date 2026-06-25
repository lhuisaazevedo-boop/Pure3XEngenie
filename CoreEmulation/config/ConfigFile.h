#ifndef PURE3X_CONFIG_FILE_H
#define PURE3X_CONFIG_FILE_H

#include <string>

namespace Pure3XEngenie {
namespace Config {

class ConfigFile {
public:
    ConfigFile();

    bool Load(const std::string& path);
    bool Save(const std::string& path);

    void SetLanguage(const std::string& language);
    void SetLogLevel(const std::string& level);
    void SetDebug(bool enabled);

    std::string GetLanguage() const;
    std::string GetLogLevel() const;
    bool GetDebug() const;

private:
    std::string m_language;
    std::string m_logLevel;
    bool m_debug;
};

} // namespace Config
} // namespace Pure3XEngenie

#endif
