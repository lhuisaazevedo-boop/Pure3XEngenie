package com.pure3x.engine;

import android.content.Context;
import android.opengl.GLSurfaceView;

public class Pure3XGLView extends GLSurfaceView {

    private final Pure3XRenderer renderer;

    public Pure3XGLView(Context context) {
        super(context);

        // OpenGL ES 3.0
        setEGLContextClientVersion(3);

        renderer = new Pure3XRenderer();
        setRenderer(renderer);

        // Renderização contínua
        setRenderMode(GLSurfaceView.RENDERMODE_CONTINUOUSLY);
    }
}
