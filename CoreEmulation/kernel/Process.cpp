#include "Process.h"
#include "../logger/Log.h"

namespace Pure3X {

Process::Process() {}

bool Process::Create(const std::string& name)
{
    Log::Info("Criando processo: " + name);
    return true;
}

}
