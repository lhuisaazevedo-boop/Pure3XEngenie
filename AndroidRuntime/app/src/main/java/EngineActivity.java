package com.pure3x.engine;

import android.app.Activity;
import android.graphics.Color;
import android.os.Bundle;
import android.view.Gravity;
import android.widget.LinearLayout;
import android.widget.TextView;

public class EngineActivity extends Activity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        LinearLayout layout = new LinearLayout(this);
        layout.setOrientation(LinearLayout.VERTICAL);
        layout.setGravity(Gravity.CENTER);
        layout.setBackgroundColor(Color.BLACK);

        TextView titulo = new TextView(this);
        titulo.setText("Pure3XEngenie");
        titulo.setTextColor(Color.WHITE);
        titulo.setTextSize(32);

        TextView status = new TextView(this);
        status.setText(
                "\nEngine Runtime\n\n" +
                "Status: Inicializada\n" +
                "Versão: v0.2.3 Alpha\n\n" +
                "Próxima etapa:\n" +
                "• Carregar Firmware\n" +
                "• Game Manager\n" +
                "• Renderizador RSX\n" +
                "• Áudio\n" +
                "• Input"
        );
        status.setTextColor(Color.GREEN);
        status.setGravity(Gravity.CENTER);

        layout.addView(titulo);
        layout.addView(status);

        setContentView(layout);
    }
}
