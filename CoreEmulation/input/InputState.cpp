#include "InputState.h"

namespace Pure3X {

InputState::InputState()
{
    Reset();
}

void InputState::Reset()
{
    buttons = 0;

    leftX = 0.0f;
    leftY = 0.0f;

    rightX = 0.0f;
    rightY = 0.0f;

    leftTrigger = 0.0f;
    rightTrigger = 0.0f;
}

} // namespace Pure3X
