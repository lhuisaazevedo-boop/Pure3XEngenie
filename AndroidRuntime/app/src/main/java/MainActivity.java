package com.pure3x.engine;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;
import android.view.Gravity;

public class MainActivity extends Activity {

    static {
        System.loadLibrary("lhuis.pure3x");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        TextView tv = new TextView(this);
        tv.setGravity(Gravity.CENTER);

        tv.setText(
                "Pure3XEngenie v0.2.4\n\n" +
                "Status: Android Runtime OK\n\n" +
                "Engine: Carregada\n" +
                "Arquitetura: ARM64\n" +
                "Biblioteca: liblhuis.pure3x.so\n\n" +
                "Emulador PlayStation 3\n" +
                "Em desenvolvimento."
        );

        setContentView(tv);
    }
}
