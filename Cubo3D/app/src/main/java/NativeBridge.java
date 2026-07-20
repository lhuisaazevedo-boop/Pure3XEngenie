package com.pure3x.engine;

public class NativeBridge {

    static {
        try {
            System.loadLibrary("pure3xengine");
            System.out.println("Biblioteca nativa carregada.");
        } catch (UnsatisfiedLinkError e) {
            System.out.println("Biblioteca nativa ainda não encontrada.");
        }
    }

    public NativeBridge() {
    }

    public native void initializeEngine();

    public native void shutdownEngine();

    public native String getEngineVersion();

    public native boolean isEngineRunning();

    public void initialize() {
        System.out.println("Inicializando Native Bridge...");
        initializeEngine();
    }

    public void shutdown() {
        System.out.println("Finalizando Native Bridge...");
        shutdownEngine();
    }

    public String getStatus() {
        if (isEngineRunning()) {
            return "Engine Nativa ativa";
        }
        return "Engine Nativa parada";
    }
}
