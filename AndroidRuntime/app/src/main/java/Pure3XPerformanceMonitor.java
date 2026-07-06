package com.pure3x.engine;

public class Pure3XPerformanceMonitor {

    private final Runtime runtime;

    public Pure3XPerformanceMonitor() {
        runtime = Runtime.getRuntime();
    }

    public long getUsedMemory() {
        return (runtime.totalMemory() - runtime.freeMemory()) / (1024 * 1024);
    }

    public long getTotalMemory() {
        return runtime.totalMemory() / (1024 * 1024);
    }

    public long getFreeMemory() {
        return runtime.freeMemory() / (1024 * 1024);
    }

    public long getMaxMemory() {
        return runtime.maxMemory() / (1024 * 1024);
    }

    public String getReport() {

        return "RAM: "
                + getUsedMemory()
                + "MB / "
                + getMaxMemory()
                + "MB";
    }
}
