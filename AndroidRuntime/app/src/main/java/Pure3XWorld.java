package com.pure3x.engine;

public class Pure3XWorld {

    private final Pure3XSceneManager sceneManager;

    public Pure3XWorld() {
        sceneManager = new Pure3XSceneManager();
    }

    public void initialize() {
        // Inicialização futura da cena
    }

    public void update(float deltaTime) {
        sceneManager.update(deltaTime);
    }

    public void render() {
        // A renderização será feita pelo Pure3XRenderEngine
    }

    public Pure3XSceneManager getSceneManager() {
        return sceneManager;
    }
}
