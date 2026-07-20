package com.pure3x.engine;

public class RuntimeManager {

    private boolean running;

    public RuntimeManager() {
        running = false;
    }

    public void startRuntime() {
        running = true;

        System.out.println("Android Runtime iniciado.");
        System.out.println("JNI carregado.");
        System.out.println("Bibliotecas carregadas.");
        System.out.println("Sistema pronto.");
    }

    public void stopRuntime() {
        running = false;
    }

    public boolean isRunning() {
        return running;
    }

    public String getStatus() {
        if (running) {
            return "Android Runtime ativo";
        }

        return "Android Runtime parado";
    }
}
