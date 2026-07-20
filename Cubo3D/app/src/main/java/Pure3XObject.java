package com.pure3x.engine;

public class Pure3XObject {

    private Pure3XMesh mesh;
    private Pure3XMaterial material;
    private Pure3XTransform transform;

    public Pure3XObject(Pure3XMesh mesh,
                        Pure3XMaterial material,
                        Pure3XTransform transform) {

        this.mesh = mesh;
        this.material = material;
        this.transform = transform;
    }

    public Pure3XMesh getMesh() {
        return mesh;
    }

    public Pure3XMaterial getMaterial() {
        return material;
    }

    public Pure3XTransform getTransform() {
        return transform;
    }

    public void update(float deltaTime) {
        transform.update(deltaTime);
    }

    public void render() {
        // Será renderizado pelo Pure3XRenderer
    }
}
