package com.pure3x.cubo3d;

import android.app.Activity;
import android.os.Bundle;

public class MainActivity extends Activity {

    static {
        System.loadLibrary("Cubo3D");
        System.loadLibrary("lhuis.pure3x");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        // Aqui iniciaremos o Cubo3D
    }
}
