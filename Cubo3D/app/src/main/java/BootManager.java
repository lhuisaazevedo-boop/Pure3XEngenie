package com.pure3x.engine;

public class BootManager {

    private boolean initialized;
    private boolean firmwareLoaded;
    private boolean gameLoaded;
    private String currentGame;

    public BootManager() {
        initialized = false;
        firmwareLoaded = false;
        gameLoaded = false;
        currentGame = "Nenhum";
    }

    public void initialize() {

        initialized = true;

        System.out.println("==================================");
        System.out.println("Inicializando Boot Manager...");
        System.out.println("Boot Manager pronto.");
        System.out.println("==================================");

    }

    public void loadFirmware() {

        firmwareLoaded = true;

        System.out.println("Firmware PS3 carregado.");

    }

    public void loadGame(String gameName) {

        currentGame = gameName;
        gameLoaded = true;

        System.out.println("Jogo carregado: " + currentGame);

    }

    public void bootGame() {

        if (!initialized) {
            System.out.println("Boot Manager não inicializado.");
            return;
        }

        if (!firmwareLoaded) {
            System.out.println("Firmware não carregado.");
            return;
        }

        if (!gameLoaded) {
            System.out.println("Nenhum jogo selecionado.");
            return;
        }

        System.out.println("==================================");
        System.out.println("Iniciando Boot...");
        System.out.println("Executando: " + currentGame);
        System.out.println("Sistema iniciado.");
        System.out.println("==================================");

    }

    public boolean isInitialized() {
        return initialized;
    }

    public boolean isFirmwareLoaded() {
        return firmwareLoaded;
    }

    public boolean isGameLoaded() {
        return gameLoaded;
    }

    public String getCurrentGame() {
        return currentGame;
    }

    public void shutdown() {

        initialized = false;
        firmwareLoaded = false;
        gameLoaded = false;
        currentGame = "Nenhum";

        System.out.println("Boot Manager desligado.");

    }

    public String getStatus() {

        if (initialized) {
            return "Boot Manager ativo";
        }

        return "Boot Manager parado";
    }

}
