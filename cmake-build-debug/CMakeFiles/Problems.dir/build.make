# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Informatica\Algorithms\Algorithms\USACOTrainingProblemsRepo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Informatica\Algorithms\Algorithms\USACOTrainingProblemsRepo\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\Problems.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\Problems.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Problems.dir\flags.make

CMakeFiles\Problems.dir\milk2.cpp.obj: CMakeFiles\Problems.dir\flags.make
CMakeFiles\Problems.dir\milk2.cpp.obj: ..\milk2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Informatica\Algorithms\Algorithms\USACOTrainingProblemsRepo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Problems.dir/milk2.cpp.obj"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Problems.dir\milk2.cpp.obj /FdCMakeFiles\Problems.dir\ /FS -c D:\Informatica\Algorithms\Algorithms\USACOTrainingProblemsRepo\milk2.cpp
<<

CMakeFiles\Problems.dir\milk2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Problems.dir/milk2.cpp.i"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe > CMakeFiles\Problems.dir\milk2.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Informatica\Algorithms\Algorithms\USACOTrainingProblemsRepo\milk2.cpp
<<

CMakeFiles\Problems.dir\milk2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Problems.dir/milk2.cpp.s"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Problems.dir\milk2.cpp.s /c D:\Informatica\Algorithms\Algorithms\USACOTrainingProblemsRepo\milk2.cpp
<<

# Object files for target Problems
Problems_OBJECTS = \
"CMakeFiles\Problems.dir\milk2.cpp.obj"

# External object files for target Problems
Problems_EXTERNAL_OBJECTS =

Problems.exe: CMakeFiles\Problems.dir\milk2.cpp.obj
Problems.exe: CMakeFiles\Problems.dir\build.make
Problems.exe: CMakeFiles\Problems.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Informatica\Algorithms\Algorithms\USACOTrainingProblemsRepo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Problems.exe"
	"C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Problems.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\Problems.dir\objects1.rsp @<<
 /out:Problems.exe /implib:Problems.lib /pdb:D:\Informatica\Algorithms\Algorithms\USACOTrainingProblemsRepo\cmake-build-debug\Problems.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Problems.dir\build: Problems.exe

.PHONY : CMakeFiles\Problems.dir\build

CMakeFiles\Problems.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Problems.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Problems.dir\clean

CMakeFiles\Problems.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\Informatica\Algorithms\Algorithms\USACOTrainingProblemsRepo D:\Informatica\Algorithms\Algorithms\USACOTrainingProblemsRepo D:\Informatica\Algorithms\Algorithms\USACOTrainingProblemsRepo\cmake-build-debug D:\Informatica\Algorithms\Algorithms\USACOTrainingProblemsRepo\cmake-build-debug D:\Informatica\Algorithms\Algorithms\USACOTrainingProblemsRepo\cmake-build-debug\CMakeFiles\Problems.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\Problems.dir\depend

