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
CMAKE_SOURCE_DIR = /Users/mikolaj/dev/think-like-programmer/chapter4/char_chains

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mikolaj/dev/think-like-programmer/chapter4/char_chains/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/char_chains.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/char_chains.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/char_chains.dir/flags.make

CMakeFiles/char_chains.dir/main.cpp.o: CMakeFiles/char_chains.dir/flags.make
CMakeFiles/char_chains.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mikolaj/dev/think-like-programmer/chapter4/char_chains/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/char_chains.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/char_chains.dir/main.cpp.o -c /Users/mikolaj/dev/think-like-programmer/chapter4/char_chains/main.cpp

CMakeFiles/char_chains.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/char_chains.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mikolaj/dev/think-like-programmer/chapter4/char_chains/main.cpp > CMakeFiles/char_chains.dir/main.cpp.i

CMakeFiles/char_chains.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/char_chains.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mikolaj/dev/think-like-programmer/chapter4/char_chains/main.cpp -o CMakeFiles/char_chains.dir/main.cpp.s

# Object files for target char_chains
char_chains_OBJECTS = \
"CMakeFiles/char_chains.dir/main.cpp.o"

# External object files for target char_chains
char_chains_EXTERNAL_OBJECTS =

char_chains: CMakeFiles/char_chains.dir/main.cpp.o
char_chains: CMakeFiles/char_chains.dir/build.make
char_chains: CMakeFiles/char_chains.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mikolaj/dev/think-like-programmer/chapter4/char_chains/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable char_chains"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/char_chains.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/char_chains.dir/build: char_chains

.PHONY : CMakeFiles/char_chains.dir/build

CMakeFiles/char_chains.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/char_chains.dir/cmake_clean.cmake
.PHONY : CMakeFiles/char_chains.dir/clean

CMakeFiles/char_chains.dir/depend:
	cd /Users/mikolaj/dev/think-like-programmer/chapter4/char_chains/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mikolaj/dev/think-like-programmer/chapter4/char_chains /Users/mikolaj/dev/think-like-programmer/chapter4/char_chains /Users/mikolaj/dev/think-like-programmer/chapter4/char_chains/cmake-build-debug /Users/mikolaj/dev/think-like-programmer/chapter4/char_chains/cmake-build-debug /Users/mikolaj/dev/think-like-programmer/chapter4/char_chains/cmake-build-debug/CMakeFiles/char_chains.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/char_chains.dir/depend

