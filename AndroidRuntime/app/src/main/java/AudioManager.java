package com.pure3x.engine;

public class AudioManager {

    private boolean initialized;
    private String backend;
    private int sampleRate;
    private boolean enabled;

    public AudioManager() {
        initialized = false;
        backend = "OpenSL ES";
        sampleRate = 48000;
        enabled = true;
    }

    public void initialize() {

        initialized = true;

        System.out.println("==================================");
        System.out.println("Inicializando Áudio...");
        System.out.println("Backend: " + backend);
        System.out.println("Sample Rate: " + sampleRate + " Hz");
        System.out.println("Áudio: " + (enabled ? "Ligado" : "Desligado"));
        System.out.println("Audio Manager pronto.");
        System.out.println("==================================");

    }

    public boolean isInitialized() {
        return initialized;
    }

    public void shutdown() {
        initialized = false;
        System.out.println("Audio Manager desligado.");
    }

    public void setBackend(String value) {
        backend = value;
    }

    public String getBackend() {
        return backend;
    }

    public void setSampleRate(int value) {
        sampleRate = value;
    }

    public int getSampleRate() {
        return sampleRate;
    }

    public void setEnabled(boolean value) {
        enabled = value;
    }

    public boolean isEnabled() {
        return enabled;
    }

    public String getStatus() {

        if (initialized) {
            return "Áudio ativo";
        }

        return "Áudio parado";
    }

}
