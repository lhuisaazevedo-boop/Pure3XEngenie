package com.pure3x.engine;

public class Pure3XRuntime {

    private final Pure3XFPSCounter fpsCounter = new Pure3XFPSCounter();

    public void initialize() {
        // Inicialização da runtime
    }

    public void update() {
        fpsCounter.update();
    }

    public void render() {
        // Renderização
    }

    public float getFPS() {
        return fpsCounter.getFPS();
    }
}
