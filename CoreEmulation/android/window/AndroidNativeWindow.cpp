#include "AndroidNativeWindow.h"

ANativeWindow* AndroidNativeWindow::nativeWindow = nullptr;

void AndroidNativeWindow::SetWindow(ANativeWindow* window)
{
    nativeWindow = window;
}

ANativeWindow* AndroidNativeWindow::GetWindow()
{
    return nativeWindow;
}

bool AndroidNativeWindow::IsValid()
{
    return nativeWindow != nullptr;
}

void AndroidNativeWindow::Shutdown()
{
    nativeWindow = nullptr;
}
