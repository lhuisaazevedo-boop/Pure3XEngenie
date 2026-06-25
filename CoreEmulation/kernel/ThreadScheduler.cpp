#include "ThreadScheduler.h"

#include <iostream>

namespace Pure3X {

ThreadScheduler::ThreadScheduler()
{
}

bool ThreadScheduler::Initialize()
{
    std::cout << "[Kernel] Thread Scheduler inicializado."
              << std::endl;

    return true;
}

void ThreadScheduler::Schedule()
{
    std::cout << "[Kernel] Escalonando threads..."
              << std::endl;
}

void ThreadScheduler::Shutdown()
{
    std::cout << "[Kernel] Thread Scheduler encerrado."
              << std::endl;
}

} // namespace Pure3X
