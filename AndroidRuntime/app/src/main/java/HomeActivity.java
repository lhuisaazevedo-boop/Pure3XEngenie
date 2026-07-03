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
                Intent intent = new Intent(HomeActivity.this, EngineActivity.class);
                startActivity(intent);
            }
        });

        btnConfig.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Toast.makeText(
                        HomeActivity.this,
                        "Configurações ainda em desenvolvimento.",
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
                        "Pure3XEngenie v0.2.3 Alpha",
                        Toast.LENGTH_SHORT
                ).show();
            }
        });
    }
}
