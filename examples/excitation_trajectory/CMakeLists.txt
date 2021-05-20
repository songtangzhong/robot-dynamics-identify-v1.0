#
cmake_minimum_required(VERSION 3.0)

project(excitation_trajectory)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O3")
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(HEADERS 
    /usr/include/RobotModel
    /usr/include/DynamicsIdentify
)

add_executable(excitation_trajectory excitation_trajectory.cpp)

target_link_libraries(excitation_trajectory librobotdynamics.so libnlopt.so libm.so)




