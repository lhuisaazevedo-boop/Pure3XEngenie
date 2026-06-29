#include "BootAndroid.h"

#include "../android/jni/JNIBridge.h"
#include "../android/apk/APKLoader.h"
#include "../android/ndk/NDKManager.h"
#include "../android/surface/SurfaceManager.h"
#include "../android/window/Window.h"
#include "../android/renderer/Renderer.h"

#include <iostream>

namespace Pure3X
{

void BootAndroid::Initialize()
{
    std::cout << "[BOOT] Inicializando Android Runtime..." << std::endl;

    APKLoader::ShowInfo();
    NDKManager::ShowStatus();
    SurfaceManager::ShowStatus();
    Window::ShowInfo();
    Renderer::ShowInfo();

    std::cout << "[OK] Android Runtime inicializado." << std::endl;
}

} // namespace Pure3X
