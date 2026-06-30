#!/data/data/com.termux/files/usr/bin/bash

set -e

export CC=clang
export CXX=clang++

mkdir -p out/build

cmake \
-S . \
-B out/build \
-G Ninja \
-DCMAKE_C_COMPILER=$CC \
-DCMAKE_CXX_COMPILER=$CXX \
-DCMAKE_BUILD_TYPE=Debug

cmake --build out/build
