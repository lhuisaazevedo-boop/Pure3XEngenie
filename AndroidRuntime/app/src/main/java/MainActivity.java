package com.pure3x.engine;

import android.app.Activity;
import android.content.Intent;
import android.graphics.Color;
import android.os.Bundle;
import android.os.Handler;
import android.util.Log;
import android.view.Gravity;
import android.widget.LinearLayout;
import android.widget.TextView;

public class MainActivity extends Activity {

    private static final String TAG = "Pure3XEngenie";

    static {
        try {
            System.loadLibrary("lhuis.pure3x");
            Log.i(TAG, "Biblioteca nativa carregada com sucesso.");
        } catch (Throwable e) {
            Log.e(TAG, "Falha ao carregar liblhuis.pure3x.so", e);
        }
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        LinearLayout layout = new LinearLayout(this);
        layout.setOrientation(LinearLayout.VERTICAL);
        layout.setGravity(Gravity.CENTER);
        layout.setBackgroundColor(Color.rgb(0, 96, 120));

        TextView titulo = new TextView(this);
        titulo.setText("Pure3XEngenie");
        titulo.setTextColor(Color.WHITE);
        titulo.setTextSize(30);
        titulo.setGravity(Gravity.CENTER);

        TextView versao = new TextView(this);
        versao.setText(
                "\nv0.2.4 Alpha\n\n" +
                "Inicializando Engine...\n\n" +
                "Powered by Pure3X Runtime"
        );
        versao.setTextColor(Color.rgb(180, 255, 255));
        versao.setTextSize(18);
        versao.setGravity(Gravity.CENTER);

        layout.addView(titulo);
        layout.addView(versao);

        setContentView(layout);

        new Handler().postDelayed(new Runnable() {
            @Override
            public void run() {

                Intent intent = new Intent(MainActivity.this, RenderActivity.class);
                startActivity(intent);
                finish();

            }
        }, 2500);
    }
}
