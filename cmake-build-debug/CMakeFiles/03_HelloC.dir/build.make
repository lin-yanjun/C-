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
include CMakeFiles/03_HelloC.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/03_HelloC.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/03_HelloC.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/03_HelloC.dir/flags.make

CMakeFiles/03_HelloC.dir/chapter01/03_HelloC.c.obj: CMakeFiles/03_HelloC.dir/flags.make
CMakeFiles/03_HelloC.dir/chapter01/03_HelloC.c.obj: C:/Users/BLZWJ/Desktop/c/C-/chapter01/03_HelloC.c
CMakeFiles/03_HelloC.dir/chapter01/03_HelloC.c.obj: CMakeFiles/03_HelloC.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\BLZWJ\Desktop\c\C-\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/03_HelloC.dir/chapter01/03_HelloC.c.obj"
	D:\study\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/03_HelloC.dir/chapter01/03_HelloC.c.obj -MF CMakeFiles\03_HelloC.dir\chapter01\03_HelloC.c.obj.d -o CMakeFiles\03_HelloC.dir\chapter01\03_HelloC.c.obj -c C:\Users\BLZWJ\Desktop\c\C-\chapter01\03_HelloC.c

CMakeFiles/03_HelloC.dir/chapter01/03_HelloC.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/03_HelloC.dir/chapter01/03_HelloC.c.i"
	D:\study\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\BLZWJ\Desktop\c\C-\chapter01\03_HelloC.c > CMakeFiles\03_HelloC.dir\chapter01\03_HelloC.c.i

CMakeFiles/03_HelloC.dir/chapter01/03_HelloC.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/03_HelloC.dir/chapter01/03_HelloC.c.s"
	D:\study\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\BLZWJ\Desktop\c\C-\chapter01\03_HelloC.c -o CMakeFiles\03_HelloC.dir\chapter01\03_HelloC.c.s

# Object files for target 03_HelloC
03_HelloC_OBJECTS = \
"CMakeFiles/03_HelloC.dir/chapter01/03_HelloC.c.obj"

# External object files for target 03_HelloC
03_HelloC_EXTERNAL_OBJECTS =

03_HelloC.exe: CMakeFiles/03_HelloC.dir/chapter01/03_HelloC.c.obj
03_HelloC.exe: CMakeFiles/03_HelloC.dir/build.make
03_HelloC.exe: CMakeFiles/03_HelloC.dir/linkLibs.rsp
03_HelloC.exe: CMakeFiles/03_HelloC.dir/objects1.rsp
03_HelloC.exe: CMakeFiles/03_HelloC.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\BLZWJ\Desktop\c\C-\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 03_HelloC.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\03_HelloC.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/03_HelloC.dir/build: 03_HelloC.exe
.PHONY : CMakeFiles/03_HelloC.dir/build

CMakeFiles/03_HelloC.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\03_HelloC.dir\cmake_clean.cmake
.PHONY : CMakeFiles/03_HelloC.dir/clean

CMakeFiles/03_HelloC.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\BLZWJ\Desktop\c\C- C:\Users\BLZWJ\Desktop\c\C- C:\Users\BLZWJ\Desktop\c\C-\cmake-build-debug C:\Users\BLZWJ\Desktop\c\C-\cmake-build-debug C:\Users\BLZWJ\Desktop\c\C-\cmake-build-debug\CMakeFiles\03_HelloC.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/03_HelloC.dir/depend

