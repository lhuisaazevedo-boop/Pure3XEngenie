package com.pure3x.engine;

public class Pure3XMaterial {

    private float red;
    private float green;
    private float blue;
    private float alpha;

    public Pure3XMaterial() {
        this(1.0f, 1.0f, 1.0f, 1.0f);
    }

    public Pure3XMaterial(float red, float green, float blue, float alpha) {
        this.red = red;
        this.green = green;
        this.blue = blue;
        this.alpha = alpha;
    }

    public float getRed() {
        return red;
    }

    public float getGreen() {
        return green;
    }

    public float getBlue() {
        return blue;
    }

    public float getAlpha() {
        return alpha;
    }

    public void setColor(float red, float green, float blue, float alpha) {
        this.red = red;
        this.green = green;
        this.blue = blue;
        this.alpha = alpha;
    }
}
