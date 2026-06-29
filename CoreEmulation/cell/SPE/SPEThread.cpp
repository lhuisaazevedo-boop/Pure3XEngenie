#include "SPEThread.h"

#include <iostream>

namespace Pure3X
{

bool SPEThread::running = false;

bool SPEThread::Initialize()
{
    std::cout << "[SPEThread] Inicializando...\n";

    running = true;

    std::cout << "[SPEThread] Thread SPE ativa.\n";

    return true;
}

void SPEThread::Shutdown()
{
    std::cout << "[SPEThread] Encerrando...\n";

    running = false;
}

bool SPEThread::IsRunning()
{
    return running;
}

void SPEThread::Start()
{
    if (!running)
    {
        running = true;
        std::cout << "[SPEThread] Thread iniciada.\n";
    }
}

void SPEThread::Stop()
{
    if (running)
    {
        running = false;
        std::cout << "[SPEThread] Thread parada.\n";
    }
}

} // namespace Pure3X
