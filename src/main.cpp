#include "../CoreEmulation/Engine.h"

#include "../CoreEmulation/android/core/AndroidCore.h"
#include "../CoreEmulation/android/runtime/AndroidRuntime.h"

#include "../CoreEmulation/cell/CellSystem.h"

#include <iostream>

using namespace Pure3X;

int main()
{
    std::cout << "=====================================\n";
    std::cout << "       Pure3XEngenie v0.2.1 Alpha\n";
    std::cout << "=====================================\n\n";

    if (!AndroidCore::Initialize())
    {
        std::cerr << "[ERRO] AndroidCore falhou.\n";
        return -1;
    }

    if (!AndroidRuntime::Initialize())
    {
        std::cerr << "[ERRO] AndroidRuntime falhou.\n";

        AndroidCore::Shutdown();
        return -1;
    }

    if (!CellSystem::Initialize())
    {
        std::cerr << "[ERRO] CellSystem falhou.\n";

        AndroidRuntime::Shutdown();
        AndroidCore::Shutdown();
        return -1;
    }

    Engine engine;
    engine.run();

    CellSystem::Shutdown();
    AndroidRuntime::Shutdown();
    AndroidCore::Shutdown();

    std::cout << "\n[Pure3XEngenie] Encerrada com sucesso.\n";

    return 0;
}
