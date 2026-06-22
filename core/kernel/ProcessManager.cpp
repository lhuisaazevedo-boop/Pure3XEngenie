#include "ProcessManager.h"

#include <iostream>

namespace Pure3X {

ProcessManager::ProcessManager()
{
}

bool ProcessManager::Initialize()
{
    std::cout << "[Kernel] Process Manager inicializado." << std::endl;
    return true;
}

void ProcessManager::Shutdown()
{
    std::cout << "[Kernel] Process Manager encerrado." << std::endl;
}

int ProcessManager::CreateProcess(const std::string& name)
{
    m_processes.push_back(name);

    std::cout << "[Kernel] Processo criado: "
              << name << std::endl;

    return static_cast<int>(m_processes.size() - 1);
}

void ProcessManager::KillProcess(int pid)
{
    std::cout << "[Kernel] Encerrando processo "
              << pid << std::endl;
}

} // namespace Pure3X
