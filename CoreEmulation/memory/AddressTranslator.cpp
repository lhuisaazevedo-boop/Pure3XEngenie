#include "AddressTranslator.h"

namespace Pure3X {

AddressTranslator::AddressTranslator()
{
}

uint64_t AddressTranslator::VirtualToPhysical(uint64_t address) const
{
    return address;
}

uint64_t AddressTranslator::PhysicalToVirtual(uint64_t address) const
{
    return address;
}

} // namespace Pure3X
