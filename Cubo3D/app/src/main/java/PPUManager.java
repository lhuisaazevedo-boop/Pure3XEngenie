package com.pure3x.engine;

public class PPUManager {

    private boolean initialized;
    private int threads;
    private String mode;

    public PPUManager() {
        initialized = false;
        threads = 2;
        mode = "Interpreter";
    }

    public void initialize() {
        initialized = true;

        System.out.println("==================================");
        System.out.println("Inicializando PPU...");
        System.out.println("Modo: " + mode);
        System.out.println("Threads: " + threads);
        System.out.println("PPU pronta.");
        System.out.println("==================================");
    }

    public boolean isInitialized() {
        return initialized;
    }

    public void shutdown() {
        initialized = false;
        System.out.println("PPU desligada.");
    }

    public void setThreads(int value) {
        threads = value;
    }

    public int getThreads() {
        return threads;
    }

    public void setMode(String value) {
        mode = value;
    }

    public String getMode() {
        return mode;
    }

    public String getStatus() {
        if (initialized) {
            return "PPU ativa";
        }

        return "PPU parada";
    }
}
