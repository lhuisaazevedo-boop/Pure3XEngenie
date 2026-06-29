#include "SPUDecoder.h"

#include <iostream>

namespace Pure3X
{

bool SPUDecoder::ready = false;

bool SPUDecoder::Initialize()
{
    std::cout << "[SPUDecoder] Inicializando...\n";

    ready = true;

    return true;
}

void SPUDecoder::Shutdown()
{
    std::cout << "[SPUDecoder] Encerrando...\n";

    ready = false;
}

bool SPUDecoder::DecodeInstruction(uint32_t opcode)
{
    if (!ready)
        return false;

    std::cout << "[SPUDecoder] Opcode: 0x"
              << std::hex << opcode
              << std::dec << '\n';

    return true;
}

bool SPUDecoder::IsReady()
{
    return ready;
}

} // namespace Pure3X
