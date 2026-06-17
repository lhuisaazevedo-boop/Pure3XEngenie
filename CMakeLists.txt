cmake_minimum_required(VERSION 3.16)

project(Pure3XEngenie
    VERSION 0.1.3
    DESCRIPTION "Experimental PlayStation 3 Engine for Android"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(Pure3XEngenie
    src/main.cpp

    Core/Engine.cpp
    Core/Boot/Boot.cpp
    Core/System/System.cpp
    Core/Logs/Log.cpp

    Core/Network/network_manager.cpp
    Core/Network/network_utils.cpp

    Config/ConfigManager.cpp
)

target_include_directories(Pure3XEngenie PRIVATE
    .
    Config

    Core
    Core/Boot
    Core/System
    Core/Logs
    Core/Network
)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    target_compile_definitions(Pure3XEngenie PRIVATE DEBUG_BUILD=1)
else()
    target_compile_definitions(Pure3XEngenie PRIVATE RELEASE_BUILD=1)
endif()
