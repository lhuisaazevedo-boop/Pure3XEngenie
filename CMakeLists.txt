cmake_minimum_required(VERSION 3.16)

project(Pure3XEngenie
    VERSION 0.1.4
    DESCRIPTION "Experimental PlayStation 3 Engine for Android"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(Pure3XEngenie

    # Main
    src/main.cpp

    # Engine
    core/Engine.cpp

    # Boot
    core/boot/Boot.cpp

    # Config
    Config/ConfigManager.cpp
    core/config/config_manager.cpp

    # System
    core/system/System.cpp
    core/system/system.cpp

    # Logger
    core/logger/Log.cpp
    core/logger/logger.cpp

    # Network
    core/network/network_manager.cpp
    core/network/network_utils.cpp

    # Version
    core/version/version.cpp

    # Game Modules
    core/gamemodules/GameModule.cpp
)

target_include_directories(Pure3XEngenie PRIVATE

    .

    Config

    core
    core/boot
    core/config
    core/gamemodules
    core/logger
    core/network
    core/platform
    core/system
    core/version
)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    target_compile_definitions(Pure3XEngenie PRIVATE DEBUG_BUILD=1)
else()
    target_compile_definitions(Pure3XEngenie PRIVATE RELEASE_BUILD=1)
endif()
