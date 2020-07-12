cmake_minimum_required(VERSION 3.13)

set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake
        CACHE STRING "Vcpkg toolchain file")

project(cplusplus)

set(CMAKE_CXX_STANDARD 14)

find_package(protobuf CONFIG REQUIRED)

add_executable(main main.cpp)
add_subdirectory(tests)

target_link_libraries(main PRIVATE protobuf::libprotoc protobuf::libprotobuf protobuf::libprotobuf-lite)
