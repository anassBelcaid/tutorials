# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.8.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.8.1/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/anassbelcaid/github/tutorial/C++11

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/anassbelcaid/github/tutorial/C++11/build

# Include any dependencies generated for this target.
include CMakeFiles/algorithms2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/algorithms2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/algorithms2.dir/flags.make

CMakeFiles/algorithms2.dir/algorithms_02.cpp.o: CMakeFiles/algorithms2.dir/flags.make
CMakeFiles/algorithms2.dir/algorithms_02.cpp.o: ../algorithms_02.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/anassbelcaid/github/tutorial/C++11/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/algorithms2.dir/algorithms_02.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/algorithms2.dir/algorithms_02.cpp.o -c /Users/anassbelcaid/github/tutorial/C++11/algorithms_02.cpp

CMakeFiles/algorithms2.dir/algorithms_02.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/algorithms2.dir/algorithms_02.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/anassbelcaid/github/tutorial/C++11/algorithms_02.cpp > CMakeFiles/algorithms2.dir/algorithms_02.cpp.i

CMakeFiles/algorithms2.dir/algorithms_02.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/algorithms2.dir/algorithms_02.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/anassbelcaid/github/tutorial/C++11/algorithms_02.cpp -o CMakeFiles/algorithms2.dir/algorithms_02.cpp.s

CMakeFiles/algorithms2.dir/algorithms_02.cpp.o.requires:

.PHONY : CMakeFiles/algorithms2.dir/algorithms_02.cpp.o.requires

CMakeFiles/algorithms2.dir/algorithms_02.cpp.o.provides: CMakeFiles/algorithms2.dir/algorithms_02.cpp.o.requires
	$(MAKE) -f CMakeFiles/algorithms2.dir/build.make CMakeFiles/algorithms2.dir/algorithms_02.cpp.o.provides.build
.PHONY : CMakeFiles/algorithms2.dir/algorithms_02.cpp.o.provides

CMakeFiles/algorithms2.dir/algorithms_02.cpp.o.provides.build: CMakeFiles/algorithms2.dir/algorithms_02.cpp.o


# Object files for target algorithms2
algorithms2_OBJECTS = \
"CMakeFiles/algorithms2.dir/algorithms_02.cpp.o"

# External object files for target algorithms2
algorithms2_EXTERNAL_OBJECTS =

algorithms2: CMakeFiles/algorithms2.dir/algorithms_02.cpp.o
algorithms2: CMakeFiles/algorithms2.dir/build.make
algorithms2: CMakeFiles/algorithms2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/anassbelcaid/github/tutorial/C++11/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable algorithms2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/algorithms2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/algorithms2.dir/build: algorithms2

.PHONY : CMakeFiles/algorithms2.dir/build

CMakeFiles/algorithms2.dir/requires: CMakeFiles/algorithms2.dir/algorithms_02.cpp.o.requires

.PHONY : CMakeFiles/algorithms2.dir/requires

CMakeFiles/algorithms2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/algorithms2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/algorithms2.dir/clean

CMakeFiles/algorithms2.dir/depend:
	cd /Users/anassbelcaid/github/tutorial/C++11/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/anassbelcaid/github/tutorial/C++11 /Users/anassbelcaid/github/tutorial/C++11 /Users/anassbelcaid/github/tutorial/C++11/build /Users/anassbelcaid/github/tutorial/C++11/build /Users/anassbelcaid/github/tutorial/C++11/build/CMakeFiles/algorithms2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/algorithms2.dir/depend

