#include "Emulator.h"

#include <iostream>

namespace Pure3X
{

Emulator::Emulator()
    : m_initialized(false),
      m_running(false)
{
}

bool Emulator::Initialize()
{
    std::cout << "[EMU] Inicializando Emulator Core...\n";
    m_initialized = true;
    return true;
}

void Emulator::Shutdown()
{
    std::cout << "[EMU] Finalizando Emulator Core...\n";
    m_running = false;
    m_initialized = false;
}

bool Emulator::LoadGame(const std::string& path)
{
    m_gamePath = path;
    std::cout << "[EMU] Carregando jogo: " << path << '\n';
    return true;
}

void Emulator::Start()
{
    if (!m_initialized)
        return;

    m_running = true;
    std::cout << "[EMU] Emulação iniciada.\n";
}

void Emulator::Pause()
{
    if (!m_running)
        return;

    m_running = false;
    std::cout << "[EMU] Emulação pausada.\n";
}

void Emulator::Stop()
{
    m_running = false;
    std::cout << "[EMU] Emulação encerrada.\n";
}

bool Emulator::IsRunning() const
{
    return m_running;
}

} // namespace Pure3X
