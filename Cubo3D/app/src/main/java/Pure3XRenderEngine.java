package com.pure3x.engine;

public class Pure3XRenderEngine {

    private final Pure3XRenderQueue renderQueue;

    public Pure3XRenderEngine() {
        renderQueue = new Pure3XRenderQueue();
    }

    public void submit(Pure3XObject object) {
        renderQueue.add(object);
    }

    public void clear() {
        renderQueue.clear();
    }

    public Pure3XRenderQueue getRenderQueue() {
        return renderQueue;
    }

    public void render() {

        for (Pure3XObject object : renderQueue.getObjects()) {
            object.render();
        }

    }
}
