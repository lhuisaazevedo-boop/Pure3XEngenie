#pragma once

#include <string>

namespace Pure3XEngenie
{

class GameModule
{
public:
    GameModule();
    GameModule(const std::string& name);

    void Load();
    void Unload();

    std::string GetName() const;
    bool IsLoaded() const;

private:
    std::string m_Name;
    bool m_Loaded;
};

}
