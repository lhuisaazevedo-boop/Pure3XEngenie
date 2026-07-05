package com.pure3x.engine;

/**
 * Pure3XFPSCounter - Classe para contar frames por segundo
 */
public class Pure3XFPSCounter {

    private long frameCount = 0;
    private long lastTime = System.currentTimeMillis();
    private float currentFPS = 0f;
    private long updateInterval = 1000; // Atualizar a cada 1 segundo

    public void update() {
        frameCount++;
        long currentTime = System.currentTimeMillis();
        long elapsedTime = currentTime - lastTime;

        if (elapsedTime >= updateInterval) {
            currentFPS = (frameCount * 1000f) / elapsedTime;
            frameCount = 0;
            lastTime = currentTime;
        }
    }

    public float getFPS() {
        return currentFPS;
    }

    public String getFPSString() {
        return String.format("FPS: %.1f", currentFPS);
    }

    public void reset() {
        frameCount = 0;
        lastTime = System.currentTimeMillis();
        currentFPS = 0f;
    }
}
