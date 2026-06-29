#pragma once

namespace Pure3X {

class InputManager {
public:
    static bool Initialize();
    static void Update();
    static void Shutdown();

private:
    static bool m_initialized;
};

} // namespace Pure3X
