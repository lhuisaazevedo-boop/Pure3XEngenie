#include "PPEThread.h"

#include <iostream>

namespace Pure3X
{

bool PPEThread::running = false;

bool PPEThread::Initialize()
{
    std::cout << "[PPEThread] Inicializando...\n";

    running = true;

    std::cout << "[PPEThread] Thread principal ativa.\n";

    return true;
}

void PPEThread::Shutdown()
{
    std::cout << "[PPEThread] Encerrando...\n";

    running = false;
}

bool PPEThread::IsRunning()
{
    return running;
}

void PPEThread::Start()
{
    if (!running)
    {
        running = true;
        std::cout << "[PPEThread] Thread iniciada.\n";
    }
}

void PPEThread::Stop()
{
    if (running)
    {
        running = false;
        std::cout << "[PPEThread] Thread parada.\n";
    }
}

} // namespace Pure3X
