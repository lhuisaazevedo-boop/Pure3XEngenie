package com.pure3x.engine;

import android.util.Log;

public class Pure3XEngine {

    private static final String TAG = "Pure3XEngine";

    private static Pure3XEngine instance;

    private boolean initialized = false;

    private final Pure3XWorld world;
    private final Pure3XTime time;

    // FPS
    private float fps = 0.0f;
    private long lastFpsTime = System.nanoTime();
    private int frameCount = 0;

    private Pure3XEngine() {
        world = new Pure3XWorld();
        time = new Pure3XTime();
    }

    public static synchronized Pure3XEngine getInstance() {
        if (instance == null) {
            instance = new Pure3XEngine();
        }
        return instance;
    }

    public void initialize() {

        if (initialized) {
            return;
        }

        Log.i(TAG, "Inicializando Pure3X Engine...");

        world.initialize();

        lastFpsTime = System.nanoTime();
        frameCount = 0;
        fps = 0.0f;

        initialized = true;
    }

    public void update() {

        if (!initialized) {
            return;
        }

        time.update();

        world.update(time.getDeltaTime());
    }

    public void render() {

        if (!initialized) {
            return;
        }

        world.render();

        frameCount++;

        long now = System.nanoTime();

        if (now - lastFpsTime >= 1000000000L) {
            fps = frameCount;
            frameCount = 0;
            lastFpsTime = now;

            Log.d(TAG, "FPS: " + fps);
        }
    }

    public void shutdown() {

        if (!initialized) {
            return;
        }

        Log.i(TAG, "Finalizando Pure3X Engine...");

        initialized = false;
    }

    public boolean isInitialized() {
        return initialized;
    }

    public Pure3XWorld getWorld() {
        return world;
    }

    public Pure3XTime getTime() {
        return time;
    }

    public float getFPS() {
        return fps;
    }
}
