#pragma once

#include <cstdint>

namespace Pure3X {

class DualShock3
{
public:
    DualShock3();

    bool Initialize();
    void Shutdown();

    void Reset();

    void SetButton(uint16_t button, bool pressed);
    bool GetButton(uint16_t button) const;

    void SetLeftStick(float x, float y);
    void SetRightStick(float x, float y);

    float GetLeftX() const;
    float GetLeftY() const;
    float GetRightX() const;
    float GetRightY() const;

private:
    uint16_t buttons;

    float leftX;
    float leftY;

    float rightX;
    float rightY;
};

} // namespace Pure3X
