# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Cpp_Projects\Algorithms

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Cpp_Projects\Algorithms\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Algorithms.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Algorithms.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Algorithms.dir/flags.make

CMakeFiles/Algorithms.dir/main.cpp.obj: CMakeFiles/Algorithms.dir/flags.make
CMakeFiles/Algorithms.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Cpp_Projects\Algorithms\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Algorithms.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Algorithms.dir\main.cpp.obj -c E:\Cpp_Projects\Algorithms\main.cpp

CMakeFiles/Algorithms.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Algorithms.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Cpp_Projects\Algorithms\main.cpp > CMakeFiles\Algorithms.dir\main.cpp.i

CMakeFiles/Algorithms.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Algorithms.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Cpp_Projects\Algorithms\main.cpp -o CMakeFiles\Algorithms.dir\main.cpp.s

# Object files for target Algorithms
Algorithms_OBJECTS = \
"CMakeFiles/Algorithms.dir/main.cpp.obj"

# External object files for target Algorithms
Algorithms_EXTERNAL_OBJECTS =

Algorithms.exe: CMakeFiles/Algorithms.dir/main.cpp.obj
Algorithms.exe: CMakeFiles/Algorithms.dir/build.make
Algorithms.exe: CMakeFiles/Algorithms.dir/linklibs.rsp
Algorithms.exe: CMakeFiles/Algorithms.dir/objects1.rsp
Algorithms.exe: CMakeFiles/Algorithms.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Cpp_Projects\Algorithms\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Algorithms.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Algorithms.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Algorithms.dir/build: Algorithms.exe

.PHONY : CMakeFiles/Algorithms.dir/build

CMakeFiles/Algorithms.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Algorithms.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Algorithms.dir/clean

CMakeFiles/Algorithms.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Cpp_Projects\Algorithms E:\Cpp_Projects\Algorithms E:\Cpp_Projects\Algorithms\cmake-build-debug E:\Cpp_Projects\Algorithms\cmake-build-debug E:\Cpp_Projects\Algorithms\cmake-build-debug\CMakeFiles\Algorithms.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Algorithms.dir/depend

