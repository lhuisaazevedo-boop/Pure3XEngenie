#include "Kernel.h"
#include "../logger/Log.h"

namespace Pure3X {

bool Kernel::Initialize()
{
    Log::Info("Kernel Base inicializado");
    return true;
}

void Kernel::Shutdown()
{
    Log::Info("Kernel Base encerrado");
}

std::string Kernel::GetVersion()
{
    return "Pure3X Kernel 0.1";
}

}
