# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\Git\C++\SchoolProject\easyGame

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\Git\C++\SchoolProject\easyGame\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/easyGame.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/easyGame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/easyGame.dir/flags.make

CMakeFiles/easyGame.dir/main.cpp.obj: CMakeFiles/easyGame.dir/flags.make
CMakeFiles/easyGame.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\Git\C++\SchoolProject\easyGame\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/easyGame.dir/main.cpp.obj"
	D:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\easyGame.dir\main.cpp.obj -c F:\Git\C++\SchoolProject\easyGame\main.cpp

CMakeFiles/easyGame.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/easyGame.dir/main.cpp.i"
	D:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\Git\C++\SchoolProject\easyGame\main.cpp > CMakeFiles\easyGame.dir\main.cpp.i

CMakeFiles/easyGame.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/easyGame.dir/main.cpp.s"
	D:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\Git\C++\SchoolProject\easyGame\main.cpp -o CMakeFiles\easyGame.dir\main.cpp.s

# Object files for target easyGame
easyGame_OBJECTS = \
"CMakeFiles/easyGame.dir/main.cpp.obj"

# External object files for target easyGame
easyGame_EXTERNAL_OBJECTS =

easyGame.exe: CMakeFiles/easyGame.dir/main.cpp.obj
easyGame.exe: CMakeFiles/easyGame.dir/build.make
easyGame.exe: CMakeFiles/easyGame.dir/linklibs.rsp
easyGame.exe: CMakeFiles/easyGame.dir/objects1.rsp
easyGame.exe: CMakeFiles/easyGame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\Git\C++\SchoolProject\easyGame\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable easyGame.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\easyGame.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/easyGame.dir/build: easyGame.exe

.PHONY : CMakeFiles/easyGame.dir/build

CMakeFiles/easyGame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\easyGame.dir\cmake_clean.cmake
.PHONY : CMakeFiles/easyGame.dir/clean

CMakeFiles/easyGame.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\Git\C++\SchoolProject\easyGame F:\Git\C++\SchoolProject\easyGame F:\Git\C++\SchoolProject\easyGame\cmake-build-debug F:\Git\C++\SchoolProject\easyGame\cmake-build-debug F:\Git\C++\SchoolProject\easyGame\cmake-build-debug\CMakeFiles\easyGame.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/easyGame.dir/depend

