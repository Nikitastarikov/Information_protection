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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nikita/Study/information_protection/labaone

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nikita/Study/information_protection/labaone/build

# Include any dependencies generated for this target.
include CMakeFiles/TestLabaOne.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TestLabaOne.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TestLabaOne.dir/flags.make

CMakeFiles/TestLabaOne.dir/Tests/TestLabaOne.cpp.o: CMakeFiles/TestLabaOne.dir/flags.make
CMakeFiles/TestLabaOne.dir/Tests/TestLabaOne.cpp.o: ../Tests/TestLabaOne.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nikita/Study/information_protection/labaone/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TestLabaOne.dir/Tests/TestLabaOne.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TestLabaOne.dir/Tests/TestLabaOne.cpp.o -c /home/nikita/Study/information_protection/labaone/Tests/TestLabaOne.cpp

CMakeFiles/TestLabaOne.dir/Tests/TestLabaOne.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TestLabaOne.dir/Tests/TestLabaOne.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nikita/Study/information_protection/labaone/Tests/TestLabaOne.cpp > CMakeFiles/TestLabaOne.dir/Tests/TestLabaOne.cpp.i

CMakeFiles/TestLabaOne.dir/Tests/TestLabaOne.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TestLabaOne.dir/Tests/TestLabaOne.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nikita/Study/information_protection/labaone/Tests/TestLabaOne.cpp -o CMakeFiles/TestLabaOne.dir/Tests/TestLabaOne.cpp.s

# Object files for target TestLabaOne
TestLabaOne_OBJECTS = \
"CMakeFiles/TestLabaOne.dir/Tests/TestLabaOne.cpp.o"

# External object files for target TestLabaOne
TestLabaOne_EXTERNAL_OBJECTS =

TestLabaOne: CMakeFiles/TestLabaOne.dir/Tests/TestLabaOne.cpp.o
TestLabaOne: CMakeFiles/TestLabaOne.dir/build.make
TestLabaOne: LibCryptographic/libLibCryptographic.a
TestLabaOne: CMakeFiles/TestLabaOne.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nikita/Study/information_protection/labaone/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TestLabaOne"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TestLabaOne.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TestLabaOne.dir/build: TestLabaOne

.PHONY : CMakeFiles/TestLabaOne.dir/build

CMakeFiles/TestLabaOne.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TestLabaOne.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TestLabaOne.dir/clean

CMakeFiles/TestLabaOne.dir/depend:
	cd /home/nikita/Study/information_protection/labaone/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nikita/Study/information_protection/labaone /home/nikita/Study/information_protection/labaone /home/nikita/Study/information_protection/labaone/build /home/nikita/Study/information_protection/labaone/build /home/nikita/Study/information_protection/labaone/build/CMakeFiles/TestLabaOne.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TestLabaOne.dir/depend

