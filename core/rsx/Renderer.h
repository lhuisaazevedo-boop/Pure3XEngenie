#ifndef PURE3X_RENDERER_H
#define PURE3X_RENDERER_H

#include <cstdint>

namespace Pure3X {

class Renderer {
public:
    Renderer();

    bool Initialize();
    void Shutdown();

    void Reset();
    void RenderFrame();

private:
    bool initialized;
    uint64_t frameCount;
};

} // namespace Pure3X

#endif // PURE3X_RENDERER_H
