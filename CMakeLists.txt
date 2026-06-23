cmake_minimum_required(VERSION 3.16)

project(
    Pure3XEngenie
    VERSION 0.1.9
    DESCRIPTION "PlayStation 3 Engine for Android"
    LANGUAGES CXX
)

# ================================
# C++ Standard
# ================================

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ================================
# Executable
# ================================

add_executable(Pure3XEngenie)

# ================================
# Include Directories
# ================================

include_directories(
    include
    core
)

# ================================
# Source Files
# ================================

target_sources(Pure3XEngenie PRIVATE

    # Main
    src/main.cpp

    # Core
    core/Engine.cpp

    # Boot
    core/boot/Boot.cpp

    # System
    core/system/System.cpp

    # Version
    core/version/version.cpp

    # Logger
    core/logger/Log.cpp

    # Config
    core/config/ConfigManager.cpp

    # Network
    core/network/NetworkManager.cpp

    # Hardware
    core/hardware/HardwareInfo.cpp

    # Cell Engine
    core/cell/CellEngine.cpp

    # RSX GPU
    core/rsx/RSX.cpp

    # Memory Manager
    core/memory/MemoryManager.cpp

    # PPU Interpreter
    core/ppu/PPUInterpreter.cpp

    # SPU Manager
    core/spu/SPUManager.cpp

    # XMB
    core/xmb/XMBManager.cpp

    # Firmware
    core/firmware/FirmwareManager.cpp

    # Android Bridge
    core/android/AndroidBridge.cpp

    # JNI Bridge
    core/android/jni/JNIBridge.cpp

    # APK Loader
    core/android/apk/APKLoader.cpp

)

# ================================
# Build Information
# ================================

message(STATUS "================================")
message(STATUS " Pure3XEngenie v${PROJECT_VERSION}")
message(STATUS " Build Type: Alpha")
message(STATUS " Build System: CMake")
message(STATUS " Future Backend: Android NDK r29")
message(STATUS " C++ Standard: 20")
message(STATUS "================================")

# ================================
# Compile Definitions
# ================================

if(CMAKE_BUILD_TYPE STREQUAL "Debug")

    target_compile_definitions(
        Pure3XEngenie PRIVATE
        DEBUG_BUILD=1
    )

else()

    target_compile_definitions(
        Pure3XEngenie PRIVATE
        RELEASE_BUILD=1
    )

endif()
