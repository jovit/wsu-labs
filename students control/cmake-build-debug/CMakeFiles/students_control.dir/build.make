# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/joao.goncalves/Desktop/labs/students control"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/joao.goncalves/Desktop/labs/students control/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/students_control.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/students_control.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/students_control.dir/flags.make

CMakeFiles/students_control.dir/main.cpp.o: CMakeFiles/students_control.dir/flags.make
CMakeFiles/students_control.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/joao.goncalves/Desktop/labs/students control/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/students_control.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/students_control.dir/main.cpp.o -c "/Users/joao.goncalves/Desktop/labs/students control/main.cpp"

CMakeFiles/students_control.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/students_control.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/joao.goncalves/Desktop/labs/students control/main.cpp" > CMakeFiles/students_control.dir/main.cpp.i

CMakeFiles/students_control.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/students_control.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/joao.goncalves/Desktop/labs/students control/main.cpp" -o CMakeFiles/students_control.dir/main.cpp.s

CMakeFiles/students_control.dir/Menu.cpp.o: CMakeFiles/students_control.dir/flags.make
CMakeFiles/students_control.dir/Menu.cpp.o: ../Menu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/joao.goncalves/Desktop/labs/students control/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/students_control.dir/Menu.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/students_control.dir/Menu.cpp.o -c "/Users/joao.goncalves/Desktop/labs/students control/Menu.cpp"

CMakeFiles/students_control.dir/Menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/students_control.dir/Menu.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/joao.goncalves/Desktop/labs/students control/Menu.cpp" > CMakeFiles/students_control.dir/Menu.cpp.i

CMakeFiles/students_control.dir/Menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/students_control.dir/Menu.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/joao.goncalves/Desktop/labs/students control/Menu.cpp" -o CMakeFiles/students_control.dir/Menu.cpp.s

CMakeFiles/students_control.dir/Data.cpp.o: CMakeFiles/students_control.dir/flags.make
CMakeFiles/students_control.dir/Data.cpp.o: ../Data.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/joao.goncalves/Desktop/labs/students control/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/students_control.dir/Data.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/students_control.dir/Data.cpp.o -c "/Users/joao.goncalves/Desktop/labs/students control/Data.cpp"

CMakeFiles/students_control.dir/Data.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/students_control.dir/Data.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/joao.goncalves/Desktop/labs/students control/Data.cpp" > CMakeFiles/students_control.dir/Data.cpp.i

CMakeFiles/students_control.dir/Data.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/students_control.dir/Data.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/joao.goncalves/Desktop/labs/students control/Data.cpp" -o CMakeFiles/students_control.dir/Data.cpp.s

CMakeFiles/students_control.dir/Stack.cpp.o: CMakeFiles/students_control.dir/flags.make
CMakeFiles/students_control.dir/Stack.cpp.o: ../Stack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/joao.goncalves/Desktop/labs/students control/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/students_control.dir/Stack.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/students_control.dir/Stack.cpp.o -c "/Users/joao.goncalves/Desktop/labs/students control/Stack.cpp"

CMakeFiles/students_control.dir/Stack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/students_control.dir/Stack.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/joao.goncalves/Desktop/labs/students control/Stack.cpp" > CMakeFiles/students_control.dir/Stack.cpp.i

CMakeFiles/students_control.dir/Stack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/students_control.dir/Stack.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/joao.goncalves/Desktop/labs/students control/Stack.cpp" -o CMakeFiles/students_control.dir/Stack.cpp.s

# Object files for target students_control
students_control_OBJECTS = \
"CMakeFiles/students_control.dir/main.cpp.o" \
"CMakeFiles/students_control.dir/Menu.cpp.o" \
"CMakeFiles/students_control.dir/Data.cpp.o" \
"CMakeFiles/students_control.dir/Stack.cpp.o"

# External object files for target students_control
students_control_EXTERNAL_OBJECTS =

students_control: CMakeFiles/students_control.dir/main.cpp.o
students_control: CMakeFiles/students_control.dir/Menu.cpp.o
students_control: CMakeFiles/students_control.dir/Data.cpp.o
students_control: CMakeFiles/students_control.dir/Stack.cpp.o
students_control: CMakeFiles/students_control.dir/build.make
students_control: CMakeFiles/students_control.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/joao.goncalves/Desktop/labs/students control/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable students_control"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/students_control.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/students_control.dir/build: students_control

.PHONY : CMakeFiles/students_control.dir/build

CMakeFiles/students_control.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/students_control.dir/cmake_clean.cmake
.PHONY : CMakeFiles/students_control.dir/clean

CMakeFiles/students_control.dir/depend:
	cd "/Users/joao.goncalves/Desktop/labs/students control/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/joao.goncalves/Desktop/labs/students control" "/Users/joao.goncalves/Desktop/labs/students control" "/Users/joao.goncalves/Desktop/labs/students control/cmake-build-debug" "/Users/joao.goncalves/Desktop/labs/students control/cmake-build-debug" "/Users/joao.goncalves/Desktop/labs/students control/cmake-build-debug/CMakeFiles/students_control.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/students_control.dir/depend

