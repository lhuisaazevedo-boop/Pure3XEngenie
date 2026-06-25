cmake_minimum_required(VERSION 3.16)

project(
    Pure3XEngenie
    VERSION 0.2.0
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
    CoreEmulation

    # Android
    CoreEmulation/android
    CoreEmulation/android/jni
    CoreEmulation/android/apk
    CoreEmulation/android/ndk
    CoreEmulation/android/window
    CoreEmulation/android/renderer
    CoreEmulation/android/input
    CoreEmulation/android/surface
)

# ================================
# Source Files
# ================================

target_sources(Pure3XEngenie PRIVATE

    # Main
    src/main.cpp

    # Core
    CoreEmulation/Engine.cpp

    # Boot
    CoreEmulation/boot/Boot.cpp

    # System
    CoreEmulation/system/System.cpp

    # Version
    CoreEmulation/version/version.cpp

    # Logger
    CoreEmulation/logger/Log.cpp

    # Config
    CoreEmulation/config/ConfigManager.cpp

    # Network
    CoreEmulation/network/NetworkManager.cpp

    # Hardware
    CoreEmulation/hardware/HardwareInfo.cpp

    # Cell Engine
    CoreEmulation/cell/CellEngine.cpp

    # RSX GPU
    CoreEmulation/rsx/RSX.cpp

    # Memory Manager
    CoreEmulation/memory/MemoryManager.cpp

    # PPU Interpreter
    CoreEmulation/ppu/PPUInterpreter.cpp

    # SPU Manager
    CoreEmulation/spu/SPUManager.cpp

    # XMB
    CoreEmulation/xmb/XMBManager.cpp

    # Firmware
    CoreEmulation/firmware/FirmwareManager.cpp

    # Android Bridge
    CoreEmulation/android/AndroidBridge.cpp

    # JNI Bridge
    CoreEmulation/android/jni/JNIBridge.cpp

    # APK Loader
    CoreEmulation/android/apk/APKLoader.cpp

    # Android NDK
    CoreEmulation/android/ndk/NDKManager.cpp

    # Surface Manager
    CoreEmulation/android/surface/SurfaceManager.cpp

    # Window
    CoreEmulation/android/window/Window.cpp

    # Renderer
    CoreEmulation/android/renderer/Renderer.cpp

    # Input
    CoreEmulation/android/input/Input.cpp

    # Menus
    CoreEmulation/menu/ConfigMenu.cpp
    CoreEmulation/menu/NetworkMenu.cpp
    CoreEmulation/menu/InputMenu.cpp
)

# ================================
# Build Information
# ================================

message(STATUS "================================")
message(STATUS " Pure3XEngenie v${PROJECT_VERSION}")
message(STATUS " Build Type: Alpha")
message(STATUS " Build System: CMake")
message(STATUS " Future Backend: Android NDK r29")
message(STATUS " Android Module: Enabled")
message(STATUS " JNI Layer: Enabled")
message(STATUS " APK Loader: Enabled")
message(STATUS " NDK Manager: Enabled")
message(STATUS " Surface Manager: Enabled")
message(STATUS " Window System: Enabled")
message(STATUS " Renderer: Enabled")
message(STATUS " Input System: Enabled")
message(STATUS " ARM64 Support: Enabled")
message(STATUS " C++20 Support: Enabled")
message(STATUS "================================")

# ================================
# Compile Definitions
# ================================

if(CMAKE_BUILD_TYPE STREQUAL "Debug")

    target_compile_definitions(
        Pure3XEngenie PRIVATE
        DEBUG_BUILD=1
        PURE3X_ANDROID=1
        PURE3X_NDK=1
    )

else()

    target_compile_definitions(
        Pure3XEngenie PRIVATE
        RELEASE_BUILD=1
        PURE3X_ANDROID=1
        PURE3X_NDK=1
    )

endif()

# ================================
# Future Android APK Support
# ================================

option(PURE3X_ANDROID_APK "Enable Android APK Support" ON)

if(PURE3X_ANDROID_APK)

    message(STATUS " Android APK Support: Preparing")

endif()
