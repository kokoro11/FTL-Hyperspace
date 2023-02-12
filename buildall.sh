#!/bin/bash
set -e

function build_one_variant() {
    local BUILD_DIR="$1"
    local TOOLCHAIN_NAME="$2"
    local STEAM_1_6_13_BUILD="$3"
    local BUILD_TYPE="$4"

    cmake -DCMAKE_TOOLCHAIN_FILE=/vcpkg/scripts/buildsystems/vcpkg.cmake \
        "-DVCPKG_HOST_TRIPLET=$TOOLCHAIN_NAME" \
        "-DVCPKG_TARGET_TRIPLET=$TOOLCHAIN_NAME" \
        "-DVCPKG_CHAINLOAD_TOOLCHAIN_FILE=/vcpkg/scripts/toolchains/${TOOLCHAIN_NAME}.cmake" \
        "-DCMAKE_BUILD_TYPE=$BUILD_TYPE" \
        "-DSTEAM_1_6_13_BUILD=$STEAM_1_6_13_BUILD" \
        -S . -B $BUILD_DIR -G Ninja

    ninja -C $BUILD_DIR
}

build_one_variant build-windows-release x86-windows-ftl OFF Release
