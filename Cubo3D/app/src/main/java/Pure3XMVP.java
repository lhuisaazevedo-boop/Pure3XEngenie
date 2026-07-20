package com.pure3x.engine;

import android.opengl.Matrix;

public class Pure3XMVP {

    private final float[] modelMatrix = new float[16];
    private final float[] mvpMatrix = new float[16];

    public Pure3XMVP() {
        Matrix.setIdentityM(modelMatrix, 0);
    }

    public void translate(float x, float y, float z) {
        Matrix.translateM(modelMatrix, 0, x, y, z);
    }

    public void rotate(float angle, float x, float y, float z) {
        Matrix.rotateM(modelMatrix, 0, angle, x, y, z);
    }

    public void scale(float x, float y, float z) {
        Matrix.scaleM(modelMatrix, 0, x, y, z);
    }

    public void reset() {
        Matrix.setIdentityM(modelMatrix, 0);
    }

    public float[] getModelMatrix() {
        return modelMatrix;
    }

    public float[] getMVP(Pure3XCamera camera) {
        return camera.getMVP(modelMatrix);
    }
}
