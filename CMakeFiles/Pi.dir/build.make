# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/stephi/Desktop/Codes/200619_Pi

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/stephi/Desktop/Codes/200619_Pi

# Include any dependencies generated for this target.
include CMakeFiles/Pi.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Pi.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Pi.dir/flags.make

CMakeFiles/Pi.dir/pi.cpp.o: CMakeFiles/Pi.dir/flags.make
CMakeFiles/Pi.dir/pi.cpp.o: pi.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stephi/Desktop/Codes/200619_Pi/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Pi.dir/pi.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Pi.dir/pi.cpp.o -c /home/stephi/Desktop/Codes/200619_Pi/pi.cpp

CMakeFiles/Pi.dir/pi.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Pi.dir/pi.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stephi/Desktop/Codes/200619_Pi/pi.cpp > CMakeFiles/Pi.dir/pi.cpp.i

CMakeFiles/Pi.dir/pi.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Pi.dir/pi.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stephi/Desktop/Codes/200619_Pi/pi.cpp -o CMakeFiles/Pi.dir/pi.cpp.s

CMakeFiles/Pi.dir/pi.cpp.o.requires:

.PHONY : CMakeFiles/Pi.dir/pi.cpp.o.requires

CMakeFiles/Pi.dir/pi.cpp.o.provides: CMakeFiles/Pi.dir/pi.cpp.o.requires
	$(MAKE) -f CMakeFiles/Pi.dir/build.make CMakeFiles/Pi.dir/pi.cpp.o.provides.build
.PHONY : CMakeFiles/Pi.dir/pi.cpp.o.provides

CMakeFiles/Pi.dir/pi.cpp.o.provides.build: CMakeFiles/Pi.dir/pi.cpp.o


# Object files for target Pi
Pi_OBJECTS = \
"CMakeFiles/Pi.dir/pi.cpp.o"

# External object files for target Pi
Pi_EXTERNAL_OBJECTS =

Pi: CMakeFiles/Pi.dir/pi.cpp.o
Pi: CMakeFiles/Pi.dir/build.make
Pi: /usr/local/lib/libsfml-graphics.so.2.5.1
Pi: /usr/local/lib/libsfml-window.so.2.5.1
Pi: /usr/local/lib/libsfml-system.so.2.5.1
Pi: CMakeFiles/Pi.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/stephi/Desktop/Codes/200619_Pi/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Pi"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Pi.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Pi.dir/build: Pi

.PHONY : CMakeFiles/Pi.dir/build

CMakeFiles/Pi.dir/requires: CMakeFiles/Pi.dir/pi.cpp.o.requires

.PHONY : CMakeFiles/Pi.dir/requires

CMakeFiles/Pi.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Pi.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Pi.dir/clean

CMakeFiles/Pi.dir/depend:
	cd /home/stephi/Desktop/Codes/200619_Pi && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/stephi/Desktop/Codes/200619_Pi /home/stephi/Desktop/Codes/200619_Pi /home/stephi/Desktop/Codes/200619_Pi /home/stephi/Desktop/Codes/200619_Pi /home/stephi/Desktop/Codes/200619_Pi/CMakeFiles/Pi.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Pi.dir/depend

