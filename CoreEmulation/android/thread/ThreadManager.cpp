#include "ThreadManager.h"

#include <iostream>

namespace Pure3X
{

bool ThreadManager::ready = false;

std::vector<std::thread> ThreadManager::threads;

bool ThreadManager::Initialize()
{
    std::cout << "[ThreadManager] Inicializando...\n";

    ready = true;

    std::cout << "[ThreadManager] Threads disponiveis: "
              << std::thread::hardware_concurrency()
              << "\n";

    return true;
}

void ThreadManager::Shutdown()
{
    std::cout << "[ThreadManager] Encerrando...\n";

    for (auto& thread : threads)
    {
        if (thread.joinable())
            thread.join();
    }

    threads.clear();
    ready = false;
}

bool ThreadManager::IsReady()
{
    return ready;
}

void ThreadManager::Launch(void (*task)())
{
    if (!ready)
        return;

    threads.emplace_back(task);
}

unsigned int ThreadManager::GetThreadCount()
{
    return std::thread::hardware_concurrency();
}

} // namespace Pure3X
