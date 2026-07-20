cmake_minimum_required(VERSION 3.22)

project(
    Pure3XEngenie
    VERSION 0.2.5
    DESCRIPTION "PlayStation 3 Engine for Android"
    LANGUAGES CXX
)

# ==========================================================
# C++ Configuration
# ==========================================================

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# ==========================================================
# Android Library
# ==========================================================

add_library(
    lhuis.pure3x
    SHARED
)
# ==========================================================
# Build Options
# ==========================================================

set(PURE3X_BUILD_ANDROID OFF)
option(PURE3X_BUILD_VIEWER "Build Termux X11 Viewer" OFF)

# ==========================================================
# Include Directories
# ==========================================================

target_include_directories(
    lhuis.pure3x
    PRIVATE

    include
    src
    CoreEmulation/android/window
    CoreEmulation/android/surface
    CoreEmulation/android
    CoreEmulation/boot
    CoreEmulation/system
    CoreEmulation/graphics
    CoreEmulation/cell
    CoreEmulation/cell/Memory
    CoreEmulation/cell/PPU
    CoreEmulation/cell/SPU
)

# ==========================================================
# Source Files
# ==========================================================

target_sources(
    lhuis.pure3x
    PRIVATE

    # Main
    src/main.cpp

    # Core
    CoreEmulation/Engine.cpp

    # Android
    CoreEmulation/android/core/AndroidCore.cpp
    CoreEmulation/android/runtime/AndroidRuntime.cpp
    CoreEmulation/android/bridge/AndroidBridge.cpp
    CoreEmulation/android/window/AndroidNativeWindow.cpp
    CoreEmulation/android/surface/AndroidSurface.cpp
    CoreEmulation/android/jni/JNIBridge.cpp
    CoreEmulation/android/jni/NativeBridge.cpp

    # Android Managers
    CoreEmulation/android/config/AndroidConfig.cpp
    CoreEmulation/android/system/SystemManager.cpp
    CoreEmulation/android/device/DeviceManager.cpp
    CoreEmulation/android/graphics/GraphicsManager.cpp
    CoreEmulation/android/shaders/ShaderManager.cpp
    CoreEmulation/android/thread/ThreadManager.cpp
    CoreEmulation/android/network/NetworkManager.cpp
    CoreEmulation/android/services/ServiceManager.cpp
    CoreEmulation/android/debug/DebugManager.cpp

    # Boot
    CoreEmulation/boot/Boot.cpp

    # System
    CoreEmulation/system/System.cpp

    # Graphics
    CoreEmulation/rsx/Renderer.cpp

    # Cell
    CoreEmulation/cell/CellSystem.cpp

    # Memory
    CoreEmulation/cell/Memory/MemoryManager.cpp
    CoreEmulation/cell/Memory/DMAController.cpp

    # PPU
    CoreEmulation/cell/PPU/PPUState.cpp
    CoreEmulation/cell/PPU/PPUInterpreter.cpp
    CoreEmulation/cell/PPU/InstructionDecoder.cpp
    CoreEmulation/cell/PPU/InstructionExecutor.cpp

    # SPU
    CoreEmulation/cell/SPU/SPUState.cpp
    CoreEmulation/cell/SPU/SPUInterpreter.cpp
)

# ==========================================================
# Link Libraries
#==========================================================
if(PURE3X_BUILD_ANDROID)
    find_library(log-lib log)
    find_library(android-lib android)
    find_library(jnigraphics-lib jnigraphics)
endif()

find_package(Threads REQUIRED)
find_package(Vulkan QUIET)

target_link_libraries(
    lhuis.pure3x
    Threads::Threads
)

if(PURE3X_BUILD_ANDROID)
    target_link_libraries(
        lhuis.pure3x
        ${log-lib}
        ${android-lib}
        ${jnigraphics-lib}
    )
endif()

if(Vulkan_FOUND)
    target_link_libraries(
        lhuis.pure3x
        Vulkan::Vulkan
    )
endif()
# ==========================================================
# Compiler Options
# ==========================================================

target_compile_options(
    lhuis.pure3x
    PRIVATE

    -std=c++20
    -Wall
    -Wextra
    -Wno-unused-parameter
    -fexceptions
    -frtti
)

# ==========================================================
# Build Configuration
# ==========================================================

target_compile_definitions(
    lhuis.pure3x
    PRIVATE

    PURE3X_ENGINE
    PURE3X_ANDROID
)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")

    target_compile_definitions(
        lhuis.pure3x
        PRIVATE
        DEBUG_BUILD=1
    )

else()

    target_compile_definitions(
        lhuis.pure3x
        PRIVATE
        RELEASE_BUILD=1
        NDEBUG
    )

endif()

# ==========================================================
# Output
# ==========================================================

set_target_properties(
    lhuis.pure3x
    PROPERTIES

    OUTPUT_NAME "lhuis.pure3x"
)

# ==========================================================
# Build Summary
# ==========================================================

message(STATUS "")
message(STATUS "==========================================")
message(STATUS "      Pure3XEngenie v0.2.5 Alpha")
message(STATUS "==========================================")
message(STATUS "Engine      : Pure3XEngenie")
message(STATUS "Library     : lhuis.pure3x")
message(STATUS "Platform    : Android")
message(STATUS "C++         : C++20")
message(STATUS "Build Type  : ${CMAKE_BUILD_TYPE}")

if(Vulkan_FOUND)
    message(STATUS "Graphics    : Vulkan Enabled")
else()
    message(STATUS "Graphics    : Vulkan Disabled")
endif()

message(STATUS "==========================================")
message(STATUS "Configuration completed successfully.")
message(STATUS "==========================================")

# ==========================================================
# Termux X11 Viewer (Development)
# ==========================================================

if(PURE3X_BUILD_VIEWER)

add_executable(Pure3XViewer

    viewer/main.cpp

    # Núcleo
    viewer/Application.cpp
    viewer/RenderLoop.cpp
    viewer/Scene.cpp
    viewer/Window.cpp

    # Renderização
    viewer/Renderer.cpp
    viewer/RendererGL.cpp
    viewer/EGLContext.cpp
    viewer/Pure3XEGLContext.cpp

    # Android
    CoreEmulation/android/window/AndroidNativeWindow.cpp
    CoreEmulation/android/surface/AndroidSurface.cpp

    # Câmera e Objetos
    viewer/Camera.cpp
    viewer/Cube.cpp
    viewer/Model.cpp
    viewer/Mesh.cpp
    viewer/Transform.cpp

    # Buffers
    viewer/VertexBuffer.cpp
    viewer/IndexBuffer.cpp
    viewer/VertexArray.cpp

    # Shaders
    viewer/Shader.cpp
    viewer/Texture.cpp
    viewer/Material.cpp

    # Matemática
    viewer/Vector3.cpp
    viewer/Matrix4.cpp

    # Sistema
    viewer/Engine.cpp
    viewer/Logger.cpp
    viewer/Input.cpp
    viewer/FPSCounter.cpp
    viewer/ResourceManager.cpp
)

target_compile_features(Pure3XViewer PRIVATE cxx_std_20)

target_include_directories(Pure3XViewer PRIVATE
    ${CMAKE_SOURCE_DIR}/viewer
    ${CMAKE_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/CoreEmulation
    ${CMAKE_SOURCE_DIR}/CoreEmulation/android
    /data/data/com.termux/files/usr/include
)

target_link_libraries(Pure3XViewer
    EGL
    GLESv2
    X11
    pthread
    dl
    m
)

endif()
