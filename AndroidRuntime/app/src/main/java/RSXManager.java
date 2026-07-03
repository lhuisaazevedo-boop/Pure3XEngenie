package com.pure3x.engine;

public class RSXManager {

    private boolean initialized;
    private String renderer;
    private String resolution;
    private boolean vsync;

    public RSXManager() {
        initialized = false;
        renderer = "OpenGL ES";
        resolution = "1280x720";
        vsync = true;
    }

    public void initialize() {
        initialized = true;

        System.out.println("Inicializando RSX...");
        System.out.println("Renderer: " + renderer);
        System.out.println("Resolução: " + resolution);
        System.out.println("VSync: " + (vsync ? "Ligado" : "Desligado"));
    }

    public boolean isInitialized() {
        return initialized;
    }

    public void shutdown() {
        initialized = false;
    }

    public void setRenderer(String value) {
        renderer = value;
    }

    public String getRenderer() {
        return renderer;
    }

    public void setResolution(String value) {
        resolution = value;
    }

    public String getResolution() {
        return resolution;
    }

    public void setVSync(boolean enabled) {
        vsync = enabled;
    }

    public boolean getVSync() {
        return vsync;
    }

    public String getStatus() {
        if (initialized) {
            return "RSX ativo";
        }
        return "RSX parado";
    }
}
