cmake_minimum_required(VERSION 3.22.1)

project(Pure3XEngenie LANGUAGES C CXX)

set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(
    lhuis_pure3x
    SHARED
    native-lib.cpp
)

find_library(
    log-lib
    log
)

target_link_libraries(
    lhuis_pure3x
    ${log-lib}
)
