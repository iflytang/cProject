# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /home/tsf/Clion/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/tsf/Clion/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tsf/CLionProjects/cProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tsf/CLionProjects/cProject/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cProject.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cProject.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cProject.dir/flags.make

CMakeFiles/cProject.dir/main.c.o: CMakeFiles/cProject.dir/flags.make
CMakeFiles/cProject.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tsf/CLionProjects/cProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/cProject.dir/main.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/cProject.dir/main.c.o   -c /home/tsf/CLionProjects/cProject/main.c

CMakeFiles/cProject.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cProject.dir/main.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tsf/CLionProjects/cProject/main.c > CMakeFiles/cProject.dir/main.c.i

CMakeFiles/cProject.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cProject.dir/main.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tsf/CLionProjects/cProject/main.c -o CMakeFiles/cProject.dir/main.c.s

CMakeFiles/cProject.dir/main.c.o.requires:

.PHONY : CMakeFiles/cProject.dir/main.c.o.requires

CMakeFiles/cProject.dir/main.c.o.provides: CMakeFiles/cProject.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/cProject.dir/build.make CMakeFiles/cProject.dir/main.c.o.provides.build
.PHONY : CMakeFiles/cProject.dir/main.c.o.provides

CMakeFiles/cProject.dir/main.c.o.provides.build: CMakeFiles/cProject.dir/main.c.o


# Object files for target cProject
cProject_OBJECTS = \
"CMakeFiles/cProject.dir/main.c.o"

# External object files for target cProject
cProject_EXTERNAL_OBJECTS =

cProject: CMakeFiles/cProject.dir/main.c.o
cProject: CMakeFiles/cProject.dir/build.make
cProject: CMakeFiles/cProject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tsf/CLionProjects/cProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable cProject"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cProject.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cProject.dir/build: cProject

.PHONY : CMakeFiles/cProject.dir/build

CMakeFiles/cProject.dir/requires: CMakeFiles/cProject.dir/main.c.o.requires

.PHONY : CMakeFiles/cProject.dir/requires

CMakeFiles/cProject.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cProject.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cProject.dir/clean

CMakeFiles/cProject.dir/depend:
	cd /home/tsf/CLionProjects/cProject/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tsf/CLionProjects/cProject /home/tsf/CLionProjects/cProject /home/tsf/CLionProjects/cProject/cmake-build-debug /home/tsf/CLionProjects/cProject/cmake-build-debug /home/tsf/CLionProjects/cProject/cmake-build-debug/CMakeFiles/cProject.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cProject.dir/depend
