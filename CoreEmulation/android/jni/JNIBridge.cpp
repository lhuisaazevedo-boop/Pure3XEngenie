#include "JNIBridge.h"
#include <iostream>

namespace Pure3X
{

void JNIBridge::ShowInfo()
{
    std::cout << "\n===== JNI BRIDGE =====\n";
    std::cout << "Layer    : Java <-> C++\n";
    std::cout << "Package  : lhuis.pure3xengine\n";
    std::cout << "NDK      : r29\n";
    std::cout << "Status   : Ready\n";
    std::cout << "Target   : APK Android\n";
    std::cout << "======================\n";
}

}
