package com.pure3x.engine;

import java.util.ArrayList;
import java.util.List;

public class GameManager {

    private final List<String> gameList;

    public GameManager() {
        gameList = new ArrayList<>();
    }

    public void scanGames() {

        gameList.clear();

        gameList.add("=== Pure3XEngenie ===");
        gameList.add("");

        gameList.add("📂 Procurar jogos");
        gameList.add("💾 Memória Interna");
        gameList.add("💾 Cartão SD");
        gameList.add("");

        gameList.add("Formatos suportados:");
        gameList.add("• ISO");
        gameList.add("• PKG");
        gameList.add("• ELF");
        gameList.add("• SELF");
        gameList.add("• PS3_GAME");
        gameList.add("");

        gameList.add("Nenhum jogo encontrado.");
    }

    public List<String> getGames() {
        return gameList;
    }

    public int getGameCount() {
        return gameList.size();
    }

    public void clearGames() {
        gameList.clear();
    }

    public void addGame(String gameName) {
        gameList.add(gameName);
    }
}
