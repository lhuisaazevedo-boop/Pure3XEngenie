package com.pure3x.engine;

import android.app.Activity;
import android.os.Bundle;
import android.widget.ArrayAdapter;
import android.widget.ListView;

public class GameBrowserActivity extends Activity {

    private ListView listGames;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_game_browser);

        listGames = findViewById(R.id.listGames);

        String[] jogos = {
                "Nenhum jogo encontrado",
                "",
                "Suporte futuro:",
                "• Jogos ISO",
                "• Jogos PKG",
                "• Pastas PS3_GAME",
                "• Arquivos ELF",
                "• Arquivos SELF",
                "",
                "Pure3XEngenie v0.2.3 Alpha"
        };

        ArrayAdapter<String> adapter =
                new ArrayAdapter<>(
                        this,
                        android.R.layout.simple_list_item_1,
                        jogos
                );

        listGames.setAdapter(adapter);
    }
}
