package com.pure3x.engine;

public class Pure3XTimer {

    private long lastTime;
    private float deltaTime;

    public Pure3XTimer() {
        lastTime = System.nanoTime();
        deltaTime = 0.0f;
    }

    public void update() {

        long currentTime = System.nanoTime();

        deltaTime = (currentTime - lastTime) / 1000000000.0f;

        lastTime = currentTime;
    }

    public float getDeltaTime() {
        return deltaTime;
    }

    public void reset() {
        lastTime = System.nanoTime();
        deltaTime = 0.0f;
    }
}
