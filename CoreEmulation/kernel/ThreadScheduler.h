#ifndef PURE3X_THREAD_SCHEDULER_H
#define PURE3X_THREAD_SCHEDULER_H

namespace Pure3X {

class ThreadScheduler {
public:
    ThreadScheduler();

    bool Initialize();
    void Schedule();
    void Shutdown();
};

} // namespace Pure3X

#endif
