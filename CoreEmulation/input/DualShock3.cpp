#include "DualShock3.h"

#include <iostream>

namespace Pure3X {

DualShock3::DualShock3()
    : buttons(0),
      leftX(0.0f),
      leftY(0.0f),
      rightX(0.0f),
      rightY(0.0f)
{
}

bool DualShock3::Initialize()
{
    std::cout << "[Input] Inicializando DualShock 3..." << std::endl;

    Reset();

    return true;
}

void DualShock3::Shutdown()
{
    std::cout << "[Input] Encerrando DualShock 3..." << std::endl;

    Reset();
}

void DualShock3::Reset()
{
    buttons = 0;

    leftX = 0.0f;
    leftY = 0.0f;

    rightX = 0.0f;
    rightY = 0.0f;
}

void DualShock3::SetButton(uint16_t button, bool pressed)
{
    if (pressed)
        buttons |= button;
    else
        buttons &= ~button;
}

bool DualShock3::GetButton(uint16_t button) const
{
    return (buttons & button) != 0;
}

void DualShock3::SetLeftStick(float x, float y)
{
    leftX = x;
    leftY = y;
}

void DualShock3::SetRightStick(float x, float y)
{
    rightX = x;
    rightY = y;
}

float DualShock3::GetLeftX() const
{
    return leftX;
}

float DualShock3::GetLeftY() const
{
    return leftY;
}

float DualShock3::GetRightX() const
{
    return rightX;
}

float DualShock3::GetRightY() const
{
    return rightY;
}

} // namespace Pure3X
