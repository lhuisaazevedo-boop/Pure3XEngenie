package com.pure3x.engine;

import android.app.Activity;
import android.os.Bundle;

public class RenderActivity extends Activity {

    private Pure3XGLView glView;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        glView = new Pure3XGLView(this);
        setContentView(glView);
    }

    @Override
    protected void onPause() {
        super.onPause();
        glView.onPause();
    }

    @Override
    protected void onResume() {
        super.onResume();
        glView.onResume();
    }
}
