# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\study\CLion 2023.2.2\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "D:\study\CLion 2023.2.2\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\BLZWJ\Desktop\c\C-

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\BLZWJ\Desktop\c\C-\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/04_Printf.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/04_Printf.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/04_Printf.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/04_Printf.dir/flags.make

CMakeFiles/04_Printf.dir/chapter01/04_Printf.c.obj: CMakeFiles/04_Printf.dir/flags.make
CMakeFiles/04_Printf.dir/chapter01/04_Printf.c.obj: C:/Users/BLZWJ/Desktop/c/C-/chapter01/04_Printf.c
CMakeFiles/04_Printf.dir/chapter01/04_Printf.c.obj: CMakeFiles/04_Printf.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\BLZWJ\Desktop\c\C-\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/04_Printf.dir/chapter01/04_Printf.c.obj"
	D:\study\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/04_Printf.dir/chapter01/04_Printf.c.obj -MF CMakeFiles\04_Printf.dir\chapter01\04_Printf.c.obj.d -o CMakeFiles\04_Printf.dir\chapter01\04_Printf.c.obj -c C:\Users\BLZWJ\Desktop\c\C-\chapter01\04_Printf.c

CMakeFiles/04_Printf.dir/chapter01/04_Printf.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/04_Printf.dir/chapter01/04_Printf.c.i"
	D:\study\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\BLZWJ\Desktop\c\C-\chapter01\04_Printf.c > CMakeFiles\04_Printf.dir\chapter01\04_Printf.c.i

CMakeFiles/04_Printf.dir/chapter01/04_Printf.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/04_Printf.dir/chapter01/04_Printf.c.s"
	D:\study\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\BLZWJ\Desktop\c\C-\chapter01\04_Printf.c -o CMakeFiles\04_Printf.dir\chapter01\04_Printf.c.s

# Object files for target 04_Printf
04_Printf_OBJECTS = \
"CMakeFiles/04_Printf.dir/chapter01/04_Printf.c.obj"

# External object files for target 04_Printf
04_Printf_EXTERNAL_OBJECTS =

04_Printf.exe: CMakeFiles/04_Printf.dir/chapter01/04_Printf.c.obj
04_Printf.exe: CMakeFiles/04_Printf.dir/build.make
04_Printf.exe: CMakeFiles/04_Printf.dir/linkLibs.rsp
04_Printf.exe: CMakeFiles/04_Printf.dir/objects1.rsp
04_Printf.exe: CMakeFiles/04_Printf.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\BLZWJ\Desktop\c\C-\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 04_Printf.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\04_Printf.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/04_Printf.dir/build: 04_Printf.exe
.PHONY : CMakeFiles/04_Printf.dir/build

CMakeFiles/04_Printf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\04_Printf.dir\cmake_clean.cmake
.PHONY : CMakeFiles/04_Printf.dir/clean

CMakeFiles/04_Printf.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\BLZWJ\Desktop\c\C- C:\Users\BLZWJ\Desktop\c\C- C:\Users\BLZWJ\Desktop\c\C-\cmake-build-debug C:\Users\BLZWJ\Desktop\c\C-\cmake-build-debug C:\Users\BLZWJ\Desktop\c\C-\cmake-build-debug\CMakeFiles\04_Printf.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/04_Printf.dir/depend

