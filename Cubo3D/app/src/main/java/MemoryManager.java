package com.pure3x.engine;

public class MemoryManager {

    private long totalMemory;
    private long usedMemory;
    private boolean initialized;

    public MemoryManager() {
        initialized = false;
        totalMemory = Runtime.getRuntime().maxMemory();
        usedMemory = 0;
    }

    public void initialize() {
        initialized = true;
        updateMemory();
        System.out.println("Memory Manager inicializado.");
    }

    public void updateMemory() {
        usedMemory = Runtime.getRuntime().totalMemory()
                - Runtime.getRuntime().freeMemory();
    }

    public long getTotalMemory() {
        return totalMemory;
    }

    public long getUsedMemory() {
        updateMemory();
        return usedMemory;
    }

    public long getFreeMemory() {
        updateMemory();
        return totalMemory - usedMemory;
    }

    public boolean isInitialized() {
        return initialized;
    }

    public void shutdown() {
        initialized = false;
    }

    public String getStatus() {
        if (initialized) {
            return "Memory Manager ativo";
        }
        return "Memory Manager parado";
    }
}
