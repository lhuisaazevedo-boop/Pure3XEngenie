#pragma once

#include <EGL/egl.h>
#include <X11/Xlib.h>

class EGLContextManager {
public:
    EGLContextManager() = default;
    ~EGLContextManager() = default;

    bool Initialize(Display* display, Window window);
    void SwapBuffers();
    void Shutdown();

private:
    EGLDisplay eglDisplay = EGL_NO_DISPLAY;
    EGLSurface eglSurface = EGL_NO_SURFACE;
    EGLContext eglContext = EGL_NO_CONTEXT;
    EGLConfig eglConfig = nullptr;
};
