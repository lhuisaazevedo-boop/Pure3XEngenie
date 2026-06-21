#ifndef PURE3X_SPU_INTERPRETER_H
#define PURE3X_SPU_INTERPRETER_H

namespace Pure3X {

class SPUInterpreter {
public:
    SPUInterpreter();

    bool Initialize();
    void Reset();
    void Execute();
    void Shutdown();
};

} // namespace Pure3X

#endif
