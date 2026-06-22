#ifndef PURE3X_SPU_INTERPRETER_H
#define PURE3X_SPU_INTERPRETER_H

#include "SPUState.h"
#include "SPUDecoder.h"

namespace Pure3X {

class SPUInterpreter
{
public:
    SPUInterpreter();

    bool Initialize();
    void Reset();
    void Execute(uint32_t instruction);
    void Shutdown();

private:
    SPUState state;
    SPUDecoder decoder;
};

} // namespace Pure3X

#endif
