package com.pure3x.engine;

public class InputManager {

    private boolean initialized;
    private String controller;
    private boolean vibration;
    private int connectedControllers;

    public InputManager() {
        initialized = false;
        controller = "Touch Screen";
        vibration = true;
        connectedControllers = 1;
    }

    public void initialize() {

        initialized = true;

        System.out.println("==================================");
        System.out.println("Inicializando Entrada...");
        System.out.println("Controle: " + controller);
        System.out.println("Controles conectados: " + connectedControllers);
        System.out.println("Vibração: " + (vibration ? "Ligada" : "Desligada"));
        System.out.println("Input Manager pronto.");
        System.out.println("==================================");

    }

    public boolean isInitialized() {
        return initialized;
    }

    public void shutdown() {
        initialized = false;
        System.out.println("Input Manager desligado.");
    }

    public void setController(String value) {
        controller = value;
    }

    public String getController() {
        return controller;
    }

    public void setConnectedControllers(int value) {
        connectedControllers = value;
    }

    public int getConnectedControllers() {
        return connectedControllers;
    }

    public void setVibration(boolean value) {
        vibration = value;
    }

    public boolean isVibrationEnabled() {
        return vibration;
    }

    public String getStatus() {

        if (initialized) {
            return "Entrada ativa";
        }

        return "Entrada parada";
    }

}
