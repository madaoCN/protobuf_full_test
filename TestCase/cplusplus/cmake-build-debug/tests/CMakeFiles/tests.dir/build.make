# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/liangxiansong/git4Madao/protobuf_full_test/TestCase/cplusplus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/liangxiansong/git4Madao/protobuf_full_test/TestCase/cplusplus/cmake-build-debug

# Include any dependencies generated for this target.
include tests/CMakeFiles/tests.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/tests.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/tests.dir/flags.make

tests/CMakeFiles/tests.dir/main.cpp.o: tests/CMakeFiles/tests.dir/flags.make
tests/CMakeFiles/tests.dir/main.cpp.o: ../tests/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/liangxiansong/git4Madao/protobuf_full_test/TestCase/cplusplus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/tests.dir/main.cpp.o"
	cd /Users/liangxiansong/git4Madao/protobuf_full_test/TestCase/cplusplus/cmake-build-debug/tests && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tests.dir/main.cpp.o -c /Users/liangxiansong/git4Madao/protobuf_full_test/TestCase/cplusplus/tests/main.cpp

tests/CMakeFiles/tests.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tests.dir/main.cpp.i"
	cd /Users/liangxiansong/git4Madao/protobuf_full_test/TestCase/cplusplus/cmake-build-debug/tests && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/liangxiansong/git4Madao/protobuf_full_test/TestCase/cplusplus/tests/main.cpp > CMakeFiles/tests.dir/main.cpp.i

tests/CMakeFiles/tests.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tests.dir/main.cpp.s"
	cd /Users/liangxiansong/git4Madao/protobuf_full_test/TestCase/cplusplus/cmake-build-debug/tests && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/liangxiansong/git4Madao/protobuf_full_test/TestCase/cplusplus/tests/main.cpp -o CMakeFiles/tests.dir/main.cpp.s

# Object files for target tests
tests_OBJECTS = \
"CMakeFiles/tests.dir/main.cpp.o"

# External object files for target tests
tests_EXTERNAL_OBJECTS =

tests/tests: tests/CMakeFiles/tests.dir/main.cpp.o
tests/tests: tests/CMakeFiles/tests.dir/build.make
tests/tests: ../vcpkg/installed/x64-osx/debug/lib/libjsoncpp.a
tests/tests: ../vcpkg/installed/x64-osx/debug/lib/libgtestd.a
tests/tests: ../vcpkg/installed/x64-osx/debug/lib/manual-link/libgtest_maind.a
tests/tests: ../vcpkg/installed/x64-osx/debug/lib/libgmockd.a
tests/tests: ../vcpkg/installed/x64-osx/debug/lib/manual-link/libgmock_maind.a
tests/tests: ../vcpkg/installed/x64-osx/debug/lib/libprotocd.a
tests/tests: ../vcpkg/installed/x64-osx/debug/lib/libprotobufd.a
tests/tests: ../vcpkg/installed/x64-osx/debug/lib/libprotobuf-lited.a
tests/tests: ../vcpkg/installed/x64-osx/debug/lib/libgmockd.a
tests/tests: ../vcpkg/installed/x64-osx/debug/lib/libgtestd.a
tests/tests: tests/CMakeFiles/tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/liangxiansong/git4Madao/protobuf_full_test/TestCase/cplusplus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tests"
	cd /Users/liangxiansong/git4Madao/protobuf_full_test/TestCase/cplusplus/cmake-build-debug/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/tests.dir/build: tests/tests

.PHONY : tests/CMakeFiles/tests.dir/build

tests/CMakeFiles/tests.dir/clean:
	cd /Users/liangxiansong/git4Madao/protobuf_full_test/TestCase/cplusplus/cmake-build-debug/tests && $(CMAKE_COMMAND) -P CMakeFiles/tests.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/tests.dir/clean

tests/CMakeFiles/tests.dir/depend:
	cd /Users/liangxiansong/git4Madao/protobuf_full_test/TestCase/cplusplus/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/liangxiansong/git4Madao/protobuf_full_test/TestCase/cplusplus /Users/liangxiansong/git4Madao/protobuf_full_test/TestCase/cplusplus/tests /Users/liangxiansong/git4Madao/protobuf_full_test/TestCase/cplusplus/cmake-build-debug /Users/liangxiansong/git4Madao/protobuf_full_test/TestCase/cplusplus/cmake-build-debug/tests /Users/liangxiansong/git4Madao/protobuf_full_test/TestCase/cplusplus/cmake-build-debug/tests/CMakeFiles/tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/tests.dir/depend

