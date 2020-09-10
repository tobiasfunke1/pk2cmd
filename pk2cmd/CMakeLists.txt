cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 11)

find_program(CCACHE_PROGRAM ccache)
if(CCACHE_PROGRAM)
    set(CMAKE_CXX_COMPILER_LAUNCHER "${CCACHE_PROGRAM}")
endif()

find_program(CLANG_PROGRAM clang)
if(CLANG_PROGRAM)
    set(CMAKE_C_COMPILER "${CLANG_PROGRAM}")
    set(CMAKE_CXX_COMPILER "${CLANG_PROGRAM}++")
endif()

set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

project(pk2cmd)

include_directories(${PROJECT_SOURCE_DIR}/inc)

add_library(pk2app src/cmd_app.cpp src/strnatcmp.c)
add_library(pk2func src/PICkitFunctions.cpp src/DeviceFile.cpp src/DeviceData.cpp)
add_library(pk2bootloader src/Pk2BootLoader.cpp)
add_library(pk2usb src/pk2usb.cpp src/pk2usbcommon.cpp)
add_library(pk2devs src/PIC32PE.cpp src/P24F_PE.cpp src/dsP33_PE.cpp)
add_library(iohex src/ImportExportHex.cpp)
add_library(stdafx src/stdafx.cpp)

add_executable(pk2cmd src/pk2cmd.cpp)

target_link_libraries(pk2cmd
    PUBLIC
        pk2app
        pk2func
        pk2bootloader
        pk2usb
        pk2devs
        iohex
        stdafx
        usb
)


# credits to https://github.com/ttroy50/cmake-examples
