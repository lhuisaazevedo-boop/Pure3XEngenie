package com.pure3x.engine;

public class Pure3XFPSCounter {

    private long lastTime = System.nanoTime();
    private int frames = 0;
    private float fps = 0.0f;

    public void update() {

        frames++;

        long now = System.nanoTime();

        if (now - lastTime >= 1000000000L) {

            fps = frames;

            frames = 0;

            lastTime = now;
        }
    }

    public float getFPS() {
        return fps;
    }
}
