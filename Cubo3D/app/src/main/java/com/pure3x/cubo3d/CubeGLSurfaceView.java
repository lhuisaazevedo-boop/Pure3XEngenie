package com.pure3x.cubo3d;

import android.content.Context;
import android.opengl.GLSurfaceView;

public class CubeGLSurfaceView extends GLSurfaceView {

    public CubeGLSurfaceView(Context context) {
        super(context);

        setEGLContextClientVersion(3);
        setRenderer(new CubeRenderer());
        setRenderMode(GLSurfaceView.RENDERMODE_CONTINUOUSLY);
    }
}
