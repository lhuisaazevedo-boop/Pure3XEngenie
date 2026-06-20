#include "FIFOQueue.h"

#include <iostream>

namespace Pure3X {

FIFOQueue::FIFOQueue()
{
}

bool FIFOQueue::Initialize()
{
    std::cout << "[Scheduler] FIFO inicializada." << std::endl;
    return true;
}

void FIFOQueue::Shutdown()
{
    while (!m_queue.empty())
        m_queue.pop();

    std::cout << "[Scheduler] FIFO encerrada." << std::endl;
}

void FIFOQueue::Push(uint64_t instruction)
{
    m_queue.push(instruction);
}

bool FIFOQueue::Pop(uint64_t& instruction)
{
    if (m_queue.empty())
        return false;

    instruction = m_queue.front();
    m_queue.pop();

    return true;
}

bool FIFOQueue::Empty() const
{
    return m_queue.empty();
}

std::size_t FIFOQueue::Size() const
{
    return m_queue.size();
}

} // namespace Pure3X
