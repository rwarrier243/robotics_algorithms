cmake_minimum_required (VERSION 2.6)
project (iLQR)
include_directories(include)
add_executable(iLQR src/main.cpp src/dynamics.cpp src/trajectory_planner.cpp src/trajectory_controller.cpp)
