#pragma once

#include <EGL/egl.h>

class Pure3XEGLContext {
public:
    bool Initialize();
    void SwapBuffers();
    void Shutdown();

private:
    bool initialized = false;

    EGLDisplay display = EGL_NO_DISPLAY;
    EGLSurface surface = EGL_NO_SURFACE;
    EGLContext context = EGL_NO_CONTEXT;
};
