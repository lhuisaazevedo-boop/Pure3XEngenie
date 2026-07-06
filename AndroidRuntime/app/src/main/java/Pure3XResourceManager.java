package com.pure3x.engine;

import android.util.Log;

import java.util.HashMap;
import java.util.Map;

public class Pure3XResourceManager {

    private static final String TAG = "Pure3XResourceManager";

    private final Map<String, Pure3XMesh> meshes = new HashMap<>();

    public void initialize() {
        Log.i(TAG, "ResourceManager inicializado.");
    }

    public void addMesh(String name, Pure3XMesh mesh) {
        meshes.put(name, mesh);
    }

    public Pure3XMesh getMesh(String name) {
        return meshes.get(name);
    }

    public boolean hasMesh(String name) {
        return meshes.containsKey(name);
    }

    public void clear() {
        meshes.clear();
        Log.i(TAG, "Recursos liberados.");
    }
}
