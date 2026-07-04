cmake_minimum_required(VERSION 3.22)

project(
    Pure3XEngenie
    VERSION 0.2.4
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
# Include Directories
# ==========================================================

target_include_directories(
    lhuis.pure3x
    PRIVATE

    include
    src

    CoreEmulation

    CoreEmulation/android
    CoreEmulation/boot
    CoreEmulation/system
    CoreEmulation/graphics
    CoreEmulation/cell
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

    # Boot
    CoreEmulation/boot/Boot.cpp

    # System
    CoreEmulation/system/System.cpp

    # Graphics
    CoreEmulation/rsx/Renderer.cpp

    # Cell
    CoreEmulation/cell/CellSystem.cpp
)

# ==========================================================
# Link Libraries
# ==========================================================
if(ANDROID)
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

if(ANDROID)
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
message(STATUS "      Pure3XEngenie v0.2.4 Alpha")
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
message(STATUS "")
