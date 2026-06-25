#ifndef PURE3X_THREAD_MANAGER_H
#define PURE3X_THREAD_MANAGER_H

namespace Pure3X {

class ThreadManager {
public:
    ThreadManager();

    bool Initialize();
    void Update();
    void Shutdown();

private:
    bool m_initialized;
};

}

#endif
