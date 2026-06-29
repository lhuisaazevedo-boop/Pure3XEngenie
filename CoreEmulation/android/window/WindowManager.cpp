#include "WindowManager.h"

#include <iostream>

namespace Pure3X
{

bool WindowManager::running = false;

bool WindowManager::Initialize()
{
    std::cout << "[WindowManager] Inicializando...\n";

    running = true;

    std::cout << "[OK] Janela Android preparada.\n";

    return true;
}

void WindowManager::PollEvents()
{
    // Android usa o loop de eventos da NativeActivity/GameActivity.
    // Nenhum evento precisa ser tratado aqui por enquanto.
}

void WindowManager::Shutdown()
{
    std::cout << "[WindowManager] Encerrando...\n";

    running = false;
}

bool WindowManager::IsRunning()
{
    return running;
}

} // namespace Pure3X
