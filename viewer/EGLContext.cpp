#include "EGLContext.h"

#include <EGL/egl.h>
#include <iostream>

bool EGLContextManager::Initialize(Display* display, Window window) {

    eglDisplay = eglGetDisplay((EGLNativeDisplayType)display);

    if (eglDisplay == EGL_NO_DISPLAY) {
        std::cout << "[EGL] Falha ao obter EGLDisplay." << std::endl;
        return false;
    }

    if (!eglInitialize(eglDisplay, nullptr, nullptr)) {
        std::cout << "[EGL] Falha ao inicializar EGL." << std::endl;
        return false;
    }

    const EGLint configAttribs[] = {
        EGL_SURFACE_TYPE, EGL_WINDOW_BIT,
        EGL_RENDERABLE_TYPE, EGL_OPENGL_ES3_BIT,
        EGL_RED_SIZE, 8,
        EGL_GREEN_SIZE, 8,
        EGL_BLUE_SIZE, 8,
        EGL_DEPTH_SIZE, 24,
        EGL_NONE
    };

    EGLint numConfigs;

    if (!eglChooseConfig(
            eglDisplay,
            configAttribs,
            &eglConfig,
            1,
            &numConfigs)) {

        std::cout << "[EGL] Falha ao escolher configuração." << std::endl;
        return false;
    }

    eglSurface = eglCreateWindowSurface(
        eglDisplay,
        eglConfig,
        (EGLNativeWindowType)window,
        nullptr);

    if (eglSurface == EGL_NO_SURFACE) {
        std::cout << "[EGL] Falha ao criar superfície." << std::endl;
        return false;
    }

    const EGLint contextAttribs[] = {
        EGL_CONTEXT_CLIENT_VERSION,
        3,
        EGL_NONE
    };

    eglContext = eglCreateContext(
        eglDisplay,
        eglConfig,
        EGL_NO_CONTEXT,
        contextAttribs);

    if (eglContext == EGL_NO_CONTEXT) {
        std::cout << "[EGL] Falha ao criar contexto." << std::endl;
        return false;
    }

    if (!eglMakeCurrent(
            eglDisplay,
            eglSurface,
            eglSurface,
            eglContext)) {

        std::cout << "[EGL] Falha ao ativar contexto." << std::endl;
        return false;
    }

    std::cout << "[EGL] Contexto OpenGL ES 3.0 criado." << std::endl;

    return true;
}

void EGLContextManager::SwapBuffers() {
    eglSwapBuffers(eglDisplay, eglSurface);
}

void EGLContextManager::Shutdown() {

    if (eglDisplay != EGL_NO_DISPLAY) {

        eglMakeCurrent(
            eglDisplay,
            EGL_NO_SURFACE,
            EGL_NO_SURFACE,
            EGL_NO_CONTEXT);

        if (eglContext != EGL_NO_CONTEXT)
            eglDestroyContext(eglDisplay, eglContext);

        if (eglSurface != EGL_NO_SURFACE)
            eglDestroySurface(eglDisplay, eglSurface);

        eglTerminate(eglDisplay);
    }

    eglDisplay = EGL_NO_DISPLAY;
    eglSurface = EGL_NO_SURFACE;
    eglContext = EGL_NO_CONTEXT;

    std::cout << "[EGL] Encerrado." << std::endl;
}
