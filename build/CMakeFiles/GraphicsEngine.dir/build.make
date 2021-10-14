# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = C:\CMake\bin\cmake.exe

# The command to remove a file.
RM = C:\CMake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Project\graphicsengine

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Project\graphicsengine\build

# Include any dependencies generated for this target.
include CMakeFiles/GraphicsEngine.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/GraphicsEngine.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/GraphicsEngine.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GraphicsEngine.dir/flags.make

CMakeFiles/GraphicsEngine.dir/src/main.cpp.obj: CMakeFiles/GraphicsEngine.dir/flags.make
CMakeFiles/GraphicsEngine.dir/src/main.cpp.obj: CMakeFiles/GraphicsEngine.dir/includes_CXX.rsp
CMakeFiles/GraphicsEngine.dir/src/main.cpp.obj: ../src/main.cpp
CMakeFiles/GraphicsEngine.dir/src/main.cpp.obj: CMakeFiles/GraphicsEngine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Project\graphicsengine\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GraphicsEngine.dir/src/main.cpp.obj"
	C:\MinGW\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/GraphicsEngine.dir/src/main.cpp.obj -MF CMakeFiles\GraphicsEngine.dir\src\main.cpp.obj.d -o CMakeFiles\GraphicsEngine.dir\src\main.cpp.obj -c C:\Project\graphicsengine\src\main.cpp

CMakeFiles/GraphicsEngine.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GraphicsEngine.dir/src/main.cpp.i"
	C:\MinGW\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Project\graphicsengine\src\main.cpp > CMakeFiles\GraphicsEngine.dir\src\main.cpp.i

CMakeFiles/GraphicsEngine.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GraphicsEngine.dir/src/main.cpp.s"
	C:\MinGW\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Project\graphicsengine\src\main.cpp -o CMakeFiles\GraphicsEngine.dir\src\main.cpp.s

CMakeFiles/GraphicsEngine.dir/src/window/Window.cpp.obj: CMakeFiles/GraphicsEngine.dir/flags.make
CMakeFiles/GraphicsEngine.dir/src/window/Window.cpp.obj: CMakeFiles/GraphicsEngine.dir/includes_CXX.rsp
CMakeFiles/GraphicsEngine.dir/src/window/Window.cpp.obj: ../src/window/Window.cpp
CMakeFiles/GraphicsEngine.dir/src/window/Window.cpp.obj: CMakeFiles/GraphicsEngine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Project\graphicsengine\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/GraphicsEngine.dir/src/window/Window.cpp.obj"
	C:\MinGW\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/GraphicsEngine.dir/src/window/Window.cpp.obj -MF CMakeFiles\GraphicsEngine.dir\src\window\Window.cpp.obj.d -o CMakeFiles\GraphicsEngine.dir\src\window\Window.cpp.obj -c C:\Project\graphicsengine\src\window\Window.cpp

CMakeFiles/GraphicsEngine.dir/src/window/Window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GraphicsEngine.dir/src/window/Window.cpp.i"
	C:\MinGW\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Project\graphicsengine\src\window\Window.cpp > CMakeFiles\GraphicsEngine.dir\src\window\Window.cpp.i

CMakeFiles/GraphicsEngine.dir/src/window/Window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GraphicsEngine.dir/src/window/Window.cpp.s"
	C:\MinGW\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Project\graphicsengine\src\window\Window.cpp -o CMakeFiles\GraphicsEngine.dir\src\window\Window.cpp.s

# Object files for target GraphicsEngine
GraphicsEngine_OBJECTS = \
"CMakeFiles/GraphicsEngine.dir/src/main.cpp.obj" \
"CMakeFiles/GraphicsEngine.dir/src/window/Window.cpp.obj"

# External object files for target GraphicsEngine
GraphicsEngine_EXTERNAL_OBJECTS =

GraphicsEngine.exe: CMakeFiles/GraphicsEngine.dir/src/main.cpp.obj
GraphicsEngine.exe: CMakeFiles/GraphicsEngine.dir/src/window/Window.cpp.obj
GraphicsEngine.exe: CMakeFiles/GraphicsEngine.dir/build.make
GraphicsEngine.exe: C:/vcpkg/installed/x64-mingw-static/debug/lib/libglad.a
GraphicsEngine.exe: C:/vcpkg/installed/x64-mingw-static/debug/lib/libglfw3.a
GraphicsEngine.exe: CMakeFiles/GraphicsEngine.dir/linklibs.rsp
GraphicsEngine.exe: CMakeFiles/GraphicsEngine.dir/objects1.rsp
GraphicsEngine.exe: CMakeFiles/GraphicsEngine.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Project\graphicsengine\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable GraphicsEngine.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\GraphicsEngine.dir\link.txt --verbose=$(VERBOSE)
	C:\Windows\System32\WindowsPowerShell\v1.0\powershell.exe -noprofile -executionpolicy Bypass -file C:/vcpkg/scripts/buildsystems/msbuild/applocal.ps1 -targetBinary C:/Project/graphicsengine/build/GraphicsEngine.exe -installedDir C:/vcpkg/installed/x64-mingw-static/bin -OutVariable out

# Rule to build all files generated by this target.
CMakeFiles/GraphicsEngine.dir/build: GraphicsEngine.exe
.PHONY : CMakeFiles/GraphicsEngine.dir/build

CMakeFiles/GraphicsEngine.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\GraphicsEngine.dir\cmake_clean.cmake
.PHONY : CMakeFiles/GraphicsEngine.dir/clean

CMakeFiles/GraphicsEngine.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Project\graphicsengine C:\Project\graphicsengine C:\Project\graphicsengine\build C:\Project\graphicsengine\build C:\Project\graphicsengine\build\CMakeFiles\GraphicsEngine.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GraphicsEngine.dir/depend

