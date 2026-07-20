package com.pure3x.engine;

public class Pure3XCameraController {

    private final Pure3XEngineCamera camera;

    public Pure3XCameraController(Pure3XEngineCamera camera) {
        this.camera = camera;
    }

    public void update(float deltaTime) {
        // Atualizações futuras da câmera
    }

    public void forward(float speed) {
        camera.moveForward(speed);
    }

    public void backward(float speed) {
        camera.moveBackward(speed);
    }

    public void left(float speed) {
        camera.moveLeft(speed);
    }

    public void right(float speed) {
        camera.moveRight(speed);
    }

    public void up(float speed) {
        camera.moveUp(speed);
    }

    public void down(float speed) {
        camera.moveDown(speed);
    }

    public void rotate(float pitch, float yaw, float roll) {
        camera.rotate(pitch, yaw, roll);
    }

    public Pure3XEngineCamera getCamera() {
        return camera;
    }
}
