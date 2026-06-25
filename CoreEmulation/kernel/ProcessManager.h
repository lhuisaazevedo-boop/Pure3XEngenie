#ifndef PURE3X_PROCESS_MANAGER_H
#define PURE3X_PROCESS_MANAGER_H

#include <vector>
#include <string>

namespace Pure3X {

class ProcessManager {
public:
    ProcessManager();

    bool Initialize();
    void Shutdown();

    int CreateProcess(const std::string& name);
    void KillProcess(int pid);

private:
    std::vector<std::string> m_processes;
};

} // namespace Pure3X

#endif
