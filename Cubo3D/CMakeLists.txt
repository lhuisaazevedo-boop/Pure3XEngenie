cmake_minimum_required(VERSION 3.16)

project(Cubo3D VERSION 0.1.0 LANGUAGES CXX)

# ============================================================
# C++ Configuration
# ============================================================

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# ============================================================
# Library
# ============================================================

add_library(Cubo3D SHARED)

# ============================================================
# Include Directories
# ============================================================

target_include_directories(Cubo3D PRIVATE
    include
)

# ============================================================
# Source Files
# ============================================================

target_sources(Cubo3D PRIVATE
    src/main.cpp

    src/Engine.cpp
    src/Renderer.cpp
    src/Camera.cpp
    src/Cube.cpp
    src/Mesh.cpp
    src/Shader.cpp
    src/Texture.cpp
    src/Material.cpp
    src/Transform.cpp
    src/Scene.cpp
    src/ResourceManager.cpp
    src/FPSCounter.cpp
    src/Logger.cpp
)

# ============================================================
# Libraries
# ============================================================

find_package(Threads REQUIRED)

target_link_libraries(Cubo3D
    Threads::Threads
)

# ============================================================
# Compile Options
# ============================================================

target_compile_features(Cubo3D PRIVATE cxx_std_20)
