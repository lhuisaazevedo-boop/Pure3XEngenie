#ifndef PURE3X_FIFOQUEUE_H
#define PURE3X_FIFOQUEUE_H

#include <cstdint>
#include <queue>

namespace Pure3X {

class FIFOQueue {
public:
    FIFOQueue();

    bool Initialize();
    void Shutdown();

    void Push(uint64_t instruction);
    bool Pop(uint64_t& instruction);

    bool Empty() const;
    std::size_t Size() const;

private:
    std::queue<uint64_t> m_queue;
};

} // namespace Pure3X

#endif // PURE3X_FIFOQUEUE_H
