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
include CMakeFiles/initialiser_list2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/initialiser_list2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/initialiser_list2.dir/flags.make

CMakeFiles/initialiser_list2.dir/initialiser_list2.cpp.o: CMakeFiles/initialiser_list2.dir/flags.make
CMakeFiles/initialiser_list2.dir/initialiser_list2.cpp.o: ../initialiser_list2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/anassbelcaid/github/tutorial/C++11/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/initialiser_list2.dir/initialiser_list2.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/initialiser_list2.dir/initialiser_list2.cpp.o -c /Users/anassbelcaid/github/tutorial/C++11/initialiser_list2.cpp

CMakeFiles/initialiser_list2.dir/initialiser_list2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/initialiser_list2.dir/initialiser_list2.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/anassbelcaid/github/tutorial/C++11/initialiser_list2.cpp > CMakeFiles/initialiser_list2.dir/initialiser_list2.cpp.i

CMakeFiles/initialiser_list2.dir/initialiser_list2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/initialiser_list2.dir/initialiser_list2.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/anassbelcaid/github/tutorial/C++11/initialiser_list2.cpp -o CMakeFiles/initialiser_list2.dir/initialiser_list2.cpp.s

CMakeFiles/initialiser_list2.dir/initialiser_list2.cpp.o.requires:

.PHONY : CMakeFiles/initialiser_list2.dir/initialiser_list2.cpp.o.requires

CMakeFiles/initialiser_list2.dir/initialiser_list2.cpp.o.provides: CMakeFiles/initialiser_list2.dir/initialiser_list2.cpp.o.requires
	$(MAKE) -f CMakeFiles/initialiser_list2.dir/build.make CMakeFiles/initialiser_list2.dir/initialiser_list2.cpp.o.provides.build
.PHONY : CMakeFiles/initialiser_list2.dir/initialiser_list2.cpp.o.provides

CMakeFiles/initialiser_list2.dir/initialiser_list2.cpp.o.provides.build: CMakeFiles/initialiser_list2.dir/initialiser_list2.cpp.o


# Object files for target initialiser_list2
initialiser_list2_OBJECTS = \
"CMakeFiles/initialiser_list2.dir/initialiser_list2.cpp.o"

# External object files for target initialiser_list2
initialiser_list2_EXTERNAL_OBJECTS =

initialiser_list2: CMakeFiles/initialiser_list2.dir/initialiser_list2.cpp.o
initialiser_list2: CMakeFiles/initialiser_list2.dir/build.make
initialiser_list2: CMakeFiles/initialiser_list2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/anassbelcaid/github/tutorial/C++11/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable initialiser_list2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/initialiser_list2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/initialiser_list2.dir/build: initialiser_list2

.PHONY : CMakeFiles/initialiser_list2.dir/build

CMakeFiles/initialiser_list2.dir/requires: CMakeFiles/initialiser_list2.dir/initialiser_list2.cpp.o.requires

.PHONY : CMakeFiles/initialiser_list2.dir/requires

CMakeFiles/initialiser_list2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/initialiser_list2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/initialiser_list2.dir/clean

CMakeFiles/initialiser_list2.dir/depend:
	cd /Users/anassbelcaid/github/tutorial/C++11/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/anassbelcaid/github/tutorial/C++11 /Users/anassbelcaid/github/tutorial/C++11 /Users/anassbelcaid/github/tutorial/C++11/build /Users/anassbelcaid/github/tutorial/C++11/build /Users/anassbelcaid/github/tutorial/C++11/build/CMakeFiles/initialiser_list2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/initialiser_list2.dir/depend

