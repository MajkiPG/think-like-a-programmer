# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /Users/mikolaj/dev/think-like-programmer/chapter2/decoder

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mikolaj/dev/think-like-programmer/chapter2/decoder/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/decoder.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/decoder.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/decoder.dir/flags.make

CMakeFiles/decoder.dir/main.cpp.o: CMakeFiles/decoder.dir/flags.make
CMakeFiles/decoder.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mikolaj/dev/think-like-programmer/chapter2/decoder/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/decoder.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/decoder.dir/main.cpp.o -c /Users/mikolaj/dev/think-like-programmer/chapter2/decoder/main.cpp

CMakeFiles/decoder.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/decoder.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mikolaj/dev/think-like-programmer/chapter2/decoder/main.cpp > CMakeFiles/decoder.dir/main.cpp.i

CMakeFiles/decoder.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/decoder.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mikolaj/dev/think-like-programmer/chapter2/decoder/main.cpp -o CMakeFiles/decoder.dir/main.cpp.s

# Object files for target decoder
decoder_OBJECTS = \
"CMakeFiles/decoder.dir/main.cpp.o"

# External object files for target decoder
decoder_EXTERNAL_OBJECTS =

decoder: CMakeFiles/decoder.dir/main.cpp.o
decoder: CMakeFiles/decoder.dir/build.make
decoder: CMakeFiles/decoder.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mikolaj/dev/think-like-programmer/chapter2/decoder/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable decoder"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/decoder.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/decoder.dir/build: decoder

.PHONY : CMakeFiles/decoder.dir/build

CMakeFiles/decoder.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/decoder.dir/cmake_clean.cmake
.PHONY : CMakeFiles/decoder.dir/clean

CMakeFiles/decoder.dir/depend:
	cd /Users/mikolaj/dev/think-like-programmer/chapter2/decoder/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mikolaj/dev/think-like-programmer/chapter2/decoder /Users/mikolaj/dev/think-like-programmer/chapter2/decoder /Users/mikolaj/dev/think-like-programmer/chapter2/decoder/cmake-build-debug /Users/mikolaj/dev/think-like-programmer/chapter2/decoder/cmake-build-debug /Users/mikolaj/dev/think-like-programmer/chapter2/decoder/cmake-build-debug/CMakeFiles/decoder.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/decoder.dir/depend

