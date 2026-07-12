#include "RenderPass.h"

#include <iostream>

bool RenderPass::Initialize() {
    if (initialized)
        return true;

    initialized = true;

    std::cout << "[RenderPass] Inicializado." << std::endl;

    return true;
}

void RenderPass::Begin() {
    if (!initialized)
        return;
}

void RenderPass::End() {
    if (!initialized)
        return;
}

void RenderPass::Shutdown() {
    if (!initialized)
        return;

    initialized = false;

    std::cout << "[RenderPass] Encerrado." << std::endl;
}
