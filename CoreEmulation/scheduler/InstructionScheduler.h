#ifndef PURE3X_INSTRUCTIONSCHEDULER_H
#define PURE3X_INSTRUCTIONSCHEDULER_H

#include "FIFOQueue.h"

namespace Pure3X {

class InstructionScheduler {
public:
    InstructionScheduler();

    bool Initialize();
    void Shutdown();

    void Schedule(uint64_t instruction);
    void Execute();

private:
    FIFOQueue m_fifo;
};

} // namespace Pure3X

#endif // PURE3X_INSTRUCTIONSCHEDULER_H
