#ifndef PURE3X_SPU_DECODER_H
#define PURE3X_SPU_DECODER_H

#include <cstdint>

namespace Pure3X
{

class SPUDecoder
{
public:
    static bool Initialize();
    static void Shutdown();

    static bool DecodeInstruction(uint32_t opcode);

    static bool IsReady();

private:
    static bool ready;
};

} // namespace Pure3X

#endif
