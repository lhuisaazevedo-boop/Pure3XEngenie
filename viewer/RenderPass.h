#pragma once

class RenderPass {
public:
    RenderPass() = default;
    ~RenderPass() = default;

    bool Initialize();

    void Begin();

    void End();

    void Shutdown();

private:
    bool initialized = false;
};
