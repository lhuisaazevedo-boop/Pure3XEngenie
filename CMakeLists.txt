cmake_minimum_required(VERSION 3.10)

project(Pure3XEngenie)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

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
