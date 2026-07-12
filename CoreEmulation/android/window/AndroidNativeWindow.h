#pragma once

#include <android/native_window.h>

class AndroidNativeWindow
{
public:
    static void SetWindow(ANativeWindow* window);
    static ANativeWindow* GetWindow();
    static bool IsValid();
    static void Shutdown();

private:
    static ANativeWindow* nativeWindow;
};
