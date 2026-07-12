#include "Window.h"

#include <iostream>

bool Window::Initialize(int w, int h, const char* title) {
    width = w;
    height = h;
    opened = true;

    std::cout << "[Window] Criada: "
              << title
              << " ("
              << width
              << "x"
              << height
              << ")"
              << std::endl;

    return true;
}

void Window::PollEvents() {
    if (!opened)
        return;

    // Futuramente receberá eventos do X11/EGL.
}

bool Window::IsOpen() const {
    return opened;
}

void Window::Close() {
    opened = false;
}

void Window::Shutdown() {
    if (!opened)
        return;

    opened = false;

    std::cout << "[Window] Encerrada." << std::endl;
}
