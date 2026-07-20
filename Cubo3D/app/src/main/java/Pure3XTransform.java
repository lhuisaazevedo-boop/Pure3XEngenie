package com.pure3x.engine;

public class Pure3XTransform {

    private float rotationX;
    private float rotationY;
    private float rotationZ;

    public Pure3XTransform() {
        rotationX = 0.0f;
        rotationY = 0.0f;
        rotationZ = 0.0f;
    }

    public void update(float deltaTime) {
        rotationY += 45.0f * deltaTime;

        if (rotationY >= 360.0f) {
            rotationY -= 360.0f;
        }
    }

    public float getRotationX() {
        return rotationX;
    }

    public float getRotationY() {
        return rotationY;
    }

    public float getRotationZ() {
        return rotationZ;
    }

    public void setRotation(float x, float y, float z) {
        rotationX = x;
        rotationY = y;
        rotationZ = z;
    }
}
