#ifndef PURE3X_VULKAN_RENDERER_H
#define PURE3X_VULKAN_RENDERER_H

namespace Pure3X {

class VulkanRenderer {
public:
    static bool Initialize();
    static void Shutdown();

    static void BeginFrame();
    static void DrawFrame();
    static void EndFrame();
};

} // namespace Pure3X

#endif // PURE3X_VULKAN_RENDERER_H
