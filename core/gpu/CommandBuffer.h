#ifndef PURE3X_COMMAND_BUFFER_H
#define PURE3X_COMMAND_BUFFER_H

#include <cstdint>
#include <queue>

namespace Pure3X {

class CommandBuffer {
public:
    CommandBuffer();

    void Push(uint32_t command);
    bool Empty() const;
    uint32_t Pop();

private:
    std::queue<uint32_t> commands;
};

} // namespace Pure3X

#endif
