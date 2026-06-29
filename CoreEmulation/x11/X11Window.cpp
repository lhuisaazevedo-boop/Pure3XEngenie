#include "X11Window.h"

#include <iostream>

namespace Pure3X
{

bool X11Window::Initialize(const std::string& title,
                           int width,
                           int height)
{
    m_running = true;

    std::cout << "\n[X11] Inicializando janela..." << std::endl;
    std::cout << "[X11] Titulo : " << title << std::endl;
    std::cout << "[X11] Resolucao : "
              << width << "x" << height << std::endl;
    std::cout << "[X11] Backend em desenvolvimento." << std::endl;

    return true;
}

void X11Window::PollEvents()
{
    if (!m_running)
        return;

    // Futuro processamento de eventos
}

bool X11Window::IsRunning() const
{
    return m_running;
}

void X11Window::Shutdown()
{
    m_running = false;

    std::cout << "[X11] Janela encerrada." << std::endl;
}

} // namespace Pure3X
