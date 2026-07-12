#include "AndroidSurface.h"

ANativeWindow* AndroidSurface::surface = nullptr;

void AndroidSurface::SetSurface(ANativeWindow* window)
{
    surface = window;
}

ANativeWindow* AndroidSurface::GetSurface()
{
    return surface;
}

bool AndroidSurface::IsValid()
{
    return surface != nullptr;
}

void AndroidSurface::Shutdown()
{
    surface = nullptr;
}
