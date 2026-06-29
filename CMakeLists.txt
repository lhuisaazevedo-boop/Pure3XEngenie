cmake_minimum_required(VERSION 3.16)

project(
    Pure3XEngenie
    VERSION 0.2.2
    DESCRIPTION "PlayStation 3 Engine for Android"
    LANGUAGES CXX
)

# ============================================================
# C++ Standard
# ============================================================

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# ============================================================
# Packages
# ============================================================

find_package(Vulkan REQUIRED)
find_package(Threads REQUIRED)

# ============================================================
# Executable
# ============================================================

add_executable(Pure3XEngenie)

# Biblioteca futura (.so)
# ============================================================
# Shared Library
# ============================================================

add_library(
    lhuis.pure3x
    SHARED

    CoreEmulation/Engine.cpp

    # Android Core
    CoreEmulation/android/core/AndroidCore.cpp
    CoreEmulation/android/runtime/AndroidRuntime.cpp
    CoreEmulation/android/bridge/AndroidBridge.cpp

    # Vulkan
    CoreEmulation/Graphics/Vulkan/VulkanContext.cpp

    # Cell
    CoreEmulation/cell/CellSystem.cpp
)
# ============================================================
# Include Directories
# ============================================================

target_include_directories(Pure3XEngenie PRIVATE

    include
    CoreEmulation

    # Boot
    CoreEmulation/boot

    # Graphics
    CoreEmulation/graphics
    CoreEmulation/Graphics
    CoreEmulation/Graphics/Frame
    CoreEmulation/Graphics/Vulkan

    # X11
    CoreEmulation/x11

    # Android
    CoreEmulation/android
    CoreEmulation/android/core
    CoreEmulation/android/runtime
    CoreEmulation/android/bridge
    CoreEmulation/android/config
    CoreEmulation/android/system
    CoreEmulation/android/device
    CoreEmulation/android/display
    CoreEmulation/android/window
    CoreEmulation/android/audio
    CoreEmulation/android/filesystem
    CoreEmulation/android/input
    CoreEmulation/android/network
    CoreEmulation/android/services
    CoreEmulation/android/graphics
    CoreEmulation/android/shaders
    CoreEmulation/android/swapchain
    CoreEmulation/android/thread
    CoreEmulation/android/debug
    CoreEmulation/android/logs
    CoreEmulation/android/jni
    CoreEmulation/android/apk
    CoreEmulation/android/ndk
    CoreEmulation/android/surface
    CoreEmulation/android/renderer

    # Cell
    CoreEmulation/cell
    CoreEmulation/cell/PPE
    CoreEmulation/cell/SPE
    CoreEmulation/cell/Memory
    CoreEmulation/cell/DMA
    CoreEmulation/cell/Scheduler
)

# ============================================================
# Source Files
# ============================================================

target_sources(Pure3XEngenie PRIVATE

    # Main
    src/main.cpp

    # Core
    CoreEmulation/Engine.cpp

    # Boot
    CoreEmulation/boot/BootPanel.cpp
    CoreEmulation/boot/BootSystem.cpp
    CoreEmulation/boot/BootHardware.cpp
    CoreEmulation/boot/BootGraphics.cpp
    CoreEmulation/boot/BootMemory.cpp
    CoreEmulation/boot/BootFirmware.cpp
    CoreEmulation/boot/BootAndroid.cpp
    CoreEmulation/boot/BootModules.cpp
    CoreEmulation/boot/SplashScreen.cpp

    # System
    CoreEmulation/system/System.cpp

    # Version
    CoreEmulation/version/version.cpp
    CoreEmulation/version/changelog.cpp

    # Logger
    CoreEmulation/logger/Log.cpp

    # Config
    CoreEmulation/config/ConfigManager.cpp

    # Hardware
    CoreEmulation/hardware/HardwareInfo.cpp

    # Graphics
    CoreEmulation/graphics/CubeRenderer.cpp

    # Frame
    CoreEmulation/Graphics/Frame/FrameManager.cpp

    # Vulkan
    CoreEmulation/Graphics/Vulkan/VulkanContext.cpp
    CoreEmulation/Graphics/Vulkan/VulkanDevice.cpp
    CoreEmulation/Graphics/Vulkan/VulkanSwapchain.cpp
    CoreEmulation/Graphics/Vulkan/VulkanRenderer.cpp

    # X11
    # (removido na versão Android)

    # Menu
    CoreEmulation/menu/ConfigMenu.cpp
    CoreEmulation/menu/NetworkMenu.cpp
    CoreEmulation/menu/InputMenu.cpp

    # ========================================================
    # Android Runtime
    # ========================================================

    CoreEmulation/android/core/AndroidCore.cpp
    CoreEmulation/android/runtime/AndroidRuntime.cpp
    CoreEmulation/android/bridge/AndroidBridge.cpp

    CoreEmulation/android/config/AndroidConfig.cpp
    CoreEmulation/android/system/SystemManager.cpp
    CoreEmulation/android/device/DeviceManager.cpp
    CoreEmulation/android/display/DisplayManager.cpp
    CoreEmulation/android/window/Window.cpp
    CoreEmulation/android/window/WindowManager.cpp
    CoreEmulation/android/audio/AudioManager.cpp
    CoreEmulation/android/filesystem/FileSystem.cpp
    CoreEmulation/android/input/InputManager.cpp
    CoreEmulation/android/network/NetworkManager.cpp
    CoreEmulation/android/services/ServiceManager.cpp
    CoreEmulation/android/graphics/GraphicsManager.cpp
    CoreEmulation/android/shaders/ShaderManager.cpp
    CoreEmulation/android/swapchain/SwapchainManager.cpp
    CoreEmulation/android/thread/ThreadManager.cpp
    CoreEmulation/android/debug/DebugManager.cpp
    CoreEmulation/android/logs/LogManager.cpp

    CoreEmulation/android/vulkan/VulkanAndroidSurface.cpp

    CoreEmulation/android/jni/JNIBridge.cpp
    CoreEmulation/android/apk/APKLoader.cpp
    CoreEmulation/android/ndk/NDKManager.cpp
    CoreEmulation/android/surface/SurfaceManager.cpp
    CoreEmulation/android/renderer/Renderer.cpp

    # ========================================================
    # Cell Broadband Engine
    # ========================================================

    # Cell Broadband Engine
    CoreEmulation/cell/CellSystem.cpp
    CoreEmulation/cell/CellEngine.cpp

    # PPE
    CoreEmulation/cell/PPE/PPE.cpp
    CoreEmulation/cell/PPE/PPEThread.cpp

    # SPE
    CoreEmulation/cell/SPE/SPE.cpp
    CoreEmulation/cell/SPE/SPEThread.cpp
    CoreEmulation/cell/SPE/SPUDecoder.cpp

    # Memory
    CoreEmulation/cell/Memory/CellMemory.cpp

    # DMA
    CoreEmulation/cell/DMA/DMAManager.cpp

    # Scheduler
    CoreEmulation/cell/Scheduler/CellScheduler.cpp

    # ========================================================
    # Future Modules
    # ========================================================

    CoreEmulation/rsx/RSX.cpp
    CoreEmulation/memory/MemoryManager.cpp
    CoreEmulation/ppu/PPUInterpreter.cpp
    CoreEmulation/spu/SPUManager.cpp
    CoreEmulation/xmb/XMBManager.cpp
    CoreEmulation/firmware/FirmwareManager.cpp
)

# ============================================================
# Link Libraries
# ============================================================

target_link_libraries(
    Pure3XEngenie
    PRIVATE

    Vulkan::Vulkan
    Threads::Threads

    pulse
    pulse-simple
)

target_link_libraries(
    lhuis.pure3x
    PRIVATE

    Vulkan::Vulkan
    Threads::Threads

    pulse
    pulse-simple
)

# ============================================================
# Compile Definitions
# ============================================================

target_compile_definitions(
    Pure3XEngenie
    PRIVATE
        PURE3X_ENGINE=1
        PURE3X_ANDROID=1
        PURE3X_CELL=1
        PURE3X_RSX=1
        PURE3X_VULKAN=1
        PURE3X_AUDIO=1
        PURE3X_NETWORK=1
)

target_compile_definitions(
    lhuis.pure3x
    PRIVATE
        PURE3X_ENGINE=1
        PURE3X_ANDROID=1
        PURE3X_CELL=1
        PURE3X_RSX=1
        PURE3X_VULKAN=1
        PURE3X_AUDIO=1
        PURE3X_NETWORK=1
)

# ============================================================
# Build Type
# ============================================================

if(CMAKE_BUILD_TYPE STREQUAL "Debug")

    target_compile_definitions(
        Pure3XEngenie
        PRIVATE
        DEBUG_BUILD=1
    )

    target_compile_definitions(
        lhuis.pure3x
        PRIVATE
        DEBUG_BUILD=1
    )

else()

    target_compile_definitions(
        Pure3XEngenie
        PRIVATE
        RELEASE_BUILD=1
    )

    target_compile_definitions(
        lhuis.pure3x
        PRIVATE
        RELEASE_BUILD=1
    )

endif()

# ============================================================
# Install
# ============================================================

install(
    TARGETS Pure3XEngenie
    RUNTIME DESTINATION bin
)

install(
    DIRECTORY assets/
    DESTINATION share/Pure3XEngenie
    OPTIONAL
)
# ============================================================
# Status
# ============================================================

message(STATUS "")
message(STATUS "===========================================")
message(STATUS "        Pure3XEngenie v0.2.2")
message(STATUS "===========================================")
message(STATUS "C++ Standard : ${CMAKE_CXX_STANDARD}")
message(STATUS "Build Type   : ${CMAKE_BUILD_TYPE}")
message(STATUS "Vulkan       : ENABLED")
message(STATUS "Android      : ENABLED")
message(STATUS "Cell Engine  : ENABLED")
message(STATUS "RSX GPU      : ENABLED")
message(STATUS "X11          : ENABLED")
message(STATUS "Audio        : ENABLED")
message(STATUS "Network      : ENABLED")
message(STATUS "===========================================")
message(STATUS "")

# ============================================================
# Future Shared Library
# ============================================================

set(PURE3X_SHARED_LIBRARY
    "liblhuis.pure3x.so"
)

message(STATUS "Future Library : ${PURE3X_SHARED_LIBRARY}")
message(STATUS "Ready for CodeAssist / Android NDK")
message(STATUS "Configuration completed successfully.")
# ============================================================
# CodeAssist / Android Studio Ready
# ============================================================

set_property(
    TARGET Pure3XEngenie
    PROPERTY CXX_STANDARD 20
)

set_property(
    TARGET Pure3XEngenie
    PROPERTY CXX_STANDARD_REQUIRED ON
)

set_property(
    TARGET Pure3XEngenie
    PROPERTY CXX_EXTENSIONS OFF
)

set_target_properties(
    Pure3XEngenie
    PROPERTIES
        OUTPUT_NAME "Pure3XEngenie"
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
        ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
        LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
)

message(STATUS "")
message(STATUS "===========================================")
message(STATUS " Pure3XEngenie Build Environment Ready")
message(STATUS " Ready for CodeAssist")
message(STATUS " Ready for Android Studio")
message(STATUS " Ready for Android NDK")
message(STATUS " Ready for liblhuis.pure3x.so")
message(STATUS "===========================================")
message(STATUS "")
# ============================================================
# Pure3XEngenie Build Summary
# ============================================================

message(STATUS "")
message(STATUS "============= Build Summary =============")
message(STATUS "Project     : ${PROJECT_NAME}")
message(STATUS "Version     : ${PROJECT_VERSION}")
message(STATUS "Compiler    : ${CMAKE_CXX_COMPILER_ID}")
message(STATUS "C++         : ${CMAKE_CXX_STANDARD}")
message(STATUS "Generator   : ${CMAKE_GENERATOR}")
message(STATUS "System      : ${CMAKE_SYSTEM_NAME}")
message(STATUS "Processor   : ${CMAKE_SYSTEM_PROCESSOR}")
message(STATUS "Build Dir   : ${CMAKE_BINARY_DIR}")
message(STATUS "=========================================")
message(STATUS "")

# ============================================================
# Roadmap Flags
# ============================================================

option(PURE3X_BUILD_SHARED_LIBRARY "Build liblhuis.pure3x.so" ON)
option(PURE3X_ENABLE_CELL "Enable Cell Engine" ON)
option(PURE3X_ENABLE_RSX "Enable RSX Renderer" ON)
option(PURE3X_ENABLE_VULKAN "Enable Vulkan Backend" ON)
option(PURE3X_ENABLE_ANDROID "Enable Android Runtime" ON)

message(STATUS "Shared Library : ${PURE3X_BUILD_SHARED_LIBRARY}")
message(STATUS "Cell Engine    : ${PURE3X_ENABLE_CELL}")
message(STATUS "RSX Renderer   : ${PURE3X_ENABLE_RSX}")
message(STATUS "Vulkan         : ${PURE3X_ENABLE_VULKAN}")
message(STATUS "Android        : ${PURE3X_ENABLE_ANDROID}")

message(STATUS "")
message(STATUS "Pure3XEngenie v0.2.2 CMake Ready")
message(STATUS "Prepared for future CodeAssist migration.")
message(STATUS "")

# ============================================================
# Future Shared Library
# ============================================================

set(PURE3X_SHARED_LIBRARY "liblhuis.pure3x.so")

message(STATUS "Future Library : ${PURE3X_SHARED_LIBRARY}")
message(STATUS "Ready for CodeAssist")
message(STATUS "Ready for Android Studio")
message(STATUS "Ready for Android NDK")
message(STATUS "Configuration completed successfully.")

# ============================================================
# CodeAssist / Android Studio Ready
# ============================================================

set_target_properties(
    Pure3XEngenie
    PROPERTIES
        OUTPUT_NAME "Pure3XEngenie"
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
        ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
        LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
)

set_target_properties(
    lhuis.pure3x
    PROPERTIES
        OUTPUT_NAME "lhuis.pure3x"
        LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
)

# ============================================================
# End of Pure3XEngenie CMake
# ============================================================

message(STATUS "")
message(STATUS "CMake configuration finished successfully.")
