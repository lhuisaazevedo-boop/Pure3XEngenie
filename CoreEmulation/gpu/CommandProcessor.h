#ifndef PURE3X_COMMAND_PROCESSOR_H
#define PURE3X_COMMAND_PROCESSOR_H

namespace Pure3X {

class CommandProcessor {
public:
    CommandProcessor();

    bool Initialize();
    void ProcessCommands();
    void Shutdown();

private:
    bool m_initialized;
};

}

#endif
