# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /cygdrive/c/Users/clams/.CLion2019.1/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/clams/.CLion2019.1/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/c/Users/clams/OneDrive/Desktop/CLion Project/csegrid"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/c/Users/clams/OneDrive/Desktop/CLion Project/csegrid/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/csegrid.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/csegrid.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/csegrid.dir/flags.make

CMakeFiles/csegrid.dir/main.cpp.o: CMakeFiles/csegrid.dir/flags.make
CMakeFiles/csegrid.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/clams/OneDrive/Desktop/CLion Project/csegrid/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/csegrid.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/csegrid.dir/main.cpp.o -c "/cygdrive/c/Users/clams/OneDrive/Desktop/CLion Project/csegrid/main.cpp"

CMakeFiles/csegrid.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/csegrid.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/clams/OneDrive/Desktop/CLion Project/csegrid/main.cpp" > CMakeFiles/csegrid.dir/main.cpp.i

CMakeFiles/csegrid.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/csegrid.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/clams/OneDrive/Desktop/CLion Project/csegrid/main.cpp" -o CMakeFiles/csegrid.dir/main.cpp.s

# Object files for target csegrid
csegrid_OBJECTS = \
"CMakeFiles/csegrid.dir/main.cpp.o"

# External object files for target csegrid
csegrid_EXTERNAL_OBJECTS =

csegrid.exe: CMakeFiles/csegrid.dir/main.cpp.o
csegrid.exe: CMakeFiles/csegrid.dir/build.make
csegrid.exe: CMakeFiles/csegrid.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/c/Users/clams/OneDrive/Desktop/CLion Project/csegrid/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable csegrid.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/csegrid.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/csegrid.dir/build: csegrid.exe

.PHONY : CMakeFiles/csegrid.dir/build

CMakeFiles/csegrid.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/csegrid.dir/cmake_clean.cmake
.PHONY : CMakeFiles/csegrid.dir/clean

CMakeFiles/csegrid.dir/depend:
	cd "/cygdrive/c/Users/clams/OneDrive/Desktop/CLion Project/csegrid/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/c/Users/clams/OneDrive/Desktop/CLion Project/csegrid" "/cygdrive/c/Users/clams/OneDrive/Desktop/CLion Project/csegrid" "/cygdrive/c/Users/clams/OneDrive/Desktop/CLion Project/csegrid/cmake-build-debug" "/cygdrive/c/Users/clams/OneDrive/Desktop/CLion Project/csegrid/cmake-build-debug" "/cygdrive/c/Users/clams/OneDrive/Desktop/CLion Project/csegrid/cmake-build-debug/CMakeFiles/csegrid.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/csegrid.dir/depend

