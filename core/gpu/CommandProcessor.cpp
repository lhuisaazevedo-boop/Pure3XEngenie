#include "CommandProcessor.h"

#include <iostream>

namespace Pure3X {

CommandProcessor::CommandProcessor()
    : m_initialized(false)
{
}

bool CommandProcessor::Initialize()
{
    std::cout << "[GPU] Command Processor inicializado." << std::endl;
    m_initialized = true;
    return true;
}

void CommandProcessor::ProcessCommands()
{
    if (!m_initialized)
        return;

    // Futuramente:
    // - FIFO RSX
    // - Comandos gráficos
    // - Render Backend Vulkan
    // - Sincronização CPU/GPU
}

void CommandProcessor::Shutdown()
{
    std::cout << "[GPU] Command Processor encerrado." << std::endl;
    m_initialized = false;
}

}
