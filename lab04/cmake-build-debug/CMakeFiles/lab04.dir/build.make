# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /home/usama/clion-2017.3.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/usama/clion-2017.3.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/usama/CLionProjects/lab04

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/usama/CLionProjects/lab04/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab04.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab04.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab04.dir/flags.make

CMakeFiles/lab04.dir/main.cpp.o: CMakeFiles/lab04.dir/flags.make
CMakeFiles/lab04.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usama/CLionProjects/lab04/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab04.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab04.dir/main.cpp.o -c /home/usama/CLionProjects/lab04/main.cpp

CMakeFiles/lab04.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab04.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usama/CLionProjects/lab04/main.cpp > CMakeFiles/lab04.dir/main.cpp.i

CMakeFiles/lab04.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab04.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usama/CLionProjects/lab04/main.cpp -o CMakeFiles/lab04.dir/main.cpp.s

CMakeFiles/lab04.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/lab04.dir/main.cpp.o.requires

CMakeFiles/lab04.dir/main.cpp.o.provides: CMakeFiles/lab04.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/lab04.dir/build.make CMakeFiles/lab04.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/lab04.dir/main.cpp.o.provides

CMakeFiles/lab04.dir/main.cpp.o.provides.build: CMakeFiles/lab04.dir/main.cpp.o


CMakeFiles/lab04.dir/Complex.cpp.o: CMakeFiles/lab04.dir/flags.make
CMakeFiles/lab04.dir/Complex.cpp.o: ../Complex.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usama/CLionProjects/lab04/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lab04.dir/Complex.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab04.dir/Complex.cpp.o -c /home/usama/CLionProjects/lab04/Complex.cpp

CMakeFiles/lab04.dir/Complex.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab04.dir/Complex.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usama/CLionProjects/lab04/Complex.cpp > CMakeFiles/lab04.dir/Complex.cpp.i

CMakeFiles/lab04.dir/Complex.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab04.dir/Complex.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usama/CLionProjects/lab04/Complex.cpp -o CMakeFiles/lab04.dir/Complex.cpp.s

CMakeFiles/lab04.dir/Complex.cpp.o.requires:

.PHONY : CMakeFiles/lab04.dir/Complex.cpp.o.requires

CMakeFiles/lab04.dir/Complex.cpp.o.provides: CMakeFiles/lab04.dir/Complex.cpp.o.requires
	$(MAKE) -f CMakeFiles/lab04.dir/build.make CMakeFiles/lab04.dir/Complex.cpp.o.provides.build
.PHONY : CMakeFiles/lab04.dir/Complex.cpp.o.provides

CMakeFiles/lab04.dir/Complex.cpp.o.provides.build: CMakeFiles/lab04.dir/Complex.cpp.o


CMakeFiles/lab04.dir/Fractions.cpp.o: CMakeFiles/lab04.dir/flags.make
CMakeFiles/lab04.dir/Fractions.cpp.o: ../Fractions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usama/CLionProjects/lab04/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/lab04.dir/Fractions.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab04.dir/Fractions.cpp.o -c /home/usama/CLionProjects/lab04/Fractions.cpp

CMakeFiles/lab04.dir/Fractions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab04.dir/Fractions.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usama/CLionProjects/lab04/Fractions.cpp > CMakeFiles/lab04.dir/Fractions.cpp.i

CMakeFiles/lab04.dir/Fractions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab04.dir/Fractions.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usama/CLionProjects/lab04/Fractions.cpp -o CMakeFiles/lab04.dir/Fractions.cpp.s

CMakeFiles/lab04.dir/Fractions.cpp.o.requires:

.PHONY : CMakeFiles/lab04.dir/Fractions.cpp.o.requires

CMakeFiles/lab04.dir/Fractions.cpp.o.provides: CMakeFiles/lab04.dir/Fractions.cpp.o.requires
	$(MAKE) -f CMakeFiles/lab04.dir/build.make CMakeFiles/lab04.dir/Fractions.cpp.o.provides.build
.PHONY : CMakeFiles/lab04.dir/Fractions.cpp.o.provides

CMakeFiles/lab04.dir/Fractions.cpp.o.provides.build: CMakeFiles/lab04.dir/Fractions.cpp.o


# Object files for target lab04
lab04_OBJECTS = \
"CMakeFiles/lab04.dir/main.cpp.o" \
"CMakeFiles/lab04.dir/Complex.cpp.o" \
"CMakeFiles/lab04.dir/Fractions.cpp.o"

# External object files for target lab04
lab04_EXTERNAL_OBJECTS =

lab04: CMakeFiles/lab04.dir/main.cpp.o
lab04: CMakeFiles/lab04.dir/Complex.cpp.o
lab04: CMakeFiles/lab04.dir/Fractions.cpp.o
lab04: CMakeFiles/lab04.dir/build.make
lab04: CMakeFiles/lab04.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/usama/CLionProjects/lab04/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable lab04"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab04.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab04.dir/build: lab04

.PHONY : CMakeFiles/lab04.dir/build

CMakeFiles/lab04.dir/requires: CMakeFiles/lab04.dir/main.cpp.o.requires
CMakeFiles/lab04.dir/requires: CMakeFiles/lab04.dir/Complex.cpp.o.requires
CMakeFiles/lab04.dir/requires: CMakeFiles/lab04.dir/Fractions.cpp.o.requires

.PHONY : CMakeFiles/lab04.dir/requires

CMakeFiles/lab04.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab04.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab04.dir/clean

CMakeFiles/lab04.dir/depend:
	cd /home/usama/CLionProjects/lab04/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/usama/CLionProjects/lab04 /home/usama/CLionProjects/lab04 /home/usama/CLionProjects/lab04/cmake-build-debug /home/usama/CLionProjects/lab04/cmake-build-debug /home/usama/CLionProjects/lab04/cmake-build-debug/CMakeFiles/lab04.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab04.dir/depend
