# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_SOURCE_DIR = /home/pi/Desktop/raspi_rubiks

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pi/Desktop/raspi_rubiks

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/main.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/Desktop/raspi_rubiks/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/main.cpp.o -c /home/pi/Desktop/raspi_rubiks/main.cpp

CMakeFiles/main.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/Desktop/raspi_rubiks/main.cpp > CMakeFiles/main.dir/main.cpp.i

CMakeFiles/main.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/Desktop/raspi_rubiks/main.cpp -o CMakeFiles/main.dir/main.cpp.s

CMakeFiles/main.dir/solving_algorithm/Combinatorics.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/solving_algorithm/Combinatorics.cpp.o: solving_algorithm/Combinatorics.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/Desktop/raspi_rubiks/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main.dir/solving_algorithm/Combinatorics.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/solving_algorithm/Combinatorics.cpp.o -c /home/pi/Desktop/raspi_rubiks/solving_algorithm/Combinatorics.cpp

CMakeFiles/main.dir/solving_algorithm/Combinatorics.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/solving_algorithm/Combinatorics.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/Desktop/raspi_rubiks/solving_algorithm/Combinatorics.cpp > CMakeFiles/main.dir/solving_algorithm/Combinatorics.cpp.i

CMakeFiles/main.dir/solving_algorithm/Combinatorics.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/solving_algorithm/Combinatorics.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/Desktop/raspi_rubiks/solving_algorithm/Combinatorics.cpp -o CMakeFiles/main.dir/solving_algorithm/Combinatorics.cpp.s

CMakeFiles/main.dir/solving_algorithm/Cube.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/solving_algorithm/Cube.cpp.o: solving_algorithm/Cube.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/Desktop/raspi_rubiks/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/main.dir/solving_algorithm/Cube.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/solving_algorithm/Cube.cpp.o -c /home/pi/Desktop/raspi_rubiks/solving_algorithm/Cube.cpp

CMakeFiles/main.dir/solving_algorithm/Cube.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/solving_algorithm/Cube.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/Desktop/raspi_rubiks/solving_algorithm/Cube.cpp > CMakeFiles/main.dir/solving_algorithm/Cube.cpp.i

CMakeFiles/main.dir/solving_algorithm/Cube.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/solving_algorithm/Cube.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/Desktop/raspi_rubiks/solving_algorithm/Cube.cpp -o CMakeFiles/main.dir/solving_algorithm/Cube.cpp.s

CMakeFiles/main.dir/solving_algorithm/CubeParser.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/solving_algorithm/CubeParser.cpp.o: solving_algorithm/CubeParser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/Desktop/raspi_rubiks/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/main.dir/solving_algorithm/CubeParser.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/solving_algorithm/CubeParser.cpp.o -c /home/pi/Desktop/raspi_rubiks/solving_algorithm/CubeParser.cpp

CMakeFiles/main.dir/solving_algorithm/CubeParser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/solving_algorithm/CubeParser.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/Desktop/raspi_rubiks/solving_algorithm/CubeParser.cpp > CMakeFiles/main.dir/solving_algorithm/CubeParser.cpp.i

CMakeFiles/main.dir/solving_algorithm/CubeParser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/solving_algorithm/CubeParser.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/Desktop/raspi_rubiks/solving_algorithm/CubeParser.cpp -o CMakeFiles/main.dir/solving_algorithm/CubeParser.cpp.s

CMakeFiles/main.dir/solving_algorithm/FaceletCube.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/solving_algorithm/FaceletCube.cpp.o: solving_algorithm/FaceletCube.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/Desktop/raspi_rubiks/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/main.dir/solving_algorithm/FaceletCube.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/solving_algorithm/FaceletCube.cpp.o -c /home/pi/Desktop/raspi_rubiks/solving_algorithm/FaceletCube.cpp

CMakeFiles/main.dir/solving_algorithm/FaceletCube.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/solving_algorithm/FaceletCube.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/Desktop/raspi_rubiks/solving_algorithm/FaceletCube.cpp > CMakeFiles/main.dir/solving_algorithm/FaceletCube.cpp.i

CMakeFiles/main.dir/solving_algorithm/FaceletCube.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/solving_algorithm/FaceletCube.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/Desktop/raspi_rubiks/solving_algorithm/FaceletCube.cpp -o CMakeFiles/main.dir/solving_algorithm/FaceletCube.cpp.s

CMakeFiles/main.dir/solving_algorithm/MoveTable.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/solving_algorithm/MoveTable.cpp.o: solving_algorithm/MoveTable.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/Desktop/raspi_rubiks/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/main.dir/solving_algorithm/MoveTable.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/solving_algorithm/MoveTable.cpp.o -c /home/pi/Desktop/raspi_rubiks/solving_algorithm/MoveTable.cpp

CMakeFiles/main.dir/solving_algorithm/MoveTable.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/solving_algorithm/MoveTable.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/Desktop/raspi_rubiks/solving_algorithm/MoveTable.cpp > CMakeFiles/main.dir/solving_algorithm/MoveTable.cpp.i

CMakeFiles/main.dir/solving_algorithm/MoveTable.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/solving_algorithm/MoveTable.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/Desktop/raspi_rubiks/solving_algorithm/MoveTable.cpp -o CMakeFiles/main.dir/solving_algorithm/MoveTable.cpp.s

CMakeFiles/main.dir/solving_algorithm/PruningTable.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/solving_algorithm/PruningTable.cpp.o: solving_algorithm/PruningTable.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/Desktop/raspi_rubiks/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/main.dir/solving_algorithm/PruningTable.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/solving_algorithm/PruningTable.cpp.o -c /home/pi/Desktop/raspi_rubiks/solving_algorithm/PruningTable.cpp

CMakeFiles/main.dir/solving_algorithm/PruningTable.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/solving_algorithm/PruningTable.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/Desktop/raspi_rubiks/solving_algorithm/PruningTable.cpp > CMakeFiles/main.dir/solving_algorithm/PruningTable.cpp.i

CMakeFiles/main.dir/solving_algorithm/PruningTable.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/solving_algorithm/PruningTable.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/Desktop/raspi_rubiks/solving_algorithm/PruningTable.cpp -o CMakeFiles/main.dir/solving_algorithm/PruningTable.cpp.s

CMakeFiles/main.dir/solving_algorithm/RubiksCube.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/solving_algorithm/RubiksCube.cpp.o: solving_algorithm/RubiksCube.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/Desktop/raspi_rubiks/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/main.dir/solving_algorithm/RubiksCube.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/solving_algorithm/RubiksCube.cpp.o -c /home/pi/Desktop/raspi_rubiks/solving_algorithm/RubiksCube.cpp

CMakeFiles/main.dir/solving_algorithm/RubiksCube.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/solving_algorithm/RubiksCube.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/Desktop/raspi_rubiks/solving_algorithm/RubiksCube.cpp > CMakeFiles/main.dir/solving_algorithm/RubiksCube.cpp.i

CMakeFiles/main.dir/solving_algorithm/RubiksCube.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/solving_algorithm/RubiksCube.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/Desktop/raspi_rubiks/solving_algorithm/RubiksCube.cpp -o CMakeFiles/main.dir/solving_algorithm/RubiksCube.cpp.s

CMakeFiles/main.dir/solving_algorithm/Solver.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/solving_algorithm/Solver.cpp.o: solving_algorithm/Solver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/Desktop/raspi_rubiks/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/main.dir/solving_algorithm/Solver.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/solving_algorithm/Solver.cpp.o -c /home/pi/Desktop/raspi_rubiks/solving_algorithm/Solver.cpp

CMakeFiles/main.dir/solving_algorithm/Solver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/solving_algorithm/Solver.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/Desktop/raspi_rubiks/solving_algorithm/Solver.cpp > CMakeFiles/main.dir/solving_algorithm/Solver.cpp.i

CMakeFiles/main.dir/solving_algorithm/Solver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/solving_algorithm/Solver.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/Desktop/raspi_rubiks/solving_algorithm/Solver.cpp -o CMakeFiles/main.dir/solving_algorithm/Solver.cpp.s

CMakeFiles/main.dir/solving_algorithm/Vector.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/solving_algorithm/Vector.cpp.o: solving_algorithm/Vector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/Desktop/raspi_rubiks/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/main.dir/solving_algorithm/Vector.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/solving_algorithm/Vector.cpp.o -c /home/pi/Desktop/raspi_rubiks/solving_algorithm/Vector.cpp

CMakeFiles/main.dir/solving_algorithm/Vector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/solving_algorithm/Vector.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/Desktop/raspi_rubiks/solving_algorithm/Vector.cpp > CMakeFiles/main.dir/solving_algorithm/Vector.cpp.i

CMakeFiles/main.dir/solving_algorithm/Vector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/solving_algorithm/Vector.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/Desktop/raspi_rubiks/solving_algorithm/Vector.cpp -o CMakeFiles/main.dir/solving_algorithm/Vector.cpp.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/main.cpp.o" \
"CMakeFiles/main.dir/solving_algorithm/Combinatorics.cpp.o" \
"CMakeFiles/main.dir/solving_algorithm/Cube.cpp.o" \
"CMakeFiles/main.dir/solving_algorithm/CubeParser.cpp.o" \
"CMakeFiles/main.dir/solving_algorithm/FaceletCube.cpp.o" \
"CMakeFiles/main.dir/solving_algorithm/MoveTable.cpp.o" \
"CMakeFiles/main.dir/solving_algorithm/PruningTable.cpp.o" \
"CMakeFiles/main.dir/solving_algorithm/RubiksCube.cpp.o" \
"CMakeFiles/main.dir/solving_algorithm/Solver.cpp.o" \
"CMakeFiles/main.dir/solving_algorithm/Vector.cpp.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

main: CMakeFiles/main.dir/main.cpp.o
main: CMakeFiles/main.dir/solving_algorithm/Combinatorics.cpp.o
main: CMakeFiles/main.dir/solving_algorithm/Cube.cpp.o
main: CMakeFiles/main.dir/solving_algorithm/CubeParser.cpp.o
main: CMakeFiles/main.dir/solving_algorithm/FaceletCube.cpp.o
main: CMakeFiles/main.dir/solving_algorithm/MoveTable.cpp.o
main: CMakeFiles/main.dir/solving_algorithm/PruningTable.cpp.o
main: CMakeFiles/main.dir/solving_algorithm/RubiksCube.cpp.o
main: CMakeFiles/main.dir/solving_algorithm/Solver.cpp.o
main: CMakeFiles/main.dir/solving_algorithm/Vector.cpp.o
main: CMakeFiles/main.dir/build.make
main: /opt/vc/lib/libmmal_core.so
main: /opt/vc/lib/libmmal_util.so
main: /opt/vc/lib/libmmal.so
main: /usr/lib/arm-linux-gnueabihf/libopencv_shape.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_stitching.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_superres.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_videostab.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_aruco.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_bgsegm.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_bioinspired.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_ccalib.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_datasets.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_dpm.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_face.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_freetype.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_fuzzy.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_hdf.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_line_descriptor.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_optflow.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_plot.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_reg.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_saliency.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_stereo.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_structured_light.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_surface_matching.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_text.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_ximgproc.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_xobjdetect.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_xphoto.so.3.2.0
main: /usr/lib/libwiringPi.so
main: /usr/lib/arm-linux-gnueabihf/libopencv_video.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_viz.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_phase_unwrapping.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_rgbd.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_calib3d.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_features2d.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_flann.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_objdetect.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_ml.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_highgui.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_photo.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_videoio.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_imgcodecs.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_imgproc.so.3.2.0
main: /usr/lib/arm-linux-gnueabihf/libopencv_core.so.3.2.0
main: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pi/Desktop/raspi_rubiks/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main

.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	cd /home/pi/Desktop/raspi_rubiks && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pi/Desktop/raspi_rubiks /home/pi/Desktop/raspi_rubiks /home/pi/Desktop/raspi_rubiks /home/pi/Desktop/raspi_rubiks /home/pi/Desktop/raspi_rubiks/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.dir/depend
