package com.pure3x.engine;

import java.util.ArrayList;
import java.util.List;

public class GameScanner {

    private final List<String> games;

    public GameScanner() {
        games = new ArrayList<>();
    }

    public void scanInternalStorage() {
        games.add("Escaneando Memória Interna...");
    }

    public void scanSdCard() {
        games.add("Escaneando Cartão SD...");
    }

    public void scanAll() {
        games.clear();

        scanInternalStorage();
        scanSdCard();

        games.add("");
        games.add("Formatos suportados:");
        games.add("• ISO");
        games.add("• PKG");
        games.add("• ELF");
        games.add("• SELF");
        games.add("• PS3_GAME");
    }

    public List<String> getGames() {
        return games;
    }

    public void clear() {
        games.clear();
    }

    public int getCount() {
        return games.size();
    }
}
