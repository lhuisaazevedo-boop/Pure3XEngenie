#include "../CoreEmulation/boot/Boot.h"
#include "../CoreEmulation/Engine.h"
#include "../CoreEmulation/android/AndroidBridge.h"

int main()
{
    // Inicializa o Boot
    Pure3X::bootSystem();

    // Inicializa a camada Android
    Pure3X::AndroidBridge::ShowInfo();

    // Inicializa a Engine
    Pure3X::Engine engine;
    engine.run();

    return 0;
}
