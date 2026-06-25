#include "RSXState.h"

namespace Pure3X {

RSXState::RSXState()
    : currentCommand(0)
{
}

void RSXState::Reset()
{
    currentCommand = 0;
}

uint32_t RSXState::GetCurrentCommand() const
{
    return currentCommand;
}

void RSXState::SetCurrentCommand(uint32_t command)
{
    currentCommand = command;
}

} // namespace Pure3X
