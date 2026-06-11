cmake_minimum_required(VERSION 3.10)

project(Pure3XEngenie)

set(CMAKE_CXX_STANDARD 17)

add_executable(Pure3XEngenie

    src/main.cpp

    Core/Engine.cpp

    Core/Boot/Boot.cpp

    Core/System/System.cpp

)
