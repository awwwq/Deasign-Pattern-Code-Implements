# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_SOURCE_DIR = /Volumes/Samsung_T5/learn/Cplus/Ch.1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Volumes/Samsung_T5/learn/Cplus/Ch.1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Cplus.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Cplus.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Cplus.dir/flags.make

CMakeFiles/Cplus.dir/Duck.cpp.o: CMakeFiles/Cplus.dir/flags.make
CMakeFiles/Cplus.dir/Duck.cpp.o: ../Duck.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Volumes/Samsung_T5/learn/Cplus/Ch.1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Cplus.dir/Duck.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Cplus.dir/Duck.cpp.o -c /Volumes/Samsung_T5/learn/Cplus/Ch.1/Duck.cpp

CMakeFiles/Cplus.dir/Duck.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cplus.dir/Duck.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Volumes/Samsung_T5/learn/Cplus/Ch.1/Duck.cpp > CMakeFiles/Cplus.dir/Duck.cpp.i

CMakeFiles/Cplus.dir/Duck.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cplus.dir/Duck.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Volumes/Samsung_T5/learn/Cplus/Ch.1/Duck.cpp -o CMakeFiles/Cplus.dir/Duck.cpp.s

CMakeFiles/Cplus.dir/FlyBehavior.cpp.o: CMakeFiles/Cplus.dir/flags.make
CMakeFiles/Cplus.dir/FlyBehavior.cpp.o: ../FlyBehavior.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Volumes/Samsung_T5/learn/Cplus/Ch.1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Cplus.dir/FlyBehavior.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Cplus.dir/FlyBehavior.cpp.o -c /Volumes/Samsung_T5/learn/Cplus/Ch.1/FlyBehavior.cpp

CMakeFiles/Cplus.dir/FlyBehavior.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cplus.dir/FlyBehavior.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Volumes/Samsung_T5/learn/Cplus/Ch.1/FlyBehavior.cpp > CMakeFiles/Cplus.dir/FlyBehavior.cpp.i

CMakeFiles/Cplus.dir/FlyBehavior.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cplus.dir/FlyBehavior.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Volumes/Samsung_T5/learn/Cplus/Ch.1/FlyBehavior.cpp -o CMakeFiles/Cplus.dir/FlyBehavior.cpp.s

CMakeFiles/Cplus.dir/main.cpp.o: CMakeFiles/Cplus.dir/flags.make
CMakeFiles/Cplus.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Volumes/Samsung_T5/learn/Cplus/Ch.1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Cplus.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Cplus.dir/main.cpp.o -c /Volumes/Samsung_T5/learn/Cplus/Ch.1/main.cpp

CMakeFiles/Cplus.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cplus.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Volumes/Samsung_T5/learn/Cplus/Ch.1/main.cpp > CMakeFiles/Cplus.dir/main.cpp.i

CMakeFiles/Cplus.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cplus.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Volumes/Samsung_T5/learn/Cplus/Ch.1/main.cpp -o CMakeFiles/Cplus.dir/main.cpp.s

CMakeFiles/Cplus.dir/QuackBehavior.cpp.o: CMakeFiles/Cplus.dir/flags.make
CMakeFiles/Cplus.dir/QuackBehavior.cpp.o: ../QuackBehavior.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Volumes/Samsung_T5/learn/Cplus/Ch.1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Cplus.dir/QuackBehavior.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Cplus.dir/QuackBehavior.cpp.o -c /Volumes/Samsung_T5/learn/Cplus/Ch.1/QuackBehavior.cpp

CMakeFiles/Cplus.dir/QuackBehavior.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cplus.dir/QuackBehavior.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Volumes/Samsung_T5/learn/Cplus/Ch.1/QuackBehavior.cpp > CMakeFiles/Cplus.dir/QuackBehavior.cpp.i

CMakeFiles/Cplus.dir/QuackBehavior.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cplus.dir/QuackBehavior.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Volumes/Samsung_T5/learn/Cplus/Ch.1/QuackBehavior.cpp -o CMakeFiles/Cplus.dir/QuackBehavior.cpp.s

# Object files for target Cplus
Cplus_OBJECTS = \
"CMakeFiles/Cplus.dir/Duck.cpp.o" \
"CMakeFiles/Cplus.dir/FlyBehavior.cpp.o" \
"CMakeFiles/Cplus.dir/main.cpp.o" \
"CMakeFiles/Cplus.dir/QuackBehavior.cpp.o"

# External object files for target Cplus
Cplus_EXTERNAL_OBJECTS =

Cplus: CMakeFiles/Cplus.dir/Duck.cpp.o
Cplus: CMakeFiles/Cplus.dir/FlyBehavior.cpp.o
Cplus: CMakeFiles/Cplus.dir/main.cpp.o
Cplus: CMakeFiles/Cplus.dir/QuackBehavior.cpp.o
Cplus: CMakeFiles/Cplus.dir/build.make
Cplus: CMakeFiles/Cplus.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Volumes/Samsung_T5/learn/Cplus/Ch.1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable Cplus"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Cplus.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Cplus.dir/build: Cplus

.PHONY : CMakeFiles/Cplus.dir/build

CMakeFiles/Cplus.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Cplus.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Cplus.dir/clean

CMakeFiles/Cplus.dir/depend:
	cd /Volumes/Samsung_T5/learn/Cplus/Ch.1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Volumes/Samsung_T5/learn/Cplus/Ch.1 /Volumes/Samsung_T5/learn/Cplus/Ch.1 /Volumes/Samsung_T5/learn/Cplus/Ch.1/cmake-build-debug /Volumes/Samsung_T5/learn/Cplus/Ch.1/cmake-build-debug /Volumes/Samsung_T5/learn/Cplus/Ch.1/cmake-build-debug/CMakeFiles/Cplus.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Cplus.dir/depend

