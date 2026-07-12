#include "RendererGL.h"
#include "EGLContext.h"

#include <X11/Xlib.h>
#include <X11/Xutil.h>

#include <iostream>

int main() {

    Display* display = XOpenDisplay(nullptr);

    if (!display) {
        std::cerr << "Erro: não foi possível conectar ao X11." << std::endl;
        return 1;
    }

    int screen = DefaultScreen(display);

    const int windowWidth = 1280;
    const int windowHeight = 720;

    Window window = XCreateSimpleWindow(
        display,
        RootWindow(display, screen),
        0,
        0,
        windowWidth,
        windowHeight,
        0,
        BlackPixel(display, screen),
        WhitePixel(display, screen)
    );

    XStoreName(display, window, "Pure3XViewer");

    XSelectInput(
        display,
        window,
        ExposureMask |
        KeyPressMask |
        StructureNotifyMask
    );

    XMapWindow(display, window);
    XFlush(display);

    // Inicializa o EGL
    EGLContextManager egl;

    if (!egl.Initialize(display, window)) {
        std::cerr << "Falha ao inicializar EGL." << std::endl;
        XDestroyWindow(display, window);
        XCloseDisplay(display);
        return 1;
    }

    RendererGL renderer;

    if (!renderer.Initialize()) {
        std::cerr << "Falha ao inicializar o RendererGL." << std::endl;
        egl.Shutdown();
        XDestroyWindow(display, window);
        XCloseDisplay(display);
        return 1;
    }

    bool running = true;

    while (running) {

        renderer.BeginFrame();

        while (XPending(display)) {

            XEvent event;
            XNextEvent(display, &event);

            switch (event.type) {

                case KeyPress:
                    running = false;
                    break;

                case DestroyNotify:
                    running = false;
                    break;

                default:
                    break;
            }
        }

        renderer.EndFrame();

        egl.SwapBuffers();
    }

    renderer.Shutdown();

    egl.Shutdown();

    XDestroyWindow(display, window);

    XCloseDisplay(display);

    return 0;
}
