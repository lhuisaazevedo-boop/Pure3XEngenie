package com.pure3x.engine;

import android.util.Log;

public class Pure3XSystem {

    private static final String TAG = "Pure3XSystem";

    private boolean initialized;

    public Pure3XSystem() {
        initialized = false;
    }

    public void initialize() {
        if (initialized) {
            return;
        }

        Log.i(TAG, "Inicializando sistema da Engine...");
        initialized = true;
    }

    public void update() {
        if (!initialized) {
            return;
        }

        // Atualizações globais da engine
    }

    public void shutdown() {
        if (!initialized) {
            return;
        }

        Log.i(TAG, "Finalizando sistema da Engine...");
        initialized = false;
    }

    public boolean isInitialized() {
        return initialized;
    }
}
