#include "GameManager.h"

namespace Pure3X
{

GameManager::GameManager()
{
}

bool GameManager::AddGame(const std::string& path)
{
    m_games.push_back(path);
    return true;
}

bool GameManager::RemoveGame(const std::string& path)
{
    for (auto it = m_games.begin(); it != m_games.end(); ++it)
    {
        if (*it == path)
        {
            m_games.erase(it);
            return true;
        }
    }

    return false;
}

void GameManager::ClearGames()
{
    m_games.clear();
}

std::size_t GameManager::GetGameCount() const
{
    return m_games.size();
}

const std::vector<std::string>& GameManager::GetGames() const
{
    return m_games;
}

} // namespace Pure3X
