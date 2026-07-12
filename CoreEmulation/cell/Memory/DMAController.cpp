#include "DMAController.h"

namespace Pure3X::Cell::Memory {

bool DMAController::Initialize() {
    mInitialized = true;
    return true;
}

void DMAController::Shutdown() {
    mInitialized = false;
}

bool DMAController::Copy(uint64_t src, uint64_t dst, uint64_t size) {
    (void)src;
    (void)dst;
    (void)size;
    return mInitialized;
}

bool DMAController::Fill(uint64_t dst, uint8_t value, uint64_t size) {
    (void)dst;
    (void)value;
    (void)size;
    return mInitialized;
}

} // namespace Pure3X::Cell::Memory
