#pragma once

#include <cstdint>

namespace Pure3X {

struct InputState
{
    uint16_t buttons;

    float leftX;
    float leftY;

    float rightX;
    float rightY;

    float leftTrigger;
    float rightTrigger;

    InputState();

    void Reset();
};

} // namespace Pure3X
