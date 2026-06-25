#include "GameModule.h"

namespace Pure3XEngenie
{

GameModule::GameModule()
    : m_Name("Unknown"),
      m_Loaded(false)
{
}

GameModule::GameModule(const std::string& name)
    : m_Name(name),
      m_Loaded(false)
{
}

void GameModule::Load()
{
    m_Loaded = true;
}

void GameModule::Unload()
{
    m_Loaded = false;
}

std::string GameModule::GetName() const
{
    return m_Name;
}

bool GameModule::IsLoaded() const
{
    return m_Loaded;
}

} // namespace Pure3XEngenie
