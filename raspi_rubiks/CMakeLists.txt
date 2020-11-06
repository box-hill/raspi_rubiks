cmake_minimum_required (VERSION 2.8)

include_directories(solving_algorithm)

project (Raspi_Rubiks)
find_library(wiringPi_LIB wiringPi)
set(raspicam_DIR "/usr/local/lib/cmake")
find_package(raspicam REQUIRED)
find_package(OpenCV)
IF  ( OpenCV_FOUND AND raspicam_CV_FOUND)
MESSAGE(STATUS "COMPILING OPENCV TESTS")

add_executable (main 
	main.cpp
	solving_algorithm/Combinatorics.cpp	
	solving_algorithm/Combinatorics.hpp
	solving_algorithm/Cube.cpp
	solving_algorithm/Cube.hpp
	solving_algorithm/CubeParser.cpp
	solving_algorithm/CubeParser.hpp
	solving_algorithm/FaceletCube.cpp
	solving_algorithm/FaceletCube.hpp
	solving_algorithm/KociMoveTables.hpp
	solving_algorithm/MoveTable.cpp
	solving_algorithm/MoveTable.hpp
	solving_algorithm/PruningTable.cpp
	solving_algorithm/PruningTable.hpp
	solving_algorithm/RubiksCube.cpp
	solving_algorithm/RubiksCube.hpp
	solving_algorithm/Solver.cpp
	solving_algorithm/Solver.hpp
	solving_algorithm/Vector.cpp
	solving_algorithm/Vector.hpp
)

target_link_libraries (main ${raspicam_CV_LIBS} ${wiringPi_LIB})
ELSE()
MESSAGE(FATAL_ERROR "OPENCV NOT FOUND IN YOUR SYSTEM")
ENDIF()