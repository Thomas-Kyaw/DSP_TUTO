# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.28.1/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.28.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/aungkhantkyaw/Documents/DSP_COS30008/Tutorial

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/aungkhantkyaw/Documents/DSP_COS30008/Tutorial/build

# Include any dependencies generated for this target.
include CMakeFiles/Tuto1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Tuto1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Tuto1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Tuto1.dir/flags.make

CMakeFiles/Tuto1.dir/src/tuto1.cpp.o: CMakeFiles/Tuto1.dir/flags.make
CMakeFiles/Tuto1.dir/src/tuto1.cpp.o: /Users/aungkhantkyaw/Documents/DSP_COS30008/Tutorial/src/tuto1.cpp
CMakeFiles/Tuto1.dir/src/tuto1.cpp.o: CMakeFiles/Tuto1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/aungkhantkyaw/Documents/DSP_COS30008/Tutorial/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Tuto1.dir/src/tuto1.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Tuto1.dir/src/tuto1.cpp.o -MF CMakeFiles/Tuto1.dir/src/tuto1.cpp.o.d -o CMakeFiles/Tuto1.dir/src/tuto1.cpp.o -c /Users/aungkhantkyaw/Documents/DSP_COS30008/Tutorial/src/tuto1.cpp

CMakeFiles/Tuto1.dir/src/tuto1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Tuto1.dir/src/tuto1.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aungkhantkyaw/Documents/DSP_COS30008/Tutorial/src/tuto1.cpp > CMakeFiles/Tuto1.dir/src/tuto1.cpp.i

CMakeFiles/Tuto1.dir/src/tuto1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Tuto1.dir/src/tuto1.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aungkhantkyaw/Documents/DSP_COS30008/Tutorial/src/tuto1.cpp -o CMakeFiles/Tuto1.dir/src/tuto1.cpp.s

# Object files for target Tuto1
Tuto1_OBJECTS = \
"CMakeFiles/Tuto1.dir/src/tuto1.cpp.o"

# External object files for target Tuto1
Tuto1_EXTERNAL_OBJECTS =

Tuto1: CMakeFiles/Tuto1.dir/src/tuto1.cpp.o
Tuto1: CMakeFiles/Tuto1.dir/build.make
Tuto1: /opt/homebrew/Cellar/raylib/5.0/lib/libraylib.dylib
Tuto1: CMakeFiles/Tuto1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/aungkhantkyaw/Documents/DSP_COS30008/Tutorial/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Tuto1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Tuto1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Tuto1.dir/build: Tuto1
.PHONY : CMakeFiles/Tuto1.dir/build

CMakeFiles/Tuto1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Tuto1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Tuto1.dir/clean

CMakeFiles/Tuto1.dir/depend:
	cd /Users/aungkhantkyaw/Documents/DSP_COS30008/Tutorial/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/aungkhantkyaw/Documents/DSP_COS30008/Tutorial /Users/aungkhantkyaw/Documents/DSP_COS30008/Tutorial /Users/aungkhantkyaw/Documents/DSP_COS30008/Tutorial/build /Users/aungkhantkyaw/Documents/DSP_COS30008/Tutorial/build /Users/aungkhantkyaw/Documents/DSP_COS30008/Tutorial/build/CMakeFiles/Tuto1.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Tuto1.dir/depend

