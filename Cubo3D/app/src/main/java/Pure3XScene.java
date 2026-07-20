package com.pure3x.engine;

import java.util.ArrayList;
import java.util.List;

public class Pure3XScene {

    private final List<Pure3XTransform> objects;

    public Pure3XScene() {
        objects = new ArrayList<>();
    }

    public void addObject(Pure3XTransform transform) {
        objects.add(transform);
    }

    public void removeObject(Pure3XTransform transform) {
        objects.remove(transform);
    }

    public void clear() {
        objects.clear();
    }

    public int getObjectCount() {
        return objects.size();
    }

    public List<Pure3XTransform> getObjects() {
        return objects;
    }

    public void update(float deltaTime) {
        for (Pure3XTransform object : objects) {
            object.update(deltaTime);
        }
    }
}
