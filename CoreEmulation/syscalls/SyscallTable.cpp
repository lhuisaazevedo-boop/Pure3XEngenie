#include "SyscallTable.h"

namespace Pure3X {

SyscallTable::SyscallTable()
{
}

void SyscallTable::Register(uint32_t id, const char* name)
{
    table[id] = name;
}

const char* SyscallTable::GetName(uint32_t id) const
{
    auto it = table.find(id);

    if (it != table.end())
        return it->second;

    return "Unknown Syscall";
}

} // namespace Pure3X
