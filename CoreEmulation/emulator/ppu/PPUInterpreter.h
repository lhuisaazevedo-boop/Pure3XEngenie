#ifndef PURE3X_PPU_INTERPRETER_H
#define PURE3X_PPU_INTERPRETER_H

namespace Pure3X {

class PPUInterpreter {
public:
    PPUInterpreter();

    bool Initialize();
    void Reset();
    void Execute();
    void Shutdown();
};

}

#endif
