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
include CMakeFiles/enums.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/enums.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/enums.dir/flags.make

CMakeFiles/enums.dir/enums.cpp.o: CMakeFiles/enums.dir/flags.make
CMakeFiles/enums.dir/enums.cpp.o: ../enums.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/anassbelcaid/github/tutorial/C++11/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/enums.dir/enums.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/enums.dir/enums.cpp.o -c /Users/anassbelcaid/github/tutorial/C++11/enums.cpp

CMakeFiles/enums.dir/enums.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/enums.dir/enums.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/anassbelcaid/github/tutorial/C++11/enums.cpp > CMakeFiles/enums.dir/enums.cpp.i

CMakeFiles/enums.dir/enums.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/enums.dir/enums.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/anassbelcaid/github/tutorial/C++11/enums.cpp -o CMakeFiles/enums.dir/enums.cpp.s

CMakeFiles/enums.dir/enums.cpp.o.requires:

.PHONY : CMakeFiles/enums.dir/enums.cpp.o.requires

CMakeFiles/enums.dir/enums.cpp.o.provides: CMakeFiles/enums.dir/enums.cpp.o.requires
	$(MAKE) -f CMakeFiles/enums.dir/build.make CMakeFiles/enums.dir/enums.cpp.o.provides.build
.PHONY : CMakeFiles/enums.dir/enums.cpp.o.provides

CMakeFiles/enums.dir/enums.cpp.o.provides.build: CMakeFiles/enums.dir/enums.cpp.o


# Object files for target enums
enums_OBJECTS = \
"CMakeFiles/enums.dir/enums.cpp.o"

# External object files for target enums
enums_EXTERNAL_OBJECTS =

enums: CMakeFiles/enums.dir/enums.cpp.o
enums: CMakeFiles/enums.dir/build.make
enums: CMakeFiles/enums.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/anassbelcaid/github/tutorial/C++11/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable enums"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/enums.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/enums.dir/build: enums

.PHONY : CMakeFiles/enums.dir/build

CMakeFiles/enums.dir/requires: CMakeFiles/enums.dir/enums.cpp.o.requires

.PHONY : CMakeFiles/enums.dir/requires

CMakeFiles/enums.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/enums.dir/cmake_clean.cmake
.PHONY : CMakeFiles/enums.dir/clean

CMakeFiles/enums.dir/depend:
	cd /Users/anassbelcaid/github/tutorial/C++11/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/anassbelcaid/github/tutorial/C++11 /Users/anassbelcaid/github/tutorial/C++11 /Users/anassbelcaid/github/tutorial/C++11/build /Users/anassbelcaid/github/tutorial/C++11/build /Users/anassbelcaid/github/tutorial/C++11/build/CMakeFiles/enums.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/enums.dir/depend

