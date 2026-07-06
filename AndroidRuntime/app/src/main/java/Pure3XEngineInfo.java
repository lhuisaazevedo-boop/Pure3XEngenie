package com.pure3x.engine;

public class Pure3XEngineInfo {

    public static final String ENGINE_NAME = "Pure3XEngenie";
    public static final String VERSION = "0.2.4 Alpha";
    public static final String AUTHOR = "Lhuis30";
    public static final String TARGET = "PlayStation 3 Emulator";
    public static final String GRAPHICS = "OpenGL ES 3.0";
    public static final String PLATFORM = "Android";

    private Pure3XEngineInfo() {
    }

    public static String getVersionString() {
        return ENGINE_NAME + " " + VERSION;
    }

    public static String getEngineName() {
        return ENGINE_NAME;
    }

    public static String getAuthor() {
        return AUTHOR;
    }

    public static String getTarget() {
        return TARGET;
    }

    public static String getGraphicsAPI() {
        return GRAPHICS;
    }

    public static String getPlatform() {
        return PLATFORM;
    }
}
