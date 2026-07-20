package com.pure3x.engine;

public class Pure3XRenderSystem {

    private final Pure3XRenderer renderer;

    public Pure3XRenderSystem(Pure3XRenderer renderer) {
        this.renderer = renderer;
    }

    public void initialize() {
        // Inicialização futura do sistema de renderização
    }

    public void beginFrame() {
        // Preparação do frame
    }

    public void endFrame() {
        // Finalização do frame
    }

    public Pure3XRenderer getRenderer() {
        return renderer;
    }
}
