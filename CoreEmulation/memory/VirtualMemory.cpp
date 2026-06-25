#include "VirtualMemory.h"

#include <iostream>

namespace Pure3X {

VirtualMemory::VirtualMemory()
{
}

bool VirtualMemory::Initialize()
{
    std::cout << "[Memory] Virtual Memory inicializada." << std::endl;
    return true;
}

void VirtualMemory::Reset()
{
    std::cout << "[Memory] Virtual Memory resetada." << std::endl;
}

void VirtualMemory::Shutdown()
{
    std::cout << "[Memory] Virtual Memory encerrada." << std::endl;
}

uint64_t VirtualMemory::Translate(uint64_t virtualAddress) const
{
    return virtualAddress;
}

} // namespace Pure3X
