#ifndef PURE3X_RSX_STATE_H
#define PURE3X_RSX_STATE_H

#include <cstdint>

namespace Pure3X {

class RSXState {
public:
    RSXState();

    void Reset();

    uint32_t GetCurrentCommand() const;
    void SetCurrentCommand(uint32_t command);

private:
    uint32_t currentCommand;
};

} // namespace Pure3X

#endif
