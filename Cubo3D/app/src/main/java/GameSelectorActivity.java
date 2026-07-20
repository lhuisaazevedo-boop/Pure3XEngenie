package com.pure3x.engine;

import android.app.Activity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

public class GameSelectorActivity extends Activity {

    private Button btnSelectGame;
    private Button btnFirmware;
    private Button btnLibrary;
    private Button btnRun;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_game_selector);

        btnSelectGame = findViewById(R.id.btnSelectGame);
        btnFirmware = findViewById(R.id.btnFirmware);
        btnLibrary = findViewById(R.id.btnLibrary);
        btnRun = findViewById(R.id.btnRun);

        btnSelectGame.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Toast.makeText(
                        GameSelectorActivity.this,
                        "Abrindo seletor de jogos...",
                        Toast.LENGTH_SHORT
                ).show();
            }
        });

        btnFirmware.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Toast.makeText(
                        GameSelectorActivity.this,
                        "Gerenciador de Firmware",
                        Toast.LENGTH_SHORT
                ).show();
            }
        });

        btnLibrary.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Toast.makeText(
                        GameSelectorActivity.this,
                        "Biblioteca de Jogos",
                        Toast.LENGTH_SHORT
                ).show();
            }
        });

        btnRun.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Toast.makeText(
                        GameSelectorActivity.this,
                        "Inicializando Engine...",
                        Toast.LENGTH_SHORT
                ).show();
            }
        });
    }
}
