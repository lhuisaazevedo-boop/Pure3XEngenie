#include "SPUDecoder.h"

#include <iostream>
#include <iomanip>

namespace Pure3X {

SPUDecoder::SPUDecoder()
{
}

void SPUDecoder::Decode(uint32_t instruction)
{
    std::cout
        << "[SPU] Decodificando instrução 0x"
        << std::hex
        << instruction
        << std::dec
        << std::endl;
}

} // namespace Pure3X
