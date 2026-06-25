#ifndef PURE3X_GAMEMANAGER_H
#define PURE3X_GAMEMANAGER_H

#include <string>
#include <vector>

namespace Pure3X
{

class GameManager
{
public:
    GameManager();

    bool AddGame(const std::string& path);
    bool RemoveGame(const std::string& path);

    void ClearGames();

    std::size_t GetGameCount() const;
    const std::vector<std::string>& GetGames() const;

private:
    std::vector<std::string> m_games;
};

} // namespace Pure3X

#endif // PURE3X_GAMEMANAGER_H
