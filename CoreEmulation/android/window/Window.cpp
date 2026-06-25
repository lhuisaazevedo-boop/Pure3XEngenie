#include <iostream>
#include "Window.h"

namespace Pure3X
{

void Window::ShowInfo()
{
    std::cout << "\n========== Window Manager ==========\n";
    std::cout << "Status : Ready\n";
    std::cout << "Backend: Android Native Window\n";
    std::cout << "Surface: Connected\n";
    std::cout << "Display: Ready\n";
    std::cout << "====================================\n";
}

}
