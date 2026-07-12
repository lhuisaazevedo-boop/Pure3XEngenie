#pragma once

#include "../viewer/Scene.h"

namespace Pure3X
{

class Engine
{
public:
    bool Initialize();
    void Shutdown();
    void run();

private:
    Scene scene;
    bool running = false;
};

} // namespace Pure3X
