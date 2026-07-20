package com.pure3x.engine;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

public class HomeActivity extends Activity {

    private static final String TAG = "Pure3XEngenie";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        Log.i(TAG, "HomeActivity iniciada.");

        setContentView(R.layout.activity_home);

        Button btnStart = findViewById(R.id.btnStart);
        Button btnConfig = findViewById(R.id.btnConfig);
        Button btnSystem = findViewById(R.id.btnSystem);
        Button btnAbout = findViewById(R.id.btnAbout);

        btnStart.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                Toast.makeText(
                        HomeActivity.this,
                        "Abrindo RenderActivity...",
                        Toast.LENGTH_SHORT
                ).show();

                Log.i(TAG, "Abrindo RenderActivity");

                Intent intent = new Intent(HomeActivity.this, RenderActivity.class);
                startActivity(intent);
            }
        });

        btnConfig.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Toast.makeText(
                        HomeActivity.this,
                        "Configurações em desenvolvimento.",
                        Toast.LENGTH_SHORT
                ).show();
            }
        });

        btnSystem.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Toast.makeText(
                        HomeActivity.this,
                        "Sistema Android Runtime OK.",
                        Toast.LENGTH_SHORT
                ).show();
            }
        });

        btnAbout.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Toast.makeText(
                        HomeActivity.this,
                        "Pure3XEngenie v0.2.4 Alpha\nPowered by Pure3X Runtime",
                        Toast.LENGTH_LONG
                ).show();
            }
        });
    }
}
