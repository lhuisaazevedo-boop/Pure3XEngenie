#include "AndroidBridge.h"

#include <iostream>

namespace Pure3X
{

bool AndroidBridge::ready = false;

static void* nativeWindowHandle = nullptr;

bool AndroidBridge::Initialize()
{
    std::cout << "[AndroidBridge] Inicializando...\n";

    ready = true;

    std::cout << "[AndroidBridge] Bridge pronta.\n";

    return true;
}

void AndroidBridge::AttachWindow(void* windowHandle)
{
    if (!ready)
        return;

    nativeWindowHandle = windowHandle;

    std::cout
        << "[AndroidBridge] Window conectada: "
        << nativeWindowHandle
        << "\n";
}

void AndroidBridge::DetachWindow()
{
    if (!ready)
        return;

    std::cout << "[AndroidBridge] Window desconectada.\n";

    nativeWindowHandle = nullptr;
}

void AndroidBridge::Shutdown()
{
    std::cout << "[AndroidBridge] Encerrando...\n";

    nativeWindowHandle = nullptr;
    ready = false;

    std::cout << "[AndroidBridge] Bridge finalizada.\n";
}

bool AndroidBridge::IsReady()
{
    return ready;
}

} // namespace Pure3X
