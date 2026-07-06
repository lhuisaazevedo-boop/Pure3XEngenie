package com.pure3x.engine;

public class Pure3XTime {

    private long lastTime;
    private float deltaTime;

    public Pure3XTime() {
        lastTime = System.nanoTime();
    }

    public void update() {
        long currentTime = System.nanoTime();
        deltaTime = (currentTime - lastTime) / 1000000000.0f;
        lastTime = currentTime;
    }

    public float getDeltaTime() {
        return deltaTime;
    }
}
