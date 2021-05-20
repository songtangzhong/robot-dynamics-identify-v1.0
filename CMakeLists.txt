#
cmake_minimum_required(VERSION 3.0)

project(RobotDynamics)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O3")

set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_INSTALL_PATH /usr/lib)
set(HEADERS_INSTALL_PATH /usr/include)

add_library(robotdynamics SHARED 
  src/RobotModel/robot_model.cpp
  src/RobotDynamics/robot_dynamics.cpp
  src/DynamicsIdentify/dynamics_identify.cpp
)
target_include_directories(robotdynamics
  PRIVATE 
  include
)

add_executable(test_robot_dynamics 
  examples/test_robot_dynamics.cpp
)
target_include_directories(test_robot_dynamics 
  PRIVATE 
  include
)
target_link_libraries(test_robot_dynamics 
  robotdynamics
)

install(DIRECTORY include/
  DESTINATION ${HEADERS_INSTALL_PATH}
)

install(TARGETS robotdynamics
        LIBRARY DESTINATION ${LIBRARY_INSTALL_PATH})





