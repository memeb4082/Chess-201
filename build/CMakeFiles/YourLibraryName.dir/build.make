# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.26.4/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.26.4/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/dinalatapattu/Desktop/QUT/CAB201/Chess

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/build

# Include any dependencies generated for this target.
include CMakeFiles/YourLibraryName.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/YourLibraryName.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/YourLibraryName.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/YourLibraryName.dir/flags.make

CMakeFiles/YourLibraryName.dir/src/builder.cpp.o: CMakeFiles/YourLibraryName.dir/flags.make
CMakeFiles/YourLibraryName.dir/src/builder.cpp.o: /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/src/builder.cpp
CMakeFiles/YourLibraryName.dir/src/builder.cpp.o: CMakeFiles/YourLibraryName.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dinalatapattu/Desktop/QUT/CAB201/Chess/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/YourLibraryName.dir/src/builder.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/YourLibraryName.dir/src/builder.cpp.o -MF CMakeFiles/YourLibraryName.dir/src/builder.cpp.o.d -o CMakeFiles/YourLibraryName.dir/src/builder.cpp.o -c /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/src/builder.cpp

CMakeFiles/YourLibraryName.dir/src/builder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/YourLibraryName.dir/src/builder.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/src/builder.cpp > CMakeFiles/YourLibraryName.dir/src/builder.cpp.i

CMakeFiles/YourLibraryName.dir/src/builder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/YourLibraryName.dir/src/builder.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/src/builder.cpp -o CMakeFiles/YourLibraryName.dir/src/builder.cpp.s

CMakeFiles/YourLibraryName.dir/src/game.cpp.o: CMakeFiles/YourLibraryName.dir/flags.make
CMakeFiles/YourLibraryName.dir/src/game.cpp.o: /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/src/game.cpp
CMakeFiles/YourLibraryName.dir/src/game.cpp.o: CMakeFiles/YourLibraryName.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dinalatapattu/Desktop/QUT/CAB201/Chess/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/YourLibraryName.dir/src/game.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/YourLibraryName.dir/src/game.cpp.o -MF CMakeFiles/YourLibraryName.dir/src/game.cpp.o.d -o CMakeFiles/YourLibraryName.dir/src/game.cpp.o -c /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/src/game.cpp

CMakeFiles/YourLibraryName.dir/src/game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/YourLibraryName.dir/src/game.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/src/game.cpp > CMakeFiles/YourLibraryName.dir/src/game.cpp.i

CMakeFiles/YourLibraryName.dir/src/game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/YourLibraryName.dir/src/game.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/src/game.cpp -o CMakeFiles/YourLibraryName.dir/src/game.cpp.s

CMakeFiles/YourLibraryName.dir/src/jester.cpp.o: CMakeFiles/YourLibraryName.dir/flags.make
CMakeFiles/YourLibraryName.dir/src/jester.cpp.o: /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/src/jester.cpp
CMakeFiles/YourLibraryName.dir/src/jester.cpp.o: CMakeFiles/YourLibraryName.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dinalatapattu/Desktop/QUT/CAB201/Chess/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/YourLibraryName.dir/src/jester.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/YourLibraryName.dir/src/jester.cpp.o -MF CMakeFiles/YourLibraryName.dir/src/jester.cpp.o.d -o CMakeFiles/YourLibraryName.dir/src/jester.cpp.o -c /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/src/jester.cpp

CMakeFiles/YourLibraryName.dir/src/jester.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/YourLibraryName.dir/src/jester.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/src/jester.cpp > CMakeFiles/YourLibraryName.dir/src/jester.cpp.i

CMakeFiles/YourLibraryName.dir/src/jester.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/YourLibraryName.dir/src/jester.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/src/jester.cpp -o CMakeFiles/YourLibraryName.dir/src/jester.cpp.s

CMakeFiles/YourLibraryName.dir/src/main.cpp.o: CMakeFiles/YourLibraryName.dir/flags.make
CMakeFiles/YourLibraryName.dir/src/main.cpp.o: /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/src/main.cpp
CMakeFiles/YourLibraryName.dir/src/main.cpp.o: CMakeFiles/YourLibraryName.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dinalatapattu/Desktop/QUT/CAB201/Chess/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/YourLibraryName.dir/src/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/YourLibraryName.dir/src/main.cpp.o -MF CMakeFiles/YourLibraryName.dir/src/main.cpp.o.d -o CMakeFiles/YourLibraryName.dir/src/main.cpp.o -c /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/src/main.cpp

CMakeFiles/YourLibraryName.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/YourLibraryName.dir/src/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/src/main.cpp > CMakeFiles/YourLibraryName.dir/src/main.cpp.i

CMakeFiles/YourLibraryName.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/YourLibraryName.dir/src/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/src/main.cpp -o CMakeFiles/YourLibraryName.dir/src/main.cpp.s

CMakeFiles/YourLibraryName.dir/src/miner.cpp.o: CMakeFiles/YourLibraryName.dir/flags.make
CMakeFiles/YourLibraryName.dir/src/miner.cpp.o: /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/src/miner.cpp
CMakeFiles/YourLibraryName.dir/src/miner.cpp.o: CMakeFiles/YourLibraryName.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dinalatapattu/Desktop/QUT/CAB201/Chess/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/YourLibraryName.dir/src/miner.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/YourLibraryName.dir/src/miner.cpp.o -MF CMakeFiles/YourLibraryName.dir/src/miner.cpp.o.d -o CMakeFiles/YourLibraryName.dir/src/miner.cpp.o -c /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/src/miner.cpp

CMakeFiles/YourLibraryName.dir/src/miner.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/YourLibraryName.dir/src/miner.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/src/miner.cpp > CMakeFiles/YourLibraryName.dir/src/miner.cpp.i

CMakeFiles/YourLibraryName.dir/src/miner.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/YourLibraryName.dir/src/miner.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/src/miner.cpp -o CMakeFiles/YourLibraryName.dir/src/miner.cpp.s

CMakeFiles/YourLibraryName.dir/src/sentinel.cpp.o: CMakeFiles/YourLibraryName.dir/flags.make
CMakeFiles/YourLibraryName.dir/src/sentinel.cpp.o: /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/src/sentinel.cpp
CMakeFiles/YourLibraryName.dir/src/sentinel.cpp.o: CMakeFiles/YourLibraryName.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dinalatapattu/Desktop/QUT/CAB201/Chess/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/YourLibraryName.dir/src/sentinel.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/YourLibraryName.dir/src/sentinel.cpp.o -MF CMakeFiles/YourLibraryName.dir/src/sentinel.cpp.o.d -o CMakeFiles/YourLibraryName.dir/src/sentinel.cpp.o -c /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/src/sentinel.cpp

CMakeFiles/YourLibraryName.dir/src/sentinel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/YourLibraryName.dir/src/sentinel.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/src/sentinel.cpp > CMakeFiles/YourLibraryName.dir/src/sentinel.cpp.i

CMakeFiles/YourLibraryName.dir/src/sentinel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/YourLibraryName.dir/src/sentinel.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/src/sentinel.cpp -o CMakeFiles/YourLibraryName.dir/src/sentinel.cpp.s

CMakeFiles/YourLibraryName.dir/src/zombie.cpp.o: CMakeFiles/YourLibraryName.dir/flags.make
CMakeFiles/YourLibraryName.dir/src/zombie.cpp.o: /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/src/zombie.cpp
CMakeFiles/YourLibraryName.dir/src/zombie.cpp.o: CMakeFiles/YourLibraryName.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dinalatapattu/Desktop/QUT/CAB201/Chess/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/YourLibraryName.dir/src/zombie.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/YourLibraryName.dir/src/zombie.cpp.o -MF CMakeFiles/YourLibraryName.dir/src/zombie.cpp.o.d -o CMakeFiles/YourLibraryName.dir/src/zombie.cpp.o -c /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/src/zombie.cpp

CMakeFiles/YourLibraryName.dir/src/zombie.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/YourLibraryName.dir/src/zombie.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/src/zombie.cpp > CMakeFiles/YourLibraryName.dir/src/zombie.cpp.i

CMakeFiles/YourLibraryName.dir/src/zombie.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/YourLibraryName.dir/src/zombie.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/src/zombie.cpp -o CMakeFiles/YourLibraryName.dir/src/zombie.cpp.s

# Object files for target YourLibraryName
YourLibraryName_OBJECTS = \
"CMakeFiles/YourLibraryName.dir/src/builder.cpp.o" \
"CMakeFiles/YourLibraryName.dir/src/game.cpp.o" \
"CMakeFiles/YourLibraryName.dir/src/jester.cpp.o" \
"CMakeFiles/YourLibraryName.dir/src/main.cpp.o" \
"CMakeFiles/YourLibraryName.dir/src/miner.cpp.o" \
"CMakeFiles/YourLibraryName.dir/src/sentinel.cpp.o" \
"CMakeFiles/YourLibraryName.dir/src/zombie.cpp.o"

# External object files for target YourLibraryName
YourLibraryName_EXTERNAL_OBJECTS =

libYourLibraryName.a: CMakeFiles/YourLibraryName.dir/src/builder.cpp.o
libYourLibraryName.a: CMakeFiles/YourLibraryName.dir/src/game.cpp.o
libYourLibraryName.a: CMakeFiles/YourLibraryName.dir/src/jester.cpp.o
libYourLibraryName.a: CMakeFiles/YourLibraryName.dir/src/main.cpp.o
libYourLibraryName.a: CMakeFiles/YourLibraryName.dir/src/miner.cpp.o
libYourLibraryName.a: CMakeFiles/YourLibraryName.dir/src/sentinel.cpp.o
libYourLibraryName.a: CMakeFiles/YourLibraryName.dir/src/zombie.cpp.o
libYourLibraryName.a: CMakeFiles/YourLibraryName.dir/build.make
libYourLibraryName.a: CMakeFiles/YourLibraryName.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/dinalatapattu/Desktop/QUT/CAB201/Chess/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX static library libYourLibraryName.a"
	$(CMAKE_COMMAND) -P CMakeFiles/YourLibraryName.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/YourLibraryName.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/YourLibraryName.dir/build: libYourLibraryName.a
.PHONY : CMakeFiles/YourLibraryName.dir/build

CMakeFiles/YourLibraryName.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/YourLibraryName.dir/cmake_clean.cmake
.PHONY : CMakeFiles/YourLibraryName.dir/clean

CMakeFiles/YourLibraryName.dir/depend:
	cd /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/dinalatapattu/Desktop/QUT/CAB201/Chess /Users/dinalatapattu/Desktop/QUT/CAB201/Chess /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/build /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/build /Users/dinalatapattu/Desktop/QUT/CAB201/Chess/build/CMakeFiles/YourLibraryName.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/YourLibraryName.dir/depend
