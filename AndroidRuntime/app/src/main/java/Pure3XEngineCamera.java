package com.pure3x.engine;

public class Pure3XEngineCamera {

    private float x;
    private float y;
    private float z;

    private float pitch;
    private float yaw;
    private float roll;

    private float fov = 60.0f;

    public Pure3XEngineCamera() {
        x = 0.0f;
        y = 0.0f;
        z = 3.0f;
    }

    public void setPosition(float x, float y, float z) {
        this.x = x;
        this.y = y;
        this.z = z;
    }

    public void moveForward(float value) {
        z -= value;
    }

    public void moveBackward(float value) {
        z += value;
    }

    public void moveLeft(float value) {
        x -= value;
    }

    public void moveRight(float value) {
        x += value;
    }

    public void moveUp(float value) {
        y += value;
    }

    public void moveDown(float value) {
        y -= value;
    }

    public void rotate(float pitch, float yaw, float roll) {
        this.pitch += pitch;
        this.yaw += yaw;
        this.roll += roll;
    }

    public float getX() {
        return x;
    }

    public float getY() {
        return y;
    }

    public float getZ() {
        return z;
    }

    public float getPitch() {
        return pitch;
    }

    public float getYaw() {
        return yaw;
    }

    public float getRoll() {
        return roll;
    }

    public float getFov() {
        return fov;
    }

    public void setFov(float fov) {
        this.fov = fov;
    }
}
