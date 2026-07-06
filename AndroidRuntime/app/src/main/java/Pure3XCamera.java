package com.pure3x.engine;

import android.opengl.Matrix;

public class Pure3XCamera {

    private final float[] viewMatrix = new float[16];
    private final float[] projectionMatrix = new float[16];
    private final float[] mvpMatrix = new float[16];

    public Pure3XCamera() {

        Matrix.setLookAtM(
                viewMatrix,
                0,
                0.0f, 0.0f, 3.0f,
                0.0f, 0.0f, 0.0f,
                0.0f, 1.0f, 0.0f
        );
    }

    public void setProjection(int width, int height) {

        if (height == 0) {
            height = 1;
        }

        float aspect = (float) width / (float) height;

        Matrix.perspectiveM(
                projectionMatrix,
                0,
                60.0f,
                aspect,
                0.1f,
                100.0f
        );
    }

    public float[] getViewMatrix() {
        return viewMatrix;
    }

    public float[] getProjectionMatrix() {
        return projectionMatrix;
    }

    public float[] getMVP(float[] modelMatrix) {

        float[] temp = new float[16];

        Matrix.multiplyMM(
                temp,
                0,
                viewMatrix,
                0,
                modelMatrix,
                0
        );

        Matrix.multiplyMM(
                mvpMatrix,
                0,
                projectionMatrix,
                0,
                temp,
                0
        );

        return mvpMatrix;
    }
}
