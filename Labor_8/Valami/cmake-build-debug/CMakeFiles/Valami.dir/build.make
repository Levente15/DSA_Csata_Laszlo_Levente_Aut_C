# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Legion\Desktop\Informatika\Masodik_felev\Adatszerkezetek\DSA_Csata_Laszlo_Levente_Aut_C\Labor_8\Valami

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Legion\Desktop\Informatika\Masodik_felev\Adatszerkezetek\DSA_Csata_Laszlo_Levente_Aut_C\Labor_8\Valami\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Valami.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Valami.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Valami.dir/flags.make

CMakeFiles/Valami.dir/main.c.obj: CMakeFiles/Valami.dir/flags.make
CMakeFiles/Valami.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Legion\Desktop\Informatika\Masodik_felev\Adatszerkezetek\DSA_Csata_Laszlo_Levente_Aut_C\Labor_8\Valami\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Valami.dir/main.c.obj"
	C:\OJI\Codeblocks\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Valami.dir\main.c.obj   -c C:\Users\Legion\Desktop\Informatika\Masodik_felev\Adatszerkezetek\DSA_Csata_Laszlo_Levente_Aut_C\Labor_8\Valami\main.c

CMakeFiles/Valami.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Valami.dir/main.c.i"
	C:\OJI\Codeblocks\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Legion\Desktop\Informatika\Masodik_felev\Adatszerkezetek\DSA_Csata_Laszlo_Levente_Aut_C\Labor_8\Valami\main.c > CMakeFiles\Valami.dir\main.c.i

CMakeFiles/Valami.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Valami.dir/main.c.s"
	C:\OJI\Codeblocks\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Legion\Desktop\Informatika\Masodik_felev\Adatszerkezetek\DSA_Csata_Laszlo_Levente_Aut_C\Labor_8\Valami\main.c -o CMakeFiles\Valami.dir\main.c.s

CMakeFiles/Valami.dir/function.c.obj: CMakeFiles/Valami.dir/flags.make
CMakeFiles/Valami.dir/function.c.obj: ../function.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Legion\Desktop\Informatika\Masodik_felev\Adatszerkezetek\DSA_Csata_Laszlo_Levente_Aut_C\Labor_8\Valami\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Valami.dir/function.c.obj"
	C:\OJI\Codeblocks\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Valami.dir\function.c.obj   -c C:\Users\Legion\Desktop\Informatika\Masodik_felev\Adatszerkezetek\DSA_Csata_Laszlo_Levente_Aut_C\Labor_8\Valami\function.c

CMakeFiles/Valami.dir/function.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Valami.dir/function.c.i"
	C:\OJI\Codeblocks\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Legion\Desktop\Informatika\Masodik_felev\Adatszerkezetek\DSA_Csata_Laszlo_Levente_Aut_C\Labor_8\Valami\function.c > CMakeFiles\Valami.dir\function.c.i

CMakeFiles/Valami.dir/function.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Valami.dir/function.c.s"
	C:\OJI\Codeblocks\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Legion\Desktop\Informatika\Masodik_felev\Adatszerkezetek\DSA_Csata_Laszlo_Levente_Aut_C\Labor_8\Valami\function.c -o CMakeFiles\Valami.dir\function.c.s

# Object files for target Valami
Valami_OBJECTS = \
"CMakeFiles/Valami.dir/main.c.obj" \
"CMakeFiles/Valami.dir/function.c.obj"

# External object files for target Valami
Valami_EXTERNAL_OBJECTS =

Valami.exe: CMakeFiles/Valami.dir/main.c.obj
Valami.exe: CMakeFiles/Valami.dir/function.c.obj
Valami.exe: CMakeFiles/Valami.dir/build.make
Valami.exe: CMakeFiles/Valami.dir/linklibs.rsp
Valami.exe: CMakeFiles/Valami.dir/objects1.rsp
Valami.exe: CMakeFiles/Valami.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Legion\Desktop\Informatika\Masodik_felev\Adatszerkezetek\DSA_Csata_Laszlo_Levente_Aut_C\Labor_8\Valami\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Valami.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Valami.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Valami.dir/build: Valami.exe

.PHONY : CMakeFiles/Valami.dir/build

CMakeFiles/Valami.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Valami.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Valami.dir/clean

CMakeFiles/Valami.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Legion\Desktop\Informatika\Masodik_felev\Adatszerkezetek\DSA_Csata_Laszlo_Levente_Aut_C\Labor_8\Valami C:\Users\Legion\Desktop\Informatika\Masodik_felev\Adatszerkezetek\DSA_Csata_Laszlo_Levente_Aut_C\Labor_8\Valami C:\Users\Legion\Desktop\Informatika\Masodik_felev\Adatszerkezetek\DSA_Csata_Laszlo_Levente_Aut_C\Labor_8\Valami\cmake-build-debug C:\Users\Legion\Desktop\Informatika\Masodik_felev\Adatszerkezetek\DSA_Csata_Laszlo_Levente_Aut_C\Labor_8\Valami\cmake-build-debug C:\Users\Legion\Desktop\Informatika\Masodik_felev\Adatszerkezetek\DSA_Csata_Laszlo_Levente_Aut_C\Labor_8\Valami\cmake-build-debug\CMakeFiles\Valami.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Valami.dir/depend

