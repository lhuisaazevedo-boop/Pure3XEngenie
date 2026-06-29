#pragma once

namespace Pure3X
{

class AndroidRuntime
{
public:
    // Inicialização
    static bool Initialize();
    static void Shutdown();

private:
    AndroidRuntime() = delete;
};

} // namespace Pure3X
