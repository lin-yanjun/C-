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
include CMakeFiles/06_review.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/06_review.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/06_review.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/06_review.dir/flags.make

CMakeFiles/06_review.dir/chapter01/06_review.c.obj: CMakeFiles/06_review.dir/flags.make
CMakeFiles/06_review.dir/chapter01/06_review.c.obj: C:/Users/BLZWJ/Desktop/c/C-/chapter01/06_review.c
CMakeFiles/06_review.dir/chapter01/06_review.c.obj: CMakeFiles/06_review.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\BLZWJ\Desktop\c\C-\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/06_review.dir/chapter01/06_review.c.obj"
	D:\study\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/06_review.dir/chapter01/06_review.c.obj -MF CMakeFiles\06_review.dir\chapter01\06_review.c.obj.d -o CMakeFiles\06_review.dir\chapter01\06_review.c.obj -c C:\Users\BLZWJ\Desktop\c\C-\chapter01\06_review.c

CMakeFiles/06_review.dir/chapter01/06_review.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/06_review.dir/chapter01/06_review.c.i"
	D:\study\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\BLZWJ\Desktop\c\C-\chapter01\06_review.c > CMakeFiles\06_review.dir\chapter01\06_review.c.i

CMakeFiles/06_review.dir/chapter01/06_review.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/06_review.dir/chapter01/06_review.c.s"
	D:\study\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\BLZWJ\Desktop\c\C-\chapter01\06_review.c -o CMakeFiles\06_review.dir\chapter01\06_review.c.s

# Object files for target 06_review
06_review_OBJECTS = \
"CMakeFiles/06_review.dir/chapter01/06_review.c.obj"

# External object files for target 06_review
06_review_EXTERNAL_OBJECTS =

06_review.exe: CMakeFiles/06_review.dir/chapter01/06_review.c.obj
06_review.exe: CMakeFiles/06_review.dir/build.make
06_review.exe: CMakeFiles/06_review.dir/linkLibs.rsp
06_review.exe: CMakeFiles/06_review.dir/objects1.rsp
06_review.exe: CMakeFiles/06_review.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\BLZWJ\Desktop\c\C-\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 06_review.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\06_review.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/06_review.dir/build: 06_review.exe
.PHONY : CMakeFiles/06_review.dir/build

CMakeFiles/06_review.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\06_review.dir\cmake_clean.cmake
.PHONY : CMakeFiles/06_review.dir/clean

CMakeFiles/06_review.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\BLZWJ\Desktop\c\C- C:\Users\BLZWJ\Desktop\c\C- C:\Users\BLZWJ\Desktop\c\C-\cmake-build-debug C:\Users\BLZWJ\Desktop\c\C-\cmake-build-debug C:\Users\BLZWJ\Desktop\c\C-\cmake-build-debug\CMakeFiles\06_review.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/06_review.dir/depend
