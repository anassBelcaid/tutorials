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
include CMakeFiles/shared_pointers.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/shared_pointers.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/shared_pointers.dir/flags.make

CMakeFiles/shared_pointers.dir/shared_pointers.cpp.o: CMakeFiles/shared_pointers.dir/flags.make
CMakeFiles/shared_pointers.dir/shared_pointers.cpp.o: ../shared_pointers.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/anassbelcaid/github/tutorial/C++11/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/shared_pointers.dir/shared_pointers.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/shared_pointers.dir/shared_pointers.cpp.o -c /Users/anassbelcaid/github/tutorial/C++11/shared_pointers.cpp

CMakeFiles/shared_pointers.dir/shared_pointers.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/shared_pointers.dir/shared_pointers.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/anassbelcaid/github/tutorial/C++11/shared_pointers.cpp > CMakeFiles/shared_pointers.dir/shared_pointers.cpp.i

CMakeFiles/shared_pointers.dir/shared_pointers.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/shared_pointers.dir/shared_pointers.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/anassbelcaid/github/tutorial/C++11/shared_pointers.cpp -o CMakeFiles/shared_pointers.dir/shared_pointers.cpp.s

CMakeFiles/shared_pointers.dir/shared_pointers.cpp.o.requires:

.PHONY : CMakeFiles/shared_pointers.dir/shared_pointers.cpp.o.requires

CMakeFiles/shared_pointers.dir/shared_pointers.cpp.o.provides: CMakeFiles/shared_pointers.dir/shared_pointers.cpp.o.requires
	$(MAKE) -f CMakeFiles/shared_pointers.dir/build.make CMakeFiles/shared_pointers.dir/shared_pointers.cpp.o.provides.build
.PHONY : CMakeFiles/shared_pointers.dir/shared_pointers.cpp.o.provides

CMakeFiles/shared_pointers.dir/shared_pointers.cpp.o.provides.build: CMakeFiles/shared_pointers.dir/shared_pointers.cpp.o


# Object files for target shared_pointers
shared_pointers_OBJECTS = \
"CMakeFiles/shared_pointers.dir/shared_pointers.cpp.o"

# External object files for target shared_pointers
shared_pointers_EXTERNAL_OBJECTS =

shared_pointers: CMakeFiles/shared_pointers.dir/shared_pointers.cpp.o
shared_pointers: CMakeFiles/shared_pointers.dir/build.make
shared_pointers: CMakeFiles/shared_pointers.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/anassbelcaid/github/tutorial/C++11/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable shared_pointers"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/shared_pointers.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/shared_pointers.dir/build: shared_pointers

.PHONY : CMakeFiles/shared_pointers.dir/build

CMakeFiles/shared_pointers.dir/requires: CMakeFiles/shared_pointers.dir/shared_pointers.cpp.o.requires

.PHONY : CMakeFiles/shared_pointers.dir/requires

CMakeFiles/shared_pointers.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/shared_pointers.dir/cmake_clean.cmake
.PHONY : CMakeFiles/shared_pointers.dir/clean

CMakeFiles/shared_pointers.dir/depend:
	cd /Users/anassbelcaid/github/tutorial/C++11/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/anassbelcaid/github/tutorial/C++11 /Users/anassbelcaid/github/tutorial/C++11 /Users/anassbelcaid/github/tutorial/C++11/build /Users/anassbelcaid/github/tutorial/C++11/build /Users/anassbelcaid/github/tutorial/C++11/build/CMakeFiles/shared_pointers.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/shared_pointers.dir/depend
