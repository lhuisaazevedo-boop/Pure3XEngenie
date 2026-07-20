package com.pure3x.engine;

public class Pure3XRotation {

    private float angleX = 0.0f;
    private float angleY = 0.0f;
    private float angleZ = 0.0f;

    public void update() {
        angleX += 0.5f;
        angleY += 0.7f;
        angleZ += 0.3f;

        if (angleX >= 360.0f) angleX -= 360.0f;
        if (angleY >= 360.0f) angleY -= 360.0f;
        if (angleZ >= 360.0f) angleZ -= 360.0f;
    }

    public float getAngleX() {
        return angleX;
    }

    public float getAngleY() {
        return angleY;
    }

    public float getAngleZ() {
        return angleZ;
    }

    public void reset() {
        angleX = 0.0f;
        angleY = 0.0f;
        angleZ = 0.0f;
    }
}
