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
CMAKE_SOURCE_DIR = /home/nikita/Study/Information_protection/labaone

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nikita/Study/Information_protection/labaone/build

# Include any dependencies generated for this target.
include CMakeFiles/LabaOne.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LabaOne.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LabaOne.dir/flags.make

CMakeFiles/LabaOne.dir/LabaOne.cpp.o: CMakeFiles/LabaOne.dir/flags.make
CMakeFiles/LabaOne.dir/LabaOne.cpp.o: ../LabaOne.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nikita/Study/Information_protection/labaone/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LabaOne.dir/LabaOne.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LabaOne.dir/LabaOne.cpp.o -c /home/nikita/Study/Information_protection/labaone/LabaOne.cpp

CMakeFiles/LabaOne.dir/LabaOne.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LabaOne.dir/LabaOne.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nikita/Study/Information_protection/labaone/LabaOne.cpp > CMakeFiles/LabaOne.dir/LabaOne.cpp.i

CMakeFiles/LabaOne.dir/LabaOne.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LabaOne.dir/LabaOne.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nikita/Study/Information_protection/labaone/LabaOne.cpp -o CMakeFiles/LabaOne.dir/LabaOne.cpp.s

# Object files for target LabaOne
LabaOne_OBJECTS = \
"CMakeFiles/LabaOne.dir/LabaOne.cpp.o"

# External object files for target LabaOne
LabaOne_EXTERNAL_OBJECTS =

LabaOne: CMakeFiles/LabaOne.dir/LabaOne.cpp.o
LabaOne: CMakeFiles/LabaOne.dir/build.make
LabaOne: LibCryptographic/libLibCryptographic.a
LabaOne: CMakeFiles/LabaOne.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nikita/Study/Information_protection/labaone/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable LabaOne"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LabaOne.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LabaOne.dir/build: LabaOne

.PHONY : CMakeFiles/LabaOne.dir/build

CMakeFiles/LabaOne.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LabaOne.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LabaOne.dir/clean

CMakeFiles/LabaOne.dir/depend:
	cd /home/nikita/Study/Information_protection/labaone/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nikita/Study/Information_protection/labaone /home/nikita/Study/Information_protection/labaone /home/nikita/Study/Information_protection/labaone/build /home/nikita/Study/Information_protection/labaone/build /home/nikita/Study/Information_protection/labaone/build/CMakeFiles/LabaOne.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LabaOne.dir/depend

