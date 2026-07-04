#!/data/data/com.termux/files/usr/bin/bash

set -e

echo "==================================="
echo " Pure3XEngenie - Termux Build"
echo "==================================="

mkdir -p build
cd build

cmake .. \
    -DCMAKE_BUILD_TYPE=Release

cmake --build . -j$(nproc)

mkdir -p ../app/src/main/jniLibs/arm64-v8a

cp lib/liblhuis.pure3x.so ../app/src/main/jniLibs/arm64-v8a/ 2>/dev/null || \
cp liblhuis.pure3x.so ../app/src/main/jniLibs/arm64-v8a/

echo ""
echo "Biblioteca copiada para:"
echo "app/src/main/jniLibs/arm64-v8a/"
echo "Build concluído!"
