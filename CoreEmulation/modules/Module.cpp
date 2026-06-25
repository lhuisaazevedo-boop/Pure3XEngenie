#include "Module.h"
#include "../logger/Log.h"

namespace Pure3X
{

Module::Module(const std::string& name)
    : m_name(name)
{
}

bool Module::Initialize()
{
    Log::Info("Inicializando módulo: " + m_name);
    return true;
}

void Module::Shutdown()
{
    Log::Info("Encerrando módulo: " + m_name);
}

const std::string& Module::GetName() const
{
    return m_name;
}

} // namespace Pure3X
