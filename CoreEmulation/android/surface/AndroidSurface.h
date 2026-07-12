#pragma once

#include <android/native_window.h>

class AndroidSurface
{
public:
    static void SetSurface(ANativeWindow* window);
    static ANativeWindow* GetSurface();

    static bool IsValid();

    static void Shutdown();

private:
    static ANativeWindow* surface;
};
