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


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /home/wy/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/202.7660.37/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/wy/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/202.7660.37/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/wy/CLionProjects/untitled5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wy/CLionProjects/untitled5/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/untitled5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled5.dir/flags.make

CMakeFiles/untitled5.dir/main.cpp.o: CMakeFiles/untitled5.dir/flags.make
CMakeFiles/untitled5.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wy/CLionProjects/untitled5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/untitled5.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled5.dir/main.cpp.o -c /home/wy/CLionProjects/untitled5/main.cpp

CMakeFiles/untitled5.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled5.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wy/CLionProjects/untitled5/main.cpp > CMakeFiles/untitled5.dir/main.cpp.i

CMakeFiles/untitled5.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled5.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wy/CLionProjects/untitled5/main.cpp -o CMakeFiles/untitled5.dir/main.cpp.s

CMakeFiles/untitled5.dir/poimx.cpp.o: CMakeFiles/untitled5.dir/flags.make
CMakeFiles/untitled5.dir/poimx.cpp.o: ../poimx.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wy/CLionProjects/untitled5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/untitled5.dir/poimx.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled5.dir/poimx.cpp.o -c /home/wy/CLionProjects/untitled5/poimx.cpp

CMakeFiles/untitled5.dir/poimx.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled5.dir/poimx.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wy/CLionProjects/untitled5/poimx.cpp > CMakeFiles/untitled5.dir/poimx.cpp.i

CMakeFiles/untitled5.dir/poimx.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled5.dir/poimx.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wy/CLionProjects/untitled5/poimx.cpp -o CMakeFiles/untitled5.dir/poimx.cpp.s

CMakeFiles/untitled5.dir/wrlock.cpp.o: CMakeFiles/untitled5.dir/flags.make
CMakeFiles/untitled5.dir/wrlock.cpp.o: ../wrlock.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wy/CLionProjects/untitled5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/untitled5.dir/wrlock.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled5.dir/wrlock.cpp.o -c /home/wy/CLionProjects/untitled5/wrlock.cpp

CMakeFiles/untitled5.dir/wrlock.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled5.dir/wrlock.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wy/CLionProjects/untitled5/wrlock.cpp > CMakeFiles/untitled5.dir/wrlock.cpp.i

CMakeFiles/untitled5.dir/wrlock.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled5.dir/wrlock.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wy/CLionProjects/untitled5/wrlock.cpp -o CMakeFiles/untitled5.dir/wrlock.cpp.s

CMakeFiles/untitled5.dir/hashmap.cpp.o: CMakeFiles/untitled5.dir/flags.make
CMakeFiles/untitled5.dir/hashmap.cpp.o: ../hashmap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wy/CLionProjects/untitled5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/untitled5.dir/hashmap.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled5.dir/hashmap.cpp.o -c /home/wy/CLionProjects/untitled5/hashmap.cpp

CMakeFiles/untitled5.dir/hashmap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled5.dir/hashmap.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wy/CLionProjects/untitled5/hashmap.cpp > CMakeFiles/untitled5.dir/hashmap.cpp.i

CMakeFiles/untitled5.dir/hashmap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled5.dir/hashmap.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wy/CLionProjects/untitled5/hashmap.cpp -o CMakeFiles/untitled5.dir/hashmap.cpp.s

CMakeFiles/untitled5.dir/map.cpp.o: CMakeFiles/untitled5.dir/flags.make
CMakeFiles/untitled5.dir/map.cpp.o: ../map.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wy/CLionProjects/untitled5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/untitled5.dir/map.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled5.dir/map.cpp.o -c /home/wy/CLionProjects/untitled5/map.cpp

CMakeFiles/untitled5.dir/map.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled5.dir/map.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wy/CLionProjects/untitled5/map.cpp > CMakeFiles/untitled5.dir/map.cpp.i

CMakeFiles/untitled5.dir/map.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled5.dir/map.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wy/CLionProjects/untitled5/map.cpp -o CMakeFiles/untitled5.dir/map.cpp.s

CMakeFiles/untitled5.dir/McsLock.cpp.o: CMakeFiles/untitled5.dir/flags.make
CMakeFiles/untitled5.dir/McsLock.cpp.o: ../McsLock.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wy/CLionProjects/untitled5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/untitled5.dir/McsLock.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled5.dir/McsLock.cpp.o -c /home/wy/CLionProjects/untitled5/McsLock.cpp

CMakeFiles/untitled5.dir/McsLock.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled5.dir/McsLock.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wy/CLionProjects/untitled5/McsLock.cpp > CMakeFiles/untitled5.dir/McsLock.cpp.i

CMakeFiles/untitled5.dir/McsLock.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled5.dir/McsLock.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wy/CLionProjects/untitled5/McsLock.cpp -o CMakeFiles/untitled5.dir/McsLock.cpp.s

CMakeFiles/untitled5.dir/proc.cpp.o: CMakeFiles/untitled5.dir/flags.make
CMakeFiles/untitled5.dir/proc.cpp.o: ../proc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wy/CLionProjects/untitled5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/untitled5.dir/proc.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled5.dir/proc.cpp.o -c /home/wy/CLionProjects/untitled5/proc.cpp

CMakeFiles/untitled5.dir/proc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled5.dir/proc.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wy/CLionProjects/untitled5/proc.cpp > CMakeFiles/untitled5.dir/proc.cpp.i

CMakeFiles/untitled5.dir/proc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled5.dir/proc.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wy/CLionProjects/untitled5/proc.cpp -o CMakeFiles/untitled5.dir/proc.cpp.s

# Object files for target untitled5
untitled5_OBJECTS = \
"CMakeFiles/untitled5.dir/main.cpp.o" \
"CMakeFiles/untitled5.dir/poimx.cpp.o" \
"CMakeFiles/untitled5.dir/wrlock.cpp.o" \
"CMakeFiles/untitled5.dir/hashmap.cpp.o" \
"CMakeFiles/untitled5.dir/map.cpp.o" \
"CMakeFiles/untitled5.dir/McsLock.cpp.o" \
"CMakeFiles/untitled5.dir/proc.cpp.o"

# External object files for target untitled5
untitled5_EXTERNAL_OBJECTS =

untitled5: CMakeFiles/untitled5.dir/main.cpp.o
untitled5: CMakeFiles/untitled5.dir/poimx.cpp.o
untitled5: CMakeFiles/untitled5.dir/wrlock.cpp.o
untitled5: CMakeFiles/untitled5.dir/hashmap.cpp.o
untitled5: CMakeFiles/untitled5.dir/map.cpp.o
untitled5: CMakeFiles/untitled5.dir/McsLock.cpp.o
untitled5: CMakeFiles/untitled5.dir/proc.cpp.o
untitled5: CMakeFiles/untitled5.dir/build.make
untitled5: CMakeFiles/untitled5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wy/CLionProjects/untitled5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable untitled5"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/untitled5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/untitled5.dir/build: untitled5

.PHONY : CMakeFiles/untitled5.dir/build

CMakeFiles/untitled5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/untitled5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/untitled5.dir/clean

CMakeFiles/untitled5.dir/depend:
	cd /home/wy/CLionProjects/untitled5/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wy/CLionProjects/untitled5 /home/wy/CLionProjects/untitled5 /home/wy/CLionProjects/untitled5/cmake-build-debug /home/wy/CLionProjects/untitled5/cmake-build-debug /home/wy/CLionProjects/untitled5/cmake-build-debug/CMakeFiles/untitled5.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/untitled5.dir/depend

