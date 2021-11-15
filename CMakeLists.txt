# CMakeList.txt : CMake project for IT 312- Farkle, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (CMakeTarget "Game.cpp" "Game.h" "Farkle.cpp" "Menu.cpp" "Menu.h" "Player.cpp" "Player.h" "stdafx.cpp" "stdafx.h")

# TODO: Add tests and install targets if needed.
