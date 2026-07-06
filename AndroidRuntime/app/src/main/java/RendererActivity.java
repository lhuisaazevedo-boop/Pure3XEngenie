package com.pure3x.engine;

import android.app.Activity;
import android.graphics.Color;
import android.opengl.GLSurfaceView;
import android.os.Bundle;
import android.view.Gravity;
import android.widget.FrameLayout;
import android.widget.TextView;

import java.util.Locale;

public class RendererActivity extends Activity {

    private GLSurfaceView glView;
    private TextView fpsView;
    private Pure3XRenderer renderer;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        glView = new GLSurfaceView(this);
        glView.setEGLContextClientVersion(3);

        renderer = new Pure3XRenderer();
        glView.setRenderer(renderer);

        // Permite desenhar views por cima do OpenGL
        glView.setZOrderOnTop(false);

        fpsView = new TextView(this);
        fpsView.setText("PURE3X");
        fpsView.setTextSize(24f);
        fpsView.setTextColor(Color.RED);
        fpsView.setBackgroundColor(Color.argb(180, 0, 0, 0));
        fpsView.setPadding(20, 20, 20, 20);

        FrameLayout layout = new FrameLayout(this);

        layout.addView(glView);

        FrameLayout.LayoutParams params =
                new FrameLayout.LayoutParams(
                        FrameLayout.LayoutParams.WRAP_CONTENT,
                        FrameLayout.LayoutParams.WRAP_CONTENT
                );

        params.gravity = Gravity.TOP | Gravity.START;

        layout.addView(fpsView, params);

        setContentView(layout);

        fpsView.post(new Runnable() {
            @Override
            public void run() {

                fpsView.setText(
                        String.format(
                                Locale.US,
                                "FPS: %.0f",
                                renderer.getFPS()
                        )
                );

                fpsView.bringToFront();
                fpsView.invalidate();

                fpsView.postDelayed(this, 250);
            }
        });
    }

    @Override
    protected void onResume() {
        super.onResume();
        glView.onResume();
    }

    @Override
    protected void onPause() {
        super.onPause();
        glView.onPause();
    }
}
