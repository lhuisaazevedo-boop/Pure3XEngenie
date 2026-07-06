package com.pure3x.engine;

import java.util.ArrayList;
import java.util.List;

public class Pure3XSceneManager {

    private final List<Pure3XObject> objects = new ArrayList<>();

    public void addObject(Pure3XObject object) {
        objects.add(object);
    }

    public void removeObject(Pure3XObject object) {
        objects.remove(object);
    }

    public List<Pure3XObject> getObjects() {
        return objects;
    }

    public void clear() {
        objects.clear();
    }

    public int getObjectCount() {
        return objects.size();
    }

    public void update(float deltaTime) {
        for (Pure3XObject object : objects) {
            object.update(deltaTime);
        }
    }
}
