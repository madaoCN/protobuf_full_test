cmake_minimum_required(VERSION 3.13)

set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/../vcpkg/scripts/buildsystems/vcpkg.cmake
        CACHE STRING "Vcpkg toolchain file")

project(tests)

set(CMAKE_CXX_STANDARD 14)

find_package(jsoncpp CONFIG REQUIRED)
find_package(RapidJSON CONFIG REQUIRED)
find_package(GTest CONFIG REQUIRED)
find_package(protobuf CONFIG REQUIRED)

add_executable(tests main.cpp)

target_link_libraries(tests PRIVATE jsoncpp_lib)
target_include_directories(tests PRIVATE ${RAPIDJSON_INCLUDE_DIRS})
target_link_libraries(tests PRIVATE GTest::gtest GTest::gtest_main GTest::gmock GTest::gmock_main)
target_link_libraries(tests PRIVATE protobuf::libprotoc protobuf::libprotobuf protobuf::libprotobuf-lite)

add_test(AllTestsInMain tests)