cmake_minimum_required(VERSION 3.13)

set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake
        CACHE STRING "Vcpkg toolchain file")

project(cplusplus)

set(CMAKE_CXX_STANDARD 14)

add_executable(main main.cpp)
add_subdirectory(tests)
