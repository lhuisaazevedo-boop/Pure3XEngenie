#ifndef PURE3X_ADDRESS_TRANSLATOR_H
#define PURE3X_ADDRESS_TRANSLATOR_H

#include <cstdint>

namespace Pure3X {

class AddressTranslator {
public:
    AddressTranslator();

    uint64_t VirtualToPhysical(uint64_t address) const;
    uint64_t PhysicalToVirtual(uint64_t address) const;
};

} // namespace Pure3X

#endif
