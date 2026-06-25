#include "AndroidBridge.h"
#include <iostream>

namespace Pure3X
{

void AndroidBridge::ShowInfo()
{
    std::cout << "\n===== ANDROID BRIDGE =====\n";
    std::cout << "Package  : lhuis.pure3xengine\n";
    std::cout << "Platform : Android\n";
    std::cout << "ABI      : arm64-v8a\n";
    std::cout << "NDK      : r29\n";
    std::cout << "JNI      : Future Module\n";
    std::cout << "Status   : Online\n";
    std::cout << "==========================\n";
}

}
