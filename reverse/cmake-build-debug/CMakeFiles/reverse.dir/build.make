# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\abhis\Desktop\Projects\C++\reverse

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\abhis\Desktop\Projects\C++\reverse\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\reverse.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\reverse.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\reverse.dir\flags.make

CMakeFiles\reverse.dir\main.cpp.obj: CMakeFiles\reverse.dir\flags.make
CMakeFiles\reverse.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\abhis\Desktop\Projects\C++\reverse\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/reverse.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\BUILDT~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\reverse.dir\main.cpp.obj /FdCMakeFiles\reverse.dir\ /FS -c C:\Users\abhis\Desktop\Projects\C++\reverse\main.cpp
<<

CMakeFiles\reverse.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/reverse.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\BUILDT~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x86\cl.exe > CMakeFiles\reverse.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\abhis\Desktop\Projects\C++\reverse\main.cpp
<<

CMakeFiles\reverse.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/reverse.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\BUILDT~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\reverse.dir\main.cpp.s /c C:\Users\abhis\Desktop\Projects\C++\reverse\main.cpp
<<

# Object files for target reverse
reverse_OBJECTS = \
"CMakeFiles\reverse.dir\main.cpp.obj"

# External object files for target reverse
reverse_EXTERNAL_OBJECTS =

reverse.exe: CMakeFiles\reverse.dir\main.cpp.obj
reverse.exe: CMakeFiles\reverse.dir\build.make
reverse.exe: CMakeFiles\reverse.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\abhis\Desktop\Projects\C++\reverse\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable reverse.exe"
	"C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\reverse.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x64\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x64\mt.exe --manifests  -- C:\PROGRA~2\MICROS~2\2019\BUILDT~1\VC\Tools\MSVC\1426~1.288\bin\Hostx64\x86\link.exe /nologo @CMakeFiles\reverse.dir\objects1.rsp @<<
 /out:reverse.exe /implib:reverse.lib /pdb:C:\Users\abhis\Desktop\Projects\C++\reverse\cmake-build-debug\reverse.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\reverse.dir\build: reverse.exe

.PHONY : CMakeFiles\reverse.dir\build

CMakeFiles\reverse.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\reverse.dir\cmake_clean.cmake
.PHONY : CMakeFiles\reverse.dir\clean

CMakeFiles\reverse.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\abhis\Desktop\Projects\C++\reverse C:\Users\abhis\Desktop\Projects\C++\reverse C:\Users\abhis\Desktop\Projects\C++\reverse\cmake-build-debug C:\Users\abhis\Desktop\Projects\C++\reverse\cmake-build-debug C:\Users\abhis\Desktop\Projects\C++\reverse\cmake-build-debug\CMakeFiles\reverse.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\reverse.dir\depend

