#!/usr/bin/env bash

set -e

rm -rf build builder

mkdir -p ./build/

conan install . -if ./builder

cmake -H. -B./build/

make -C ./build/ -j$(nproc)

conan remove -f -s -b -- '*'