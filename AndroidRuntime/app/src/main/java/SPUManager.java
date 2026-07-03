package com.pure3x.engine;

public class SPUManager {

    private boolean initialized;
    private int spus;
    private boolean multithread;

    public SPUManager() {
        initialized = false;
        spus = 6;
        multithread = true;
    }

    public void initialize() {

        initialized = true;

        System.out.println("==================================");
        System.out.println("Inicializando SPU...");
        System.out.println("SPUs Ativas: " + spus);
        System.out.println("Multithread: " + (multithread ? "Ligado" : "Desligado"));
        System.out.println("SPU pronta.");
        System.out.println("==================================");

    }

    public boolean isInitialized() {
        return initialized;
    }

    public void shutdown() {
        initialized = false;
        System.out.println("SPU desligada.");
    }

    public void setSPUs(int value) {
        spus = value;
    }

    public int getSPUs() {
        return spus;
    }

    public void setMultithread(boolean value) {
        multithread = value;
    }

    public boolean getMultithread() {
        return multithread;
    }

    public String getStatus() {

        if (initialized) {
            return "SPU ativa";
        }

        return "SPU parada";
    }

}
