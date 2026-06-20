#ifndef PURE3X_NCE_H
#define PURE3X_NCE_H

#include <cstdint>

namespace Pure3X {

class NCE {
public:
    NCE();

    bool Initialize();
    void Shutdown();

    bool LoadCode(uint64_t guestAddress);
    bool Execute(uint64_t guestAddress);

    bool IsReady() const;

private:
    bool m_initialized;
};

} // namespace Pure3X

#endif // PURE3X_NCE_H
