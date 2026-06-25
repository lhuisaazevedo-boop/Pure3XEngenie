#ifndef PURE3X_INPUT_MANAGER_H
#define PURE3X_INPUT_MANAGER_H

namespace Pure3X {

class InputManager {
public:
    InputManager();

    bool Initialize();
    void Update();
    void Shutdown();

private:
    bool m_initialized;
};

}

#endif
