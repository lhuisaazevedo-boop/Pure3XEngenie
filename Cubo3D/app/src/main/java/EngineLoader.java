package com.pure3x.engine;

public class EngineLoader {

    private boolean initialized;

    public EngineLoader() {
        initialized = false;
    }

    public void initialize() {

        System.out.println("Inicializando Engine...");
        System.out.println("Inicializando Runtime...");
        System.out.println("Inicializando Memória...");
        System.out.println("Inicializando RSX...");
        System.out.println("Inicializando SPU...");
        System.out.println("Inicializando PPU...");
        System.out.println("Inicializando Áudio...");
        System.out.println("Inicializando Entrada...");
        System.out.println("Inicializando Sistema...");

        initialized = true;
    }

    public boolean isInitialized() {
        return initialized;
    }

    public void shutdown() {
        initialized = false;
    }

    public String getStatus() {
        if (initialized) {
            return "Engine pronta";
        }
        return "Engine parada";
    }
}
