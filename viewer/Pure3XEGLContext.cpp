#include "Pure3XEGLContext.h"
#include "../CoreEmulation/android/window/AndroidNativeWindow.h"

#include <iostream>

bool Pure3XEGLContext::Initialize()
{
    if (initialized)
        return true;

    if (!AndroidNativeWindow::IsValid())
    {
        std::cout << "[Pure3XEGLContext] Nenhuma ANativeWindow disponível." << std::endl;
        return false;
    }

    display = eglGetDisplay(EGL_DEFAULT_DISPLAY);

    if (display == EGL_NO_DISPLAY)
    {
        std::cout << "[Pure3XEGLContext] Falha ao obter EGLDisplay." << std::endl;
        return false;
    }

    surface = EGL_NO_SURFACE;
    context = EGL_NO_CONTEXT;

    initialized = true;

    std::cout << "[Pure3XEGLContext] Inicializado." << std::endl;
    std::cout << "[Pure3XEGLContext] Display preparado." << std::endl;
    std::cout << "[Pure3XEGLContext] Surface preparada." << std::endl;
    std::cout << "[Pure3XEGLContext] Context preparado." << std::endl;

    return true;
}

void Pure3XEGLContext::SwapBuffers()
{
    if (!initialized)
        return;

    // Próxima etapa:
    // eglSwapBuffers(display, surface);

    std::cout << "[Pure3XEGLContext] SwapBuffers." << std::endl;
}

void Pure3XEGLContext::Shutdown()
{
    if (!initialized)
        return;

    // Próxima etapa:
    // eglDestroyContext(display, context);
    // eglDestroySurface(display, surface);
    // eglTerminate(display);

    display = EGL_NO_DISPLAY;
    surface = EGL_NO_SURFACE;
    context = EGL_NO_CONTEXT;

    initialized = false;

    std::cout << "[Pure3XEGLContext] Encerrado." << std::endl;
}
