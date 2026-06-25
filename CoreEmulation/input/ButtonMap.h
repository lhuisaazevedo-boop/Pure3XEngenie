#pragma once

#include <cstdint>

namespace Pure3X {

namespace ButtonMap {

void Initialize();
void Shutdown();

// Face Buttons
constexpr uint16_t CROSS     = 1 << 0;
constexpr uint16_t CIRCLE    = 1 << 1;
constexpr uint16_t SQUARE    = 1 << 2;
constexpr uint16_t TRIANGLE  = 1 << 3;

// D-Pad
constexpr uint16_t DPAD_UP    = 1 << 4;
constexpr uint16_t DPAD_DOWN  = 1 << 5;
constexpr uint16_t DPAD_LEFT  = 1 << 6;
constexpr uint16_t DPAD_RIGHT = 1 << 7;

// Shoulder Buttons
constexpr uint16_t L1 = 1 << 8;
constexpr uint16_t R1 = 1 << 9;
constexpr uint16_t L2 = 1 << 10;
constexpr uint16_t R2 = 1 << 11;

// Stick Buttons
constexpr uint16_t L3 = 1 << 12;
constexpr uint16_t R3 = 1 << 13;

// System Buttons
constexpr uint16_t START  = 1 << 14;
constexpr uint16_t SELECT = 1 << 15;

// PS Button
constexpr uint32_t PS = 1u << 16;

} // namespace ButtonMap

} // namespace Pure3X
