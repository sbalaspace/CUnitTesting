# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/Win10/Vshare/Study/C_UnitTest/check_tut/tut1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/Win10/Vshare/Study/C_UnitTest/check_tut/tut1/build

# Include any dependencies generated for this target.
include src/CMakeFiles/calc.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/calc.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/calc.dir/flags.make

src/CMakeFiles/calc.dir/calc.c.o: src/CMakeFiles/calc.dir/flags.make
src/CMakeFiles/calc.dir/calc.c.o: ../src/calc.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/Win10/Vshare/Study/C_UnitTest/check_tut/tut1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/CMakeFiles/calc.dir/calc.c.o"
	cd /mnt/Win10/Vshare/Study/C_UnitTest/check_tut/tut1/build/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/calc.dir/calc.c.o   -c /mnt/Win10/Vshare/Study/C_UnitTest/check_tut/tut1/src/calc.c

src/CMakeFiles/calc.dir/calc.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/calc.dir/calc.c.i"
	cd /mnt/Win10/Vshare/Study/C_UnitTest/check_tut/tut1/build/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/Win10/Vshare/Study/C_UnitTest/check_tut/tut1/src/calc.c > CMakeFiles/calc.dir/calc.c.i

src/CMakeFiles/calc.dir/calc.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/calc.dir/calc.c.s"
	cd /mnt/Win10/Vshare/Study/C_UnitTest/check_tut/tut1/build/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/Win10/Vshare/Study/C_UnitTest/check_tut/tut1/src/calc.c -o CMakeFiles/calc.dir/calc.c.s

# Object files for target calc
calc_OBJECTS = \
"CMakeFiles/calc.dir/calc.c.o"

# External object files for target calc
calc_EXTERNAL_OBJECTS =

src/libcalc.a: src/CMakeFiles/calc.dir/calc.c.o
src/libcalc.a: src/CMakeFiles/calc.dir/build.make
src/libcalc.a: src/CMakeFiles/calc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/Win10/Vshare/Study/C_UnitTest/check_tut/tut1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libcalc.a"
	cd /mnt/Win10/Vshare/Study/C_UnitTest/check_tut/tut1/build/src && $(CMAKE_COMMAND) -P CMakeFiles/calc.dir/cmake_clean_target.cmake
	cd /mnt/Win10/Vshare/Study/C_UnitTest/check_tut/tut1/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/calc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/calc.dir/build: src/libcalc.a

.PHONY : src/CMakeFiles/calc.dir/build

src/CMakeFiles/calc.dir/clean:
	cd /mnt/Win10/Vshare/Study/C_UnitTest/check_tut/tut1/build/src && $(CMAKE_COMMAND) -P CMakeFiles/calc.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/calc.dir/clean

src/CMakeFiles/calc.dir/depend:
	cd /mnt/Win10/Vshare/Study/C_UnitTest/check_tut/tut1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/Win10/Vshare/Study/C_UnitTest/check_tut/tut1 /mnt/Win10/Vshare/Study/C_UnitTest/check_tut/tut1/src /mnt/Win10/Vshare/Study/C_UnitTest/check_tut/tut1/build /mnt/Win10/Vshare/Study/C_UnitTest/check_tut/tut1/build/src /mnt/Win10/Vshare/Study/C_UnitTest/check_tut/tut1/build/src/CMakeFiles/calc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/calc.dir/depend
