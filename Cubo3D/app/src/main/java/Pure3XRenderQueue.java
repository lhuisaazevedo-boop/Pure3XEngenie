package com.pure3x.engine;

import java.util.ArrayList;
import java.util.List;

public class Pure3XRenderQueue {

    private final List<Pure3XObject> objects = new ArrayList<>();

    public void add(Pure3XObject object) {
        objects.add(object);
    }

    public void clear() {
        objects.clear();
    }

    public List<Pure3XObject> getObjects() {
        return objects;
    }

    public int size() {
        return objects.size();
    }
}
