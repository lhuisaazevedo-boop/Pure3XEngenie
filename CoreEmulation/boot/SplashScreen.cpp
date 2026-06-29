#include "SplashScreen.h"

#include <chrono>
#include <iostream>
#include <thread>

namespace Pure3X
{

void SplashScreen::Show()
{
    std::cout << "\n";
    std::cout << "=================================================\n";
    std::cout << "               Pure3XEngenie\n";
    std::cout << "            PlayStation 3 Emulator\n";
    std::cout << "=================================================\n";
    std::cout << "\n";
    std::cout << "               Version 0.2.1 Alpha\n";
    std::cout << "\n";
    std::cout << "         Initializing Engine...\n";
    std::cout << "\n";

    for (int i = 0; i <= 100; i += 10)
    {
        std::cout << "\rLoading: " << i << "%" << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(120));
    }

    std::cout << "\n\n";
    std::cout << "[OK] Splash concluída.\n";
    std::cout << "=================================================\n\n";
}

} // namespace Pure3X
