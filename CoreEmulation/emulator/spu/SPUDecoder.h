#ifndef PURE3X_SPU_DECODER_H
#define PURE3X_SPU_DECODER_H

#include <cstdint>

namespace Pure3X {

class SPUDecoder
{
public:
    SPUDecoder();

    void Decode(uint32_t instruction);
};

} // namespace Pure3X

#endif
