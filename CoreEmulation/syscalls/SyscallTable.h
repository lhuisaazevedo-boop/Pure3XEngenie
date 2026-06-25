#ifndef PURE3X_SYSCALL_TABLE_H
#define PURE3X_SYSCALL_TABLE_H

#include <cstdint>
#include <unordered_map>

namespace Pure3X {

class SyscallTable {
public:
    SyscallTable();

    void Register(uint32_t id, const char* name);
    const char* GetName(uint32_t id) const;

private:
    std::unordered_map<uint32_t, const char*> table;
};

} // namespace Pure3X

#endif // PURE3X_SYSCALL_TABLE_H
