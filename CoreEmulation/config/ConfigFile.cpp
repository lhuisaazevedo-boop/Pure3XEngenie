#include "ConfigFile.h"

#include <fstream>
#include <iostream>

namespace Pure3XEngenie {
namespace Config {

ConfigFile::ConfigFile()
    : m_language("English"),
      m_logLevel("INFO"),
      m_debug(true)
{
}

bool ConfigFile::Load(const std::string& path)
{
    std::ifstream file(path);

    if (!file.is_open()) {
        std::cout << "[Config] config.ini nao encontrado. Criando padrao...\n";
        Save(path);
        return true;
    }

    std::cout << "[Config] Configuracao carregada.\n";
    file.close();
    return true;
}

bool ConfigFile::Save(const std::string& path)
{
    std::ofstream file(path);

    if (!file.is_open())
        return false;

    file << "# Pure3XEngenie Configuration\n";
    file << "Language=" << m_language << "\n";
    file << "LogLevel=" << m_logLevel << "\n";
    file << "Debug=" << (m_debug ? "ON" : "OFF") << "\n";

    file.close();

    std::cout << "[Config] Configuracao salva.\n";
    return true;
}

void ConfigFile::SetLanguage(const std::string& language)
{
    m_language = language;
}

void ConfigFile::SetLogLevel(const std::string& level)
{
    m_logLevel = level;
}

void ConfigFile::SetDebug(bool enabled)
{
    m_debug = enabled;
}

std::string ConfigFile::GetLanguage() const
{
    return m_language;
}

std::string ConfigFile::GetLogLevel() const
{
    return m_logLevel;
}

bool ConfigFile::GetDebug() const
{
    return m_debug;
}

} // namespace Config
} // namespace Pure3XEngenie
