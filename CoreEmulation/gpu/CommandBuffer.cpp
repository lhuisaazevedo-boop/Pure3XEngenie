#include "CommandBuffer.h"

namespace Pure3X {

CommandBuffer::CommandBuffer()
{
}

void CommandBuffer::Push(uint32_t command)
{
    commands.push(command);
}

bool CommandBuffer::Empty() const
{
    return commands.empty();
}

uint32_t CommandBuffer::Pop()
{
    if (commands.empty())
        return 0;

    uint32_t command = commands.front();
    commands.pop();

    return command;
}

} // namespace Pure3X
