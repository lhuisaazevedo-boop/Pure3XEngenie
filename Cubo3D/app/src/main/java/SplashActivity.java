package com.pure3x.engine;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;
import android.widget.ImageView;
import android.widget.ProgressBar;
import android.widget.TextView;

public class SplashActivity extends Activity {

    private ImageView logo;
    private ProgressBar loading;
    private TextView status;

    private final int[] imagens = {
            R.drawable.pure3xengenie_1,
            R.drawable.pure3xengenie_2,
            R.drawable.pure3xengenie_3,
            R.drawable.pure3xengenie_4,
            R.drawable.pure3xengenie_5,
            R.drawable.pure3xengenie_6,
            R.drawable.pure3xengenie_7,
            R.drawable.pure3xengenie_8,
            R.drawable.pure3xengenie_9,
            R.drawable.pure3xengenie_10,
            R.drawable.pure3xengenie_11
    };

    private final String[] textos = {
            "Inicializando Android Runtime...",
            "Carregando módulos...",
            "Verificando Engine...",
            "Inicializando RSX...",
            "Inicializando Áudio...",
            "Inicializando Entrada...",
            "Preparando Sistema...",
            "Carregando Interface...",
            "Finalizando...",
            "Quase pronto...",
            "Bem-vindo ao Pure3XEngenie"
    };

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_splash);

        logo = findViewById(R.id.logo);
        loading = findViewById(R.id.loading);
        status = findViewById(R.id.status);

        iniciarSplash();
    }

    private void iniciarSplash() {

        Handler handler = new Handler();

        for (int i = 0; i < imagens.length; i++) {

            final int index = i;

            handler.postDelayed(new Runnable() {
                @Override
                public void run() {

                    logo.setImageResource(imagens[index]);
                    status.setText(textos[index]);
                    loading.setProgress((index + 1) * 100 / imagens.length);

                }
            }, index * 800);
        }

        handler.postDelayed(new Runnable() {
            @Override
            public void run() {

                Intent intent = new Intent(SplashActivity.this, HomeActivity.class);
                startActivity(intent);
                finish();

            }
        }, imagens.length * 800 + 800);
    }
}
