cmake_minimum_required(VERSION 3.22)

project(Pure3XEngenieAPK)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Compila o projeto principal
add_subdirectory(
    ${CMAKE_CURRENT_SOURCE_DIR}/../../../../
    ${CMAKE_BINARY_DIR}/Pure3XBuild
)

find_library(
    log-lib
    log
)

# Vincula a biblioteca gerada pelo projeto principal
target_link_libraries(
    Pure3XEngenie
    ${log-lib}
)
