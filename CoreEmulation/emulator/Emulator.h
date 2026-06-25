#pragma once

#include <string>

namespace Pure3X
{

class Emulator
{
public:
    Emulator();

    bool Initialize();
    void Shutdown();

    bool LoadGame(const std::string& path);

    void Start();
    void Pause();
    void Stop();

    bool IsRunning() const;

private:
    bool m_initialized;
    bool m_running;
    std::string m_gamePath;
};

} // namespace Pure3X
