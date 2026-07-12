#pragma once

#include <android/native_window.h>

namespace Pure3X
{

class JNIBridge
{
public:
    static void ShowInfo();

    static void SetNativeWindow(ANativeWindow* window);
    static ANativeWindow* GetNativeWindow();

private:
    static ANativeWindow* s_window;
};

}
