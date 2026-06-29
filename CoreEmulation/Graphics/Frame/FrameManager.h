#ifndef PURE3X_FRAME_MANAGER_H
#define PURE3X_FRAME_MANAGER_H

namespace Pure3X
{

class FrameManager
{
public:
    static void Initialize();

    static void BeginFrame();

    static void EndFrame();

    static void Present();

    static void Shutdown();
};

} // namespace Pure3X

#endif
